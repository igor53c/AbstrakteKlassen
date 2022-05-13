#pragma once
#include "Mitarbeiter.h"

class Arbeiter : public Mitarbeiter
{
public:
	Arbeiter(const string, const double, const double);

	double getStunden() const;
	double getStundenlohn() const;

	void ausgabe() const override;

	void setVorgesetzter(const string) override;

	string getVorgesetzter() const override;

	double getGehalt() const override;

private:
	double stunden;
	double stundenlohn;

	string vorgesetzter;

};

