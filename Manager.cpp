#include "Manager.h"

Manager::Manager(const string name, const double gehalt) : Mitarbeiter(name)
{
	this->gehalt = gehalt;
}

void Manager::ausgabe() const
{
	cout << "Manager:" << endl;

	Mitarbeiter::ausgabe();

	cout << endl;
}

void Manager::setVorgesetzter(const string name)
{
	vorgesetzter = name;
}

string Manager::getVorgesetzter() const
{
	return vorgesetzter;
}

double Manager::getGehalt() const
{
	return gehalt / 12;
}
