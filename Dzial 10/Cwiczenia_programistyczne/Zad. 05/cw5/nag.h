#pragma once
#ifndef CUSTOMER_H_
#define CUSTOMER_H_

struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty()const;
	bool isfull()const;
	// push() zwraca false, jesli stos jest juz pelen (else true)
	bool push(const Item& item);	//odklada element na stos
	// pop() zwraca false jesli stos jest pusty (else true)
	bool pop(Item& item);			//zdejmuje element ze stosu
};

#endif // !CUSTOMER_H_
