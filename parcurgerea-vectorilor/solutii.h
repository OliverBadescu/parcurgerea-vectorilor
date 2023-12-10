#include "probleme.h"

// todo: Se citeste de la tastatura un vector de maxim de 200 de numere intregi de maxim 4 cifre fiecare.

// a) Cate numere prime avem in vector?

void sol1() {


	int v[100] = { 12,34,17,31,90,21,32 };
	int dim = 6;

	afisare(v, dim);


	int prime = contorPrime(v, dim);


	cout << "In vector sunt " << prime << " nr prime" << endl;




}


// b) Care este cea mai mica, respectiv cea mai mare cifra din vector?

void sol2() {

	int v[100] = { 24, 29, 12, 94, 43, 99 };
	int dim = 6;

	int min = cifMin(v, dim);
	int max = cifMax(v, dim);

	afisare(v, dim);

	cout << "Cea mai mica cifra din vector este " << min << " iar cea mai mare cifra este " << max << endl;

}


// c) Afisati rasturnatul numerelor cu proprietatea ca prima cifra = ultima cifra 

void sol3() {

	int v[100] = { 12, 2432, 2312, 74, 31 };
	int dim = 5;

	for (int i = 0; i < dim; i++) {
		
		if (isEgale(v[i]) == true) {
			v[i] = rasturnatNr(v[i]);
		}

	}


	afisare(v, dim);

	
}


// d) Au toate numere din vector proprietatea ca au exact k divizori?

void sol4() {

	int v[] = { 7, 17, 19, 13, 59 };
	int dim = 5;
	int ct = 0;
	int k;
	cin >> k;

	afisare(v, dim);

	if (isElementeleKdivizori(v, dim, k) == true) {
		cout << "Toate numerele din vector au " << k << " divizori";
	} 
	else {
		cout << "Nu toate numere din vector au " << k << " divizori";
	}
}


// e) Produsul numerelor ce au aceeasi paritate cu pozitia pe care stau [12,31,41,12]

void sol5() {

	int v[] = { 12, 31, 42, 11, 65, 22, 74 };
	int dim = 7;

	int produs = ProdusulParitate(v, dim);

	afisare(v, dim);

	cout << "Produsul numerelor care au aceeasi paritate cu pozitia pe care stau este " << produs;

}


// g) Afisati produsul cifrelor la fieacre element al vectorului ce are cifra de control un numar par

void sol6() {

	int v[] = { 123, 44, 51, 32, 5214, 14 };
	int dim = 6;

	afisare(v, dim);

	produsulCifcuCifaControlPara(v, dim);

}


// todo: Se citește un vector cu n elemente, numere naturale. Să se determine suma valorilor elementelor cuprinse între primul și ultimul element par al vectorului, inclusiv acestea.

void sol7(){

	int v[] = { 11, 13, 24, 53, 12, 13, 14, 15 };
	int dim = 8;

	int suma = sumaElementeIntrePare(v, dim);

	cout << "Suma valorilor elementelor cuprinse inter primul si ultimul element par al vectorului, inclusiv acestea este " << suma;

	

}


//todo: Se dă un șir cu n elemente, numere reale. Să se determine câte dintre elemente se află în afara intervalului închis determinat de primul și ultimul element.
//todo :Elementele șirului {2 0.5 4 -1 -8 -3} aflate în afara intervalului [-3,2] sunt: 4 și -8.

void sol8() {

	int v[] = { 2, 0.5, 4, - 1, - 8, - 3 };
	int dim = 6;

	int contor = contorIntervalInchis(v, dim);

	cout << "Numarul de elemente care se afla in afara intervalului inchis determinat de primul si ultimul element sunt " << contor << endl;

}


//todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente egal depărtate de capetele vectorului sunt prime între ele.
//exemplu: {50 18 15 28 35 40}, Perechile de elemente prime între ele sunt: (18, 35) și (15, 28).

void sol9() {

	int v[] = { 50, 18, 15, 28, 35, 40 };
	int dim = 6;

	int contor = elementePrimeEgalDepartate(v, dim);

	cout << contor;

}