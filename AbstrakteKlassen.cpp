// AbstrakteKlassen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Mitarbeiter.h"
#include "Arbeiter.h"
#include "Manager.h"
#include "Angestellter.h"

using namespace std;

void ausgabe(vector<Mitarbeiter*>&);

int main()
{
	locale::global(locale("German_germany"));

	// Mitarbeiter m("Meier");

	Arbeiter a("Max", 160, 22.50);

	a.ausgabe();

	vector<Mitarbeiter*> v;

	Mitarbeiter* m = new Arbeiter("Mustermann, Max", 160, 22.50);
	m->setVorgesetzter("Müller, Bernd");
	v.push_back(m);

	m = new Arbeiter("Tengelmann, Alfred", 160, 22.90);
	m->setVorgesetzter("Kaiser, Gerhard");
	v.push_back(m);

	m = new Arbeiter("Ärger, August", 160, 19.90);
	m->setVorgesetzter("Kaiser, Gerhard");
	v.push_back(m);

	m = new Arbeiter("Klein, Manfred", 80, 15.50);
	m->setVorgesetzter("Müller, Bernd");
	v.push_back(m);

	m = new Angestellter("Müller, Bernd", 4567.50);
	m->setVorgesetzter("Kaiser, Gerhard");
	v.push_back(m);

	m = new Angestellter("Zimmermann, Udo", 3500);
	m->setVorgesetzter("Kaiser, Gerhard");
	v.push_back(m);

	m = new Manager("Kaiser, Gerhard", 287523.50);
	m->setVorgesetzter("Ackermann, Josef");
	v.push_back(m);

	cout << "Ausgabe aller Mitarbeiter" << endl;
	cout << "-------------------------" << endl;
	ausgabe(v);
	cout << endl;


	cout << "Aufsteigende Sortierung nach Name" << endl;
	cout << "---------------------------------" << endl;

	Mitarbeiter::sort(v, Mitarbeiter::SortOrder::ASCENDING);

	ausgabe(v);
	cout << endl;

	cout << "Absteigende Sortierung nach Name" << endl;
	cout << "--------------------------------" << endl;

	Mitarbeiter::sort(v, Mitarbeiter::SortOrder::DESCENDING);

	ausgabe(v);
	cout << endl;

	for (const auto* m : v)
		delete m;

	v.clear();

	cout << endl;

	return EXIT_SUCCESS;
}

void ausgabe(vector<Mitarbeiter*>& v)
{
	for (const auto* m : v)
	{
		m->ausgabe();
	}
}