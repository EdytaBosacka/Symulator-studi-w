
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <cstdlib>

#include "Class_Czlowiek.h"
#include "Class_Student.h"


Czlowiek Student::zrezygnuj_ze_studiow()
{
	Czlowiek czlowiek;
	czlowiek.imie = this->imie;
	czlowiek.nazwisko = this->nazwisko;

	return czlowiek;

};