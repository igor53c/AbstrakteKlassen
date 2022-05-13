#include "Arbeiter.h"

Arbeiter::Arbeiter(const string name, const double stunden, const double stundenlohn) 
	: Mitarbeiter(name)
{
	this->stunden = stunden;

	this->stundenlohn = stundenlohn;
}

double Arbeiter::getStunden() const
{
	return stunden;
}

double Arbeiter::getStundenlohn() const
{
	return stundenlohn;
}

void Arbeiter::ausgabe() const
{
	cout << "Arbeiter:" << endl;
	
	Mitarbeiter::ausgabe();

	printf("Anzahl Sunden: %1.2f\n", getStunden());
	printf("Sundenlohn   : %1.2f EUR\n", getStundenlohn());

	cout << endl;
}

void Arbeiter::setVorgesetzter(const string name)
{
	vorgesetzter = name;
}

string Arbeiter::getVorgesetzter() const
{
	return vorgesetzter;
}

double Arbeiter::getGehalt() const
{
	return getStunden() * getStundenlohn();
}
