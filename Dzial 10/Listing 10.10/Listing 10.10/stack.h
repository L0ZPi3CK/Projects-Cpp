#pragma once
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;
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
	//push() zwraca false jesli stos jest juz pelen (true w pozostalych przypadkach)
	bool push(const Item& item);	// odklada element na stos
	// pop() zwraca zwraca false jesli stos jest juz pusty(true w pozostalych przypadkach)
	bool pop(Item& item);			//zdejmuje element ze stosu
};

#endif // !STACK_H_
