#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>

using namespace std;

class Mitarbeiter abstract
{
public:

	enum class SortOrder
	{
		ASCENDING,
		DESCENDING
	};

	Mitarbeiter(const string);

	virtual ~Mitarbeiter();

	string getName() const;

	virtual void ausgabe() const;

	virtual void setVorgesetzter(const string) abstract;

	virtual string getVorgesetzter() const abstract;

	virtual double getGehalt() const abstract;

	static void sort(vector<Mitarbeiter*>&, const SortOrder);

private:
	string name;

	static bool sortAscending(const Mitarbeiter*, const Mitarbeiter*);
	static bool sortDescending(const Mitarbeiter*, const Mitarbeiter*);
};

