# Read me

##### Opis zadania:
Symulacja studiów, konkretnie użytkowników studiów. Rozróżniamy wiele
typów użytkowników, podstawowym jest Człowiek (klasa podstawowa),
może on w sumie tylko aplikować na studia - albo jako Student albo jako
Nauczyciel. Dodatkowo posiada podstawowe dane identyfikacyjne w
formie parametrów: imię, nazwisko, pesel, adres e-mail i numer telefonu.
Następnie mamy dwie kategorie użytkowników na studiach, Student i
Pracownik (klasy dziedziczące po klasie Człowiek), którymi można się stać
będąc Człowiekiem. Student jest w tym wypadku użytkownikiem
końcowym w swojej gałęzi ( żadna klasa już po nim nie dziedziczy ),
posiada on datę dołączenia, średnią ocenę, w uproszczeniu jedną,
nieważoną, może zrezygnować ze studiów ( ponownie stać się po prostu
Człowiekiem ). Obiekt klasy Pracownik powinien posiadać metodę do
rezygnacji z pracy i stania się z powrotem jedynie obiektem klasy
Człowiek. Obiekt klasy Pracownik dzieli się na dwa typy końcowych
użytkowników: Nauczyciel i Dziekan. Nauczyciel ma możliwość zmiany
oceny konkretnego Studenta z listy, z kolei Dziekan posiada funkcje do
zwolnienia dowolnego Pracownika (oprócz siebie) lub Studenta i przyjęcia
aplikującego użytkownika bazowego typu Człowiek na stanowisko na
które aplikuje.



##### Forma:
Program powinien być napisany w formie aplikacji konsolowej, a sposób
jego działania powinien być następujący: W programie bazowo powinno
być ustawione: 3 użytkowników (3 obiekty) typu Człowiek, 2 typu
Student, 2 typu Nauczyciel i 1 typu Dziekan. Program po uruchomieniu
pozwala się "wcielić" w jednego z użytkowników, a następnie dokonać
jednej "akcji", np aplikuj na studia. Następnie program dokonuje zmian
związanych z akcją i wraca na początek do możliwości wcielenia się.
Program powinien też udostępniać na początku dodatkową funkcję
"dodania Człowieka". W tym wypadku w krokach podaje się podstawowe
dane identyfikacyjne Człowieka, które podlegają walidacji (imię i nazwisko
rozpoczynają się wielką literą, pesel to numer 11 cyfrowy, email zawiera
@ i kropkę pomiędzy ciągami znaków, numer telefonu to numer 9
cyfrowy). Nowy Człowiek zostaje dodany tylko w wypadku poprawności
wszystkich tych danych. Program sterowany numerycznie, na każdym
kroku umożliwia cofnięcie się bez konsekwencji do ekranu startowego. 