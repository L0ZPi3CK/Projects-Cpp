#include "queue.h"
#include <cstdlib>

// metody klasu Queue
Queue::Queue(int qs) : qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}

Queue::~Queue()
{
	Node* temp;
	while (front != nullptr)	// do wczytania kolejki
	{
		temp = front;			// zachowanie adresu bierzacego elementu
		front = front->next;	// przesuniecie wskaznika do elementu nastepnego
		delete temp;			// zwolnienie elementu spod zapamietanego adresu
	}
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount() const
{
	return items;
}

// dodaje element do kolejki
bool Queue::enqueue(const Item& item)
{
	if (isfull())
		return false;
	Node* add = new Node;
	// w przypadku nieowodzenia przydzialu new zrzuci wyjatek std::bad_alloc
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == nullptr)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

// kopiuje element czolowy kolejki do argumentu wywolania i usuwa go z kolejki
bool Queue::dequeue(Item& item)
{
	if (front == nullptr)
		return false;
	item = front->item;		//skopiowanie do item pierwszego elementu z kolejki
	items--;
	Node* temp = front;		// zachowanie polo¿enia pierwszego elementu
	front = front->next;	// przestawienie wskaznika front na nastepny element
	delete temp;			// usuniecie dotychczasowego pierwszego elementu
	if (items == 0)
		rear = nullptr;
	return true;
}

// metody klasy Customer

// kiedy klient trafia do kolejki, zapamietywany jest biezacy czas systemowy
// nastepnie losowany jest czas obslugi klienta od 1 do 3 minut

void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}