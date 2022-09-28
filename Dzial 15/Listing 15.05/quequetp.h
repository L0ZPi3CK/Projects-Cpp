#pragma once
template <class Item>
class QueueTP
{
private:
	enum {Q_SIZE = 10};

	// definicja klasy NODE
	class Node
	{
	public:
		Item item;
		Node* next;
		Node(const Item & i) : item(i), next(0) {}
	};

	Node* front;	// wskaznik na przod kolejki
	Node* rear;		// wskaznik na tyl kolejki
	int items;		// aktualna liczba elementow w kolejce
	const int qsize;// maksymalna liczba elementow w kolejce

	QueueTP(const QueueTP & q) : qsize(0) {}
	QueueTP& operator=(const QueueTP& q) { return *this; }
public:

	QueueTP(int us = Q_SIZE);
	~QueueTP();

	bool isempty() const
	{
		return items == 0;
	}
	bool isfull() const
	{
		return items == qsize;
	}
	int queuecount() const
	{
		return items;
	}
	bool enqueue(const Item& item);	// dodaje element na koniec kolejki
	bool dequeue(Item& item);		// usuwa element z poczatku kolejki
};

// metody klasy QueueTP
template <class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
	front = rear = 0;
	items = 0;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
	Node* temp;
	while (front != 0)	// dopoki kolejka nie jest pusta
	{
		temp = front;			// zapisuje adres poczatku kolejki
		front = front->next;	// ustawia wskaünik na nastepny element
		delete temp;			// usuwa dawny poczatek
	}
}

// dodaje element do kolejki
template <class Item>
bool QueueTP<Item>::enqueue(const Item& item)
{
	if (isfull())
		return false;
	Node* add = new Node(item);	// tworzy element, w przypadku bledu new zglasza wyjatek std::bad_alloc
	items++;
	if (front == 0)		// jesli kolejka jest pusta
		front = add;	// dodaje element na poczatek kolejki
	else
		rear->next = add;	// w przeciwnym raze dodaje na koniec
	rear = add;			// koniec kolejki wskazuje na dany element
	return true;
}

// umieszcza poczatkowy element w obiekcie item i usuwa z kolejki
template <class Item>
bool QueueTP<Item>::dequeue(Item& item)
{
	if (front == 0)
		return false;
	item = front->item;	// ustawia item na pierwszy element kolejki
	items--;
	Node* temp = front;	// zapisuje adres pierwszego elementu
	front = front->next;// ustawia poczatek na nastepny element
	delete temp;		// usuwa poprzedni poczatek
	if (items == 0)
		rear = 0;
	return true;
}