#pragma once
#include "manager.h"
#include "fink.h"
class highfink : public manager, public fink
{
public:
	highfink() : fink(), manager(){};
	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico)
		: manager(fn,ln,j,ico) { fink::reportsTo() = rpo; };
	highfink(const abstr_emp& e, const std::string& rpo, int ico)
		: fink(e, rpo) { manager::inChargeOf() = ico; };

	highfink(const fink& f, int ico) 
		: abstr_emp(f){ manager::inChargeOf() = ico; };
	highfink(const manager& m, const std::string& rpo) 
		: abstr_emp(m) { fink::reportsTo() = rpo; };

	//highfink(const highfink& h);

	virtual void ShowAll() const;
	virtual void SetAll();
};

