#include <iostream>
#include <vector>
#include <string>
#include <limits>	// ta klase potrzebujemy zeby korzystac z podgladu wlasciwosci poszczegolnych typow
#include <iomanip>
using namespace std;

/*
// Typy fundamentalne. Dany program wyswietla informacje o typach danych. (1/2 czesc)
template<typename T>
void info_o_typie(string opis) {
	cout << setw(18)
		<< opis << ":"
		<< setw(2) << sizeof(T)
		<< "|"
		<< setw(2)
		<< numeric_limits<T>::digits		// Bit znaku sie w to nie wlicza
		<< (numeric_limits<T>::is_signet ? "|zn|" : "|bz|")		// Ma? Czy nie ma znaku?
		<< "[" << numeric_limits<T>::min()
		<< ", " << numeric_limits<T>::max()
		<< "]" << endl;
}
*/

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


	// Zakresowe for
	vector<double> liczby {3.14, 4.4, -6.6, 7.7};
	for (auto elem : liczby) {			// petla for po wszystkim elementam vectora
		cout << elem << ", ";
	}
	for (auto& k : liczby) {		// znak & uzywamy w celu dostania sie do oryginalu elementu przez referencje w celu jego zmodyfikowania
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


	// Instrukcja switch
	cout << "Kapitanie, ktory podzespol sprawdzic?\n" << "nr 10 - Silnik\nnr 35 - Stery\nnr 28 - radar\n"
		<< "Podaj, kapitanie, numer: ";
	int ktory;
	cin >> ktory;
	switch (ktory) {
	case 10:			// zapis 'case wartosc' nazywa siê 'etykieta case'
		cout << "Sprawdzamy silnik!\n";
		break;
	case 28:
		cout << "Sprawdzamy radar!\n";
		break;
	case 35:
		cout << "Sprawdzamy stery!\n";
		break;
	default: 
		cout << "Zakrez nr - " << ktory << ": nie znam takiego.";
		break;
	}



	// Instrukcja break - powoduje natychmiastowe przerywanie dzialania petli
		// break w petli while:
	int i = 7;
	while (1)	// petla nieskonczona
	{
		cout << "Petla, i = " << i << "\n";
		i = i - 1;
		if (i < 5) {
			cout << "Przerywamy te petle!";
			break;
		}
	}
		// przyklad z zagniezdzonymi petlami
	int zakoncz = 3;
	for (int i = 0; i < 4; i = i + 1) {
		for (int m = 0; m < 10; m = m + 1) {
			cout << "*";
			if (m > zakoncz)break;		// tu wyskok z for (m..)
		}
		cout << "\nKontynujemy zetnetrzna petle" << " for dla i = " << i << "\n";
	}



	// Instrukcja goto
		// niezalecane uzycie instrukcji goto:
	cout << "Cos piszemy \n";
	goto aaa;
	cout << "Ta instrukcja zostaje przeskoczona.";
		aaa:
	cout << "Piszemy dalej.\n\n";
		// goto mozna wykorzystac dla natychmiastowego opuszczenia wielokrotnie zagnizdzonych petli lub instr. switch
	int m=1, i=1, k;
	while (m < 500) {
		while (i < 20) {
			for (k = 16; k < 100; k = k + 4) {
				// tu wyskakuje blad:
				if(1==1) goto po_petli;
			}
		}
	}
po_petli:
	cout << "Po opuszczeniu wszystkich petli.";



	// Instrukcja continue - przydaje sie wewnatrz petli for,while, do..while. Powoduje zaniechanie wykonywania instrukcji
	for (int k = 0; k < 12; k++) {
		cout << "A";
		if (k > 1)continue;
		cout << "b\n";
	}



// Typy fundamentalne. Dany program wyswietla informacje o typach danych. (2/2 czesc)
	cout << "int: "
	<< numeric_limits<int>::digits
	<< "bitow, "
	<< (numeric_limits<int>::is_signed ? "znak" : "b/zn")
	<< " bajtow: "
	<< sizeof(int)
	<< " [" << numeric_limits<int>::min()
	<< " ," << numeric_limits<int>::max()
	<< "]" << endl;

	cout << "Informacje o typie przechowujacym znaki" << endl;

	cout << "         char: "
	<< sizeof(char) << "|"
	<< numeric_limits<char>::digits
	<< (numeric_limits<char>::is_signed ? "|zn|" : "|bz|")
	<< " [" << (int)numeric_limits<char>::min()
	<< ", " << (int)numeric_limits<char>::max()
	<< "]" << endl;

	cout << "\nWypisanie za pomoca szablonu funkcji:" << endl;

	info_o_typie<short int>("short int");
	info_o_typie<signed short int>("signed short int");
	info_o_typie<unsigned short int>("unsigned short int");
	info_o_typie<int>("int");
	info_o_typie<signed int>("signed int");
	info_o_typie<unsigned int>("unsigned int");

	cout << endl;

	info_o_typie<long int>("long int");
	info_o_typie<signed long>("signed long");
	info_o_typie<unsigned long>("unsigned long");

	cout << endl;
	info_o_typie<long long int>("long long int");
	info_o_typie<signed long long>("signed long long");
	info_o_typie<unsigned long long>("unsigned long long");

	cout << endl;
	info_o_typie<float>("float");
	info_o_typie<double>("double");
	info_o_typie<long double>("long double");
*/



}