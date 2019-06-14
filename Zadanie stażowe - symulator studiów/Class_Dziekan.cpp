
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <cstdlib>

#include "Class_Dziekan.h"
#include "Class_Nauczyciel.h"
#include "Class_Student.h"
#include "Class_Czlowiek.h"

Nauczyciel Dziekan::zatrudnij_nauczyciela(Czlowiek &czlowiek)
{
	Nauczyciel nauczyciel;
	nauczyciel.imie = czlowiek.imie;
	nauczyciel.nazwisko = czlowiek.nazwisko;

	return nauczyciel;

};

Czlowiek Dziekan::zwolnij_nauczyciela(Nauczyciel &nauczyciel)
{
	Czlowiek czlowiek;
	czlowiek.imie = nauczyciel.imie;
	czlowiek.nazwisko = nauczyciel.nazwisko;

	return czlowiek;

};

Student Dziekan::zatrudnij_studenta(Czlowiek &czlowiek)
{
    Student student;
	student.imie = czlowiek.imie;
	student.nazwisko = czlowiek.nazwisko;

	return student;

};

Czlowiek Dziekan::zwolnij_studenta(Student &student)
{
    Czlowiek czlowiek;
	czlowiek.imie = student.imie;
	czlowiek.nazwisko = student.nazwisko;

	return czlowiek;

};
