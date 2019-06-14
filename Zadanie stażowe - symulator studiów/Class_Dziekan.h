#ifndef DZIEKAN_H
#define DZIEKAN_H

#include <iostream>
#include <cstdio>
#include <string>
#include <conio.h>
#include <cstdlib>

#include "Class_Pracownik.h"
#include "Class_Nauczyciel.h"
#include "Class_Czlowiek.h"
#include "Class_Student.h"

class Dziekan : public Pracownik
{
public:
	Nauczyciel zatrudnij_nauczyciela(Czlowiek &czlowiek);
	Czlowiek zwolnij_nauczyciela(Nauczyciel &nauczyciel);
	Student zatrudnij_studenta(Czlowiek &czlowiek);
	Czlowiek zwolnij_studenta(Student &student);
};


#endif
