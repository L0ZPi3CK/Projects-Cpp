#pragma once
#include <string>
using std::string;

class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string& fn = "brak", const string& ln = "brak", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void RestTable(bool v) { hasTable = v; };
};

