#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstdio>
#include <string>
#include <conio.h>
#include <cstdlib>

#include "Class_Czlowiek.h"

using namespace std;
class  Student : public Czlowiek
{
public:
	string data_dolaczenia;
	float srednia_ocena;
	Czlowiek zrezygnuj_ze_studiow();

};


#endif

