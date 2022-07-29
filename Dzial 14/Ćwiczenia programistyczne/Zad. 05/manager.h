#pragma once
#include "abstr_emp.h"
class manager : virtual public abstr_emp
{
private:
	int inchargeof;	// liczba obiektow abstr_emp ktorymi zarzadza

protected:
	int inChargeOf() const { return inchargeof; }	// wyjscie
	int& inChargeOf() { return inchargeof; }		// wejscie

public:
	manager() : abstr_emp(), inchargeof(0) {};

	manager(const std::string& fn, const std::string& ln, const std::string& j, int ico = 0)
		: inchargeof(ico), abstr_emp(fn, ln, j) {};
	manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) {};
	manager(const manager& m) : abstr_emp(m), inchargeof(m.inchargeof) {};

	virtual void ShowAll() const;
	virtual void SetAll();
};

