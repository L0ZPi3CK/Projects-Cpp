#pragma once

class Customer
{
private:
	long arrive;		// czas dolaczenia klienta do kolejki
	int processtime;	// czas obslugi klienta
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime()const { return processtime; }
};

typedef Customer Item;
class Queue
{
private:
	// definicje zasiegu klasy
	// Node to definicja zagniezdzona klasy, lokalna wzgledem tej klasy
	struct Node { Item item; struct Node * next; };
	enum{Q_SIZE = 10};

	// prywatne skladowe klasy
	Node* front;			// wskaznik czola kolejki
	Node* rear;				// wskaznik ogona kolejki 
	int items;				// biezaca liczba elementow kolejki
	const int qsize;		// maksymalna liczba elementow kolejki

	// definicje blokujace publiczny dostep do operacji kopiowania
	Queue(const Queue& q) : qsize(0) { }
	Queue& operator=(const Queue& q) { return *this; }

public:
	Queue(int qs = Q_SIZE);			// tworzy kolejke o pojemnosci qs
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Item& item);	// dodaje element na koniec kolejki
	bool dequeue(Item& item);		// wyciaga element z czola kolejki
};

