#include "nag.h"
#include <iostream>

Stack::Stack()
{
	top = 0;
}

bool Stack::isempty()const
{
	return top == 0;
}

bool Stack::isfull()const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	if (top < MAX)
	{
		for (int i = 0; i < 35; i++)
		{
			items[top].fullname[i] = item.fullname[i];
			if (item.fullname[i] == '\0')
				break;
		}
		items[top].payment = item.payment;
		top = top + 1;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		items[top].payment = 0;
		for (int i = 0; i < 35; i++)
		{
			items[top].fullname[i] = '\0';
		}
		top = top - 1;
		for (int i = 0; i < 35; i++)
		{
			item.fullname[i] = items[top].fullname[i];
			if (item.fullname[i] == '\0')
				break;
		}
		return true;
	}
	else
		return false;
}