#include <iostream>
#include <vector>
#include <string>
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


	// Petla while
	int ile;
	cout << "Ile gwizdek ma miec kapitan?: ";
	cin >> ile;
	cout << "\nNo to narysujmy wszystkie " << ile << ";\n";
	while (ile) {		// petla while rysuje gwiazdki
		cout << "* ";
		ile = ile - 1;
	}
	cout << "\nWartosc ile wynosi: " << ile;


	// Petla do while
	char litera;
	do {
		cout << "Napisz jakas litere: ";
		cin >> litera;
		cout << "\nNapisales: " << litera << "\n";
	} while (litera != 'K');
	cout << "\nSkoro napisales litere K to konczymy!\n";


	// Petla for
	cout << "Stewardzie, ilu leci pasazerow ? \n";
	int ile;			// liczba pasazerow
	cin >> ile;

	int i;				// licznik obiegow petli
	for (i = 1; i <= ile; i++) {
		cout << "Pasazer nr " << i << " prosze zapiac pasy!\n";
	}
	cout << "Skoro wszyscy juz zapieli, to ladujemy!";
*/

	// Zakresowe for
	vector<double> liczby {3.14, 4.4, -6.6, 7.7};
	for (auto elem : liczby) {			// petla for po wszystkim elementam vectora
		cout << elem << ", ";
	}
	for (auto& k : liczby) {
		k = k * 10;
	}
	cout << "\nPo mnozeniu *10: ";
	for (auto elem : liczby) cout << elem << ", ";
	cout << endl;

	string przyslowie{ "Przyszla koza do woza." };	// Obiekt typu string to tez pojemnik na znaki
	cout << "Skakanie po kolejnych znakach stringu:\n";
	for (auto znak : przyslowie) {
		cout << "-" << znak;
	}
	cout << endl;

	cout << "Pojemnikiem tez jest tresc {...}\n";
	for(auto x:{6,9,3,8,4,7,5,6}){
		cout << x << ", ";
	}
	cout << endl;

	cout << "Zakresowe for potrafi obliczyc tez tabeli.\n";		// Tabela
	int tablica[]{ 100,200,300,50 };
	for (auto& n : tablica) {
		cout << n << ", ";
		n++;
	}
	cout << "\nEfekt po inkrementacji:\n";
	for (auto n : tablica) cout << n << ", ";

}