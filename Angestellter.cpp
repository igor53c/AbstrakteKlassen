#include "Angestellter.h"

Angestellter::Angestellter(const string name, const double gehalt) : Mitarbeiter(name)
{
    this->gehalt = gehalt;
}

void Angestellter::ausgabe() const
{
    cout << "Angestellter:" << endl;

    Mitarbeiter::ausgabe();

    cout << endl;
}

void Angestellter::setVorgesetzter(const string name)
{
    vorgesetzter = name;
}

string Angestellter::getVorgesetzter() const
{
    return vorgesetzter;
}

double Angestellter::getGehalt() const
{
    return gehalt;
}
