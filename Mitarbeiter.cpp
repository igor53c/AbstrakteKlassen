#include "Mitarbeiter.h"

Mitarbeiter::Mitarbeiter(const string name)
{
	this->name = name;
}

Mitarbeiter::~Mitarbeiter() = default;

string Mitarbeiter::getName() const
{
	return name;
}

void Mitarbeiter::ausgabe() const
{
	cout << "Name: " << getName() << endl;
	cout << "Vorgesetzter: " << getVorgesetzter() << endl;
	printf("Gehalt: %1.2f EUR\n", getGehalt());
	cout << "------------------------------------------------\n" << endl;
}

void Mitarbeiter::sort(vector<Mitarbeiter*>& v, const SortOrder sortOrder)
{
	switch (sortOrder)
	{
	case SortOrder::ASCENDING:
		std::sort(v.begin(), v.end(), sortAscending);
		break;

	case SortOrder::DESCENDING:
		std::sort(v.begin(), v.end(), sortDescending);
		break;
	}
}

bool Mitarbeiter::sortAscending(const Mitarbeiter* m1, const Mitarbeiter* m2)
{

	const collate<char>& col = use_facet<collate<char> >(locale()); 

	string s1 = m1->getName();
	string s2 = m2->getName();

	const char* pData1 = s1.data();
	const char* pData2 = s2.data();

	return (col.compare(pData1, pData1 + s1.length(), pData2, pData2 + s2.length()) < 0);
}

bool Mitarbeiter::sortDescending(const Mitarbeiter* m1, const Mitarbeiter* m2)
{

	const collate<char>& col = use_facet<collate<char> >(locale()); 

	string s1 = m1->getName();
	string s2 = m2->getName();

	const char* pData1 = s1.data();
	const char* pData2 = s2.data();

	return (col.compare(pData1, pData1 + s1.length(), pData2, pData2 + s2.length()) > 0);
}
