#pragma once
#include "Mitarbeiter.h"

class Manager : public Mitarbeiter
{
public:
	Manager(const string, const double);

	void ausgabe() const override;

	void setVorgesetzter(const string) override;

	string getVorgesetzter() const override;

	double getGehalt() const override;

private:
	string vorgesetzter;
	double gehalt;
};

