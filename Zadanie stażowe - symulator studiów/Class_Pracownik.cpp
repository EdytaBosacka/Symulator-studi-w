
#include <iostream>
#include <cstdio>
#include <string>
#include <conio.h>
#include <cstdlib>

#include "Class_Czlowiek.h"
#include "Class_Pracownik.h"


Czlowiek Pracownik::zrezygnuj_z_pracy(Pracownik &pracownik)
{
	Czlowiek czlowiek;
	czlowiek.imie = pracownik.imie;
	czlowiek.nazwisko = pracownik.nazwisko;

	return czlowiek;

};