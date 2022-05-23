#pragma once
#include <string>

class Worker	//abstrakcyjna klasa bazowa
{
private:
	std::string fullname;
	long id;
public:
	Worker() : fullname("brak"), id(0L) {}
	Worker(const std::string& s, long n) : fullname(s), id(n) {}
	virtual void Set();
	virtual void Show() const;
};

class Waiter : public Worker
{
private:
	int panache;
public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const std::string& s, long n, int p = 0) : Worker(s, n), panache(p) {}
	Waiter(const Worker& wk, int p = 0) : Worker(wk), panache(p) {}
	void Set();
	void Show() const;
};

class Singer : public Worker
{
protected:
	enum { inny, alt, kontralt, sopran, bas, baryton, tenor};
	enum {Vtypes = 7};
private:
	char pv[Vtypes];	// odpowiednik typu glosu w postaci ciagu znakow		//W podreczniku jest static char* pv[Vtypes] ale ta forma sie sypie i ja sam nie wiem czemu ktos
	int voice;																	//chcialby zeby pv zostalo stworzone tylko raz gdy odpowiada ono za typ glosu a mamy 2 spiewakow
public:
	Singer() : Worker(), voice(inny) {};
	Singer(const std::string& s, long n, int v = inny) : Worker(s, n), voice(v) {};
	Singer(const Worker& wk, int v = inny) : Worker(wk), voice(v) {};
	void Set();
	void Show() const;
};