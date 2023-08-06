#include <iostream>
using namespace std;

int main()
{
	/*
	// pierwszy program :)
	cout << "Witamy na pokladzie.\n\n";


	// drugi program
	int stopy;		// Do przechowywania danej wejsciowej
	double metry;	// Do wpisania wyniku
	double przelicznik = 0.3;	// przelicznik: stopy na metry

	cout << "Podaj wysokosc w stopach: ";
	cin >> stopy;		// przejecie danej z klawiatury

	metry = stopy * przelicznik;	// wlasciwe przeliczenie

	cout << "\n";
	cout << stopy << " stop - to jest: " << metry << " metrow.\n\n";


	// trzeci program - przeliczanie cali na cantymetry
	double cale;
	double cantymetry;
	double przelicznik_cale_na_cantymetry = 2.54;

	cout << "Podaj ilosc cale: ";
	cin >> cale;

	cantymetry = cale * przelicznik_cale_na_cantymetry;

	cout << "\n" << cale << " cale to jest: " << cantymetry << " cantymetrow.\n\n";

	*/
	// -- Rozdzial II. Instrukcje warunkowe. --
	// Instrukcaja warunkowa IF
	int wys, punkty_karne;		// zmienne tego samego typu mozna wpisywac przez przecinek

	cout << "Na jakiej wysokosci lecimy? [w metrach]: ";
	cin >> wys;

	if (wys < 500) {
		cout << "\n" << wys << " metrow to za nisko! \n";
		punkty_karne = 1;
	}
	else {
		cout << "\nNa wysokosci " << wys << " metrow jestes juz bezpieczny.\n";
		punkty_karne = 0;
	}

	cout << "Masz " << punkty_karne << " punktow karnych.\n";
	if (punkty_karne) cout << "Popraw sie!\n\n";


}