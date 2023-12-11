#include "probleme.h"


// 1) todo: Se dă un şir cu n numere naturale. Să se afişeze suma primilor n termeni din şir, apoi suma primilor n-1 termeni din şir, şi aşa mai departe.

void sol1() {

	int v[] = { 12, 42, 31, 53 };
	int dim = 4;

	cout << "Suma primilor termeni, si suma primilor n-1 termeni din sir este "<<endl;
	sumaSir(v, dim);

}


// 2) todo: Se dă un şir cu n numere naturale distincte două câte două. Să se determine poziţia pe care s-ar afla primul element al şirului în şirul sortat. ???

void sol2() {



}


// 3) todo: Se da un vector cu n elemente. Sa se afișeze pe ecran elementele din vector care divid factorialul numărului de elemente n.

void sol3() {

	int v[] = { 16, 3, 71 ,30 ,25 };
	int dim = 5;

	cout << "Elementele din vector care divid " << dim << "! sunt" << endl;
	divizorFactorial(v, dim);

}


//4) todo: Calculaţi valoarea minima minim si valoarea maxima maxim a celor n numere date.

void sol4(){

	int v[] = { 14, 32, 422, 412, 5322, 9 };
	int dim = 6;

	cout << "Valorea maxima din sir este " << valMax(v, dim) << " si valorea minima din sir este " << valMin(v, dim) << endl;

}


// 5) todo: Calculaţi valoarea maxima maxim a celor n numere date şi numărul nrmax de apariţii ale acestei valori în şir.

void sol5(){
	
	int v[] = { 41, 31, 21, 41, 23 };
	int dim = 5;

	cout << "Valorea maxima din sir " << valMax(v, dim) << " apare de " << contorValMax(v, dim) << " ori" << endl;

}


// 6) todo: Să se determine câte elemente din şir sunt egale cu ultimul element al acestuia.

void sol6() {

	int v[] = { 5, 3, 2, 4 ,5 };
	int dim = 5;

	cout << contorEgalcuUltimul(v, dim) << " elemente din sir sunt egale cu ultimul element al acestuia";

}


// 7) todo: Să se determine perechea de elemente egal depărtate de centru pentru care suma valorilor este maximă. 
// Dacă sunt mai multe perechi cu suma maximă se va determina perechea cea mai apropiată de capete.

void sol7() {

	int v[] = { 12, 42, 13, 24, 53, 19, 84 };
	int dim = 7;

	cout << "Suma maxima a perechilor este " << sumaMaxPerechi(v, dim);

}


// 8) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre elementele vectorului sunt prime cu ultimul element.

void sol8() {

	int v[] = { 50, 64, 15, 28 ,35, 75 };
	int dim = 6;

	cout << "Sunt " << contorPrimeCuUltimulElement(v, dim) << " elemente prime cu ultimul element" << endl;

}


// 9) todo: Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare din șir.

void sol9() {


	int v[] = { 12,23,45,67,78 };

	int dim = 5;


	int dif = abs(valoriImpare(v, dim) - valoriPare(v, dim));


	afisare(v, dim);



	cout << "Solutia este " << dif;


}


// 10) todo: Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector care sunt multipli ai ultimului element.

void sol10() {

	int v[] = { 12, 42, 32, 63, 10, 25, 2 };
	int dim = 7;

	int ultim = v[dim - 1];


	for (int i = 0; i < dim; i++) {

		if (v[i] % dim == 0) {
			cout << v[i] << endl;
		}
	}

}


// 11) todo: Se citește un vector cu n elemente, numere naturale. Să se înlocuiască ultimul element prim din vector cu 0, apoi să se afișeze vectorul. ???

void sol11() {



}


// 12) todo: Se citește un vector cu n elemente, numere naturale. 
// Să se afișeze elementele cu indici pari în ordinea crescătoare a indicilor, iar elementele cu indici impari în ordinea descrescătoare a indicilor.

void sol12() {

	int v[] = { 7, 9, 2, 6, 8 };
	int dim = 5;

	cout << "Elementele cu indici pari sunt: ";
	indiciPariCresc(v, dim);

	cout << " " << endl; 

	cout << "Elementele cu indici impari sunt: ";
	inidiciImpariDescresc(v, dim);
}


// 13) todo: Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele vectorului în următoarea ordine: primul, ultimul, al doilea, penultimul, etc. ???

void sol13() {

	



}


// 14) todo: Calculaţi indicele imin și indicele imax ai elementului cu valoarea minimă, respectiv cu valoarea maximă, din vectorul dat. 

void sol14() {

	int v[] = { 8, 7, 9, 2, 5 };
	int dim = 5;

	int max = indiceMax(v, dim);
	int min = indiceMin(v, dim);

	cout << "Elementul cu valorea maxima se afla pe pozitia " << max << " si elementul cu valorea minima se afla pe pozitia " << min;

}


// 15) todo: Se citește un vector cu n elemente, numere naturale. 
// Să se determine câte elemente ale vectorului sunt egale cu diferența dintre cea mai mare și cea mai mică valoare din vector.

void sol15() {

	int v[] = { 7, 7, 9, 2, 4 };
	int dim = 5;
	int dif = difMaxMin(v, dim);
	int contor = contorEgalCuDiferentaMaxMin(v, dim);

	cout << "Sunt " << contor << " elemente egale cu diferenta dintre cea mai mare si cea mai mica valorea din vector care este " << dif << endl;

}