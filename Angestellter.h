#pragma once
#include "Mitarbeiter.h"

class Angestellter : public Mitarbeiter
{
public:
	Angestellter(const string, const double);

	void ausgabe() const override;

	void setVorgesetzter(const string) override;

	string getVorgesetzter() const override;

	double getGehalt() const override;

private:
	string vorgesetzter;

	double gehalt;
};

