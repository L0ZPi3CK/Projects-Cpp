#pragma once
#include "abstr_emp.h"
class employee : public abstr_emp
{
public:

	employee(std::string fn, std::string ln, std::string j) : abstr_emp(fn, ln, j){};
	virtual void ShowAll() const;
	virtual void SetAll();
};

