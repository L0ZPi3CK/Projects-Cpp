#pragma once
#include "abstr_emp.h"
class fink : virtual public abstr_emp
{
private:
	std::string reportsto;	// do kogo fink przesyla raport

protected:
	const std::string reportsTo() const { return reportsto; }	// wyjscie
	std::string& reportsTo() { return reportsto; }				// wejscie

public:
	fink() : abstr_emp(), reportsto("None") {};

	fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) 
		: reportsto(rpo), abstr_emp(fn, ln, j) {};
	fink(const abstr_emp & e, const std::string & rpo) 
		: reportsto(rpo), abstr_emp(e){};
	fink(const fink& e) : abstr_emp(e), reportsto(e.reportsto) {};

	virtual void ShowAll() const;
	virtual void SetAll();
};

