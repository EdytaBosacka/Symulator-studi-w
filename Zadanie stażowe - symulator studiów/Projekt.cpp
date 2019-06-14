// Projekt2.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <string>
#include <conio.h>
#include <cstdlib>


#include "Class_Czlowiek.h"
#include "Class_Nauczyciel.h"
#include "Class_Dziekan.h"
#include "Class_Student.h"
#include "Class_Pracownik.h"

using namespace std;


int main()
{
	Czlowiek czlowiek1;
	Czlowiek czlowiek2;
	Czlowiek czlowiek3;

	czlowiek1.imie = "Mateusz";
	czlowiek1.nazwisko = "Nowak";

	czlowiek2.imie = "Jakub";
	czlowiek2.nazwisko = "Kowalski";

	czlowiek3.imie = "Dawid";
	czlowiek3.nazwisko = "Pawlowicz";

	Student student1;
	Student student2;

	student1.imie = "Marcin";
	student1.nazwisko = "Jasinski";

	student2.imie = "Jacek";
	student2.nazwisko = "Sobkowski";

	Nauczyciel nauczyciel1;
	Nauczyciel nauczyciel2;

	nauczyciel1.imie = "Anna";
	nauczyciel1.nazwisko = "Misiewicz";

	nauczyciel2.imie = "Martyna";
	nauczyciel2.nazwisko = "Wysocka";

	Dziekan dziekan1;

	dziekan1.imie = "Zbigniew";
	dziekan1.nazwisko = "Dziekanski";

	Czlowiek tab[10];
	tab[0] = czlowiek1;
	tab[1] = czlowiek2;
	tab[2] = czlowiek3;
	int licznik = 3;

	Student tab1[10];
	tab1[0] = student1;
	tab1[1] = student2;
	int licznik1 = 2;

	Nauczyciel tab2[10];
	tab2[0] = nauczyciel1;
	tab2[1] = nauczyciel2;
	int licznik2 = 2;

	int a = 0;
	int b = 6;

	while (a > 5 || a < 1)
	{
	menu:
		cout << "******MENU******" << endl;
		cout << "1. Wciel sie w czlowieka" << endl;
		cout << "2. Wciel sie w studenta" << endl;
		cout << "3. Wciel sie w nauczyciela" << endl;
		cout << "4. Wciel sie w dziekana" << endl;
		cout << "5. Dodaj czlowieka " << endl;
		cout << " Wybor: ";
		cin >> a;

		switch (a)
		{
		case 1:
			system("cls");
			cout << " Wybieram: ";
			for (int i = 0; i < licznik; i++)
			{
				cout << i << "." << tab[i].imie << " ";
			};
			cout << endl;
			int wybor;
			cin >> wybor;

			{
				char odpowiedz;
				cout << "Wybrales imie:" << tab[wybor].imie << endl;
				cout << "Wybrales nazwisko:" << tab[wybor].nazwisko << endl;
				cout << "Wybierz sie na studia [s]" << endl;
				cout << "Powrot do menu [m] " << endl;
				cin >> odpowiedz;
				if (odpowiedz == 'm') { system("cls"); goto menu; };
				if (odpowiedz == 's') {
					system("cls");
					cout << "Czy chcesz aplikowac na studia? (t/n) \n" << endl;
					char odp;
					cin >> odp;
					if (odp == 't')
					{
						system("cls");
						Student student1 = dziekan1.zatrudnij_studenta(tab[wybor]);
						tab1[licznik1] = student1;
						licznik1++;
						for (int i = wybor; i < licznik - 1; i++)
						{
							tab[i] = tab[i + 1];
						}
						licznik--;
						cout << " Zostales studentem, gratulacje !!!" << endl;
						system("pause");
						system("cls");  goto menu;

					}
					if (odp == 'm') { system("cls");  goto menu; };
					if (odp == 'n') { system("cls");  cout << "Nie jestes studentem :(" << endl; system("pause");system("cls");  goto menu; };
				}
				
			}
			break;
		case 2:
			system("cls");
			cout << " Wybieram: ";
			for (int i = 0; i < licznik1; i++)
			{
				cout << i << "." << tab1[i].imie << " ";
			};
			cout << endl;
			int wybor2;
			cin >> wybor2;

			{
			    char odpowiedz2;
				cout << "Wybrales imie:" << tab1[wybor2].imie << endl;
				cout << "Wybrales nazwisko:" << tab1[wybor2].nazwisko << endl;
				cout << "Zrezygnuj ze studiow [z]" << endl;
				cout << "Powrot do menu [m] " << endl;
				cin >> odpowiedz2;
				if (odpowiedz2 == 'm') { system("cls"); goto menu; };
				if (odpowiedz2 == 'z') {
					system("cls");
					cout << "Czy chcesz zrezygnowac ze studiow? (t/n) \n" << endl;
					char odp2;
					cin >> odp2;
					if (odp2 == 't')
					{
						system("cls");
						Czlowiek czlowiek1 = tab1[wybor2].zrezygnuj_ze_studiow();
						tab[licznik] = czlowiek1;
						licznik++;
						for (int i = wybor2; i < licznik1 - 1; i++)
						{
							tab1[i] = tab1[i + 1];
						}
						licznik1--;
						cout << " Zrezygnowales ze studiow, gratulacje !!!" << endl;
						system("pause");
						system("cls");  goto menu;

					}
					if (odp2 == 'm') { system("cls");  goto menu; };
					if (odp2 == 'n') { system("cls");  cout << "Jestes dalej studentem :)" << endl; system("pause");system("cls");  goto menu; } 
				}
			}
			break;
        case 3:
			system("cls");
			cout << " Wybieram: ";
			for (int i = 0; i < licznik2; i++)
			{
				cout << i << "." << tab2[i].imie << " ";
			};
			cout << endl;
			int wybor3;
			cin >> wybor3;
			{
		    char odpowiedz3;
			cout << "Wybrales imie:" << tab2[wybor3].imie << endl;
			cout << "Wybrales nazwisko:" << tab2[wybor3].nazwisko << endl;
			cout << "Zmien ocene studentowi [o]" << endl;
			cout << "Powrot do menu [m] " << endl;
			cin >> odpowiedz3;
			if (odpowiedz3 == 'm') { system("cls"); goto menu; };
			if (odpowiedz3 == 'o') {
				system("cls");
				cout << "Czy chcesz zmienic ocene studentowi? (t/n) \n" << endl;
				char odp3;
				cin >> odp3;
				if (odp3 == 't')
				{
					system("cls");
					cout << " Wybieram studenta: ";
					for (int i = 0; i < licznik1; i++)
					{
						cout << i << "." << tab1[i].imie << " ";
					};
					cout << endl;
					int wybor3;
					cin >> wybor3;
					float ocena;
					cout << "Wprowadz srednia ocene studenta";
					cin >> ocena;
					tab1[wybor3].srednia_ocena = ocena;
					cout << "Nowa ocena studenta wynosi:" << ocena << endl;
					system("pause");
					system("cls");  goto menu;

				}
				if (odp3 == 'm') { system("cls");  goto menu; };
				if (odp3 == 'n') { system("cls");  cout << "Srednia ocena studenta wynosi nadal" << tab1[wybor3].srednia_ocena << endl; system("pause");system("cls");  goto menu; };

			}
			}
			break;

        case 4:
			system("cls");
			cout<< "Wybierasz studenta [s]  czy nauczyciela [n] do zwolnienia/zatrudnienia?"<<endl;
			char odpowiedz4;
			if (odpowiedz4 == 's')
			{
			 cout <<"Czy chcesz usunac [u] czy zatrudnic [z] studenta?" << endl;
			 char odpo4;
			 cin >> odpo4;
			 if (odpo4 == 'u'){
				 cout<< "Wybierz studenta do zwolnienia" << endl;
				 cout << "Wybieram: ";
				 for (int i=0; i < licznik1; i++)
				 {
					 cout << i << "." << tab1[i].imie << " ";
				 };
				 cout << endl;
				 int wyb4;
				 cin >> wyb4;
				 {
					 Czlowiek czlowiek1 = dziekan1.zwolnij_studenta(tab1[wyb4]);
					 tab[licznik] = czlowiek1;
					 licznik++;
					 for (int i = wyb4; i < licznik1 - 1; i++)
					 {
						tab1[i] = tab1[i+1];
					 }
					 licznik1--;
					 cout << "Zwolniles studenta" << endl;
					 system("pause");
					 system("cls");  goto menu;
				 };
			 if (odpo4 == 'z'){
				 cout << "Wybierz studenta do zatrudnienia" << endl;
				 cout << "Wybieram: ";
				 for (int i=0; i < licznik; i++)
				{
						cout << i << "." << tab[i].imie << " ";
			    };
				cout << endl;
				int wyb5;
				cin >> wyb5;
				{
						Student student1 = dziekan1.zatrudnij_studenta(tab[wyb5]);
						tab1[licznik2] = student1;
						licznik1++;
						for (int i = wyb5; i < licznik - 1; i++)
						{
							tab[i] = tab[i + 1];
						}
						licznik--;
						cout << "Zatrudniles studenta" << endl;
						system("pause");
						system("cls");  goto menu;
					};
					if (odpo4 == 'm') { system("cls");  goto menu; };

			 }
			 }


			}
			if(odpowiedz4 == 'n')
			{
			cout << "Czy chcesz usunac [u] czy zatrudnic [z] nauczyciela?" << endl;
			char odp4;
			cin >> odp4;
			if (odp4 == 'u') {
				cout << "Wybierz nauczyciela do zwolnienia" << endl;
				cout << " Wybieram: ";
				for (int i = 0; i < licznik2; i++)
				{
					cout << i << "." << tab2[i].imie << " ";
				};
				cout << endl;
				int wybor4;
				cin >> wybor4;
				{
					Czlowiek czlowiek1 = dziekan1.zwolnij_nauczyciela(tab2[wybor4]);
					tab[licznik] = czlowiek1;
					licznik++;
					for (int i = wybor4; i < licznik2 - 1; i++)
					{
						tab2[i] = tab2[i + 1];
					}
					licznik2--;
					cout << "Zwolniles nauczyciela" << endl;
					system("pause");
				    system("cls");  goto menu;
				};
				if (odp4 == 'z') {
					cout << "Wybierz nauczyciela do zatrudnienia" << endl;
					cout << " Wybieram: ";
					for (int i = 0; i < licznik; i++)
					{
						cout << i << "." << tab[i].imie << " ";
					};
					cout << endl;
					int wybor4;
					cin >> wybor4;
					{
						Nauczyciel nauczyciel1 = dziekan1.zatrudnij_nauczyciela(tab[wybor4]);
						tab2[licznik2] = nauczyciel1;
						licznik2++;
						for (int i = wybor4; i < licznik - 1; i++)
						{
							tab[i] = tab[i + 1];
						}
						licznik--;
						cout << "Zatrudniles nauczyciela" << endl;
						system("pause");
						system("cls");  goto menu;
					};
					if (odp4 == 'm') { system("cls");  goto menu; };
				};
			}
		} 
		break;

		case 5:
			cout << "Dodaj uzytkownika" << endl;
			Czlowiek *uzytkownik = new Czlowiek();
			uzytkownik->dodaj();
			cout << "Jesli chcesz powrocic do menu kliknij [m]";
			char odp5;
			cin >> odp5;
			if (odp5 = 'm') { system("cls"); goto menu; };
			 break;



		}


	}
}
			

			
		
	





