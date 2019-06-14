
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <cstdlib>

#include "Class_Czlowiek.h"
#include "Class_Student.h"


void Czlowiek::dodaj()
{
imie:
	string imie;
	cout << "Podaj imie uzytkownika" << endl;
	cin >> imie;
	if (((imie[0]) > 96) && ((imie[0]) < 123) || (imie[0] > 47) && (imie[0] < 58)) {
		cout << "Twoje imie zaczyna sie od malej litery lub cyfry :( POPRAW DANE :)";
		string imie2;
		cin >> imie2;

		if ((imie2[0] > 64) && (imie2[0] < 91)) { cout << "Teraz jest ok" << endl << "Twoje imie brzmi:" << "" << imie2 << endl; };
		if ((((imie2[0]) > 96) && ((imie2[0]) < 123) || (imie2[0] > 47) && (imie2[0] < 58))) {

			cout << "Twoje imie zaczyna sie od malej litery lub cyfry :(" << endl;
			goto imie;
		};
	}
	if ((imie[0] > 64) && (imie[0] < 91)) {
		cout << "Twoje imie brzmi: " << "" << imie << endl;
	};

nazwisko:
	string nazwisko;
	cout << "Podaj nazwisko uzytkownika" << endl;
	cin >> nazwisko;

	if (((nazwisko[0]) > 96) && ((nazwisko[0]) < 123) || (nazwisko[0] > 47) && (nazwisko[0] < 58)) {
		cout << "Twoje nazwisko zaczyna sie od malej litery lub cyfry :( POPRAW DANE :)";
		string nazwisko2;
		cin >> nazwisko2;

		if ((nazwisko2[0] > 64) && (nazwisko2[0] < 91)) { cout << "Teraz jest ok" << endl << "Twoje nazwisko brzmi:" << " " << nazwisko2 << endl; };
		if ((((nazwisko2[0]) > 96) && ((nazwisko2[0]) < 123) || (nazwisko2[0] > 47) && (nazwisko2[0] < 58))) {

			cout << "Twoje nazwisko zaczyna sie od malej litery lub cyfry :(" << endl;
			goto nazwisko;
		};
	}
	if ((nazwisko[0] > 64) && (nazwisko[0] < 91)) {
		cout << "Twoje nazwisko brzmi:" << "" << nazwisko << endl;
	};
pesel:
	string pesel;
	cout << "Podaj 11 cyfrowy pesel uzytkownika" << endl;
	cin >> pesel;
	int dlugosc = (pesel).length();
	
    if (dlugosc == 11) { cout << "Podales prawidlowy numer pesel" << endl; }
	if (dlugosc != 11) { cout << "Twoj numer pesel jest nieprawidlowy :(" << endl; goto pesel; };
email:

	string email;
	cout << "Podaj email" << endl;
	cin >> email;
	if (email.find("@") != string::npos && email.find(".") != string::npos&& email.find("@") < email.rfind("."))
	{
		cout << "Twoj email jest prawidlowy" << endl;
	}
	else { cout << "Twoj email jest nieprawidlowy" << endl; goto email; }

numer:
	int numer_telefonu;
	cout << "Podaj 9 cyfrowy numer telefonu uzytkownika" << endl;
	cin >> numer_telefonu;
	if (numer_telefonu >= 100000000 && numer_telefonu <1000000000) { cout << "Podales prawidlowy numer telefonu" << endl; }
	else { cout << "Twoj numer telefonu jest nieprawidlowy :(" << endl; goto numer; };



};

