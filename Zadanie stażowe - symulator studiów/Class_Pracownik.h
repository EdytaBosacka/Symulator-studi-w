#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <iostream>
#include <cstdio>
#include <string>
#include <conio.h>
#include <cstdlib>

#include "Class_Czlowiek.h"

class Pracownik : public Czlowiek
{
public:
	Czlowiek zrezygnuj_z_pracy(Pracownik &pracownik);

};


#endif