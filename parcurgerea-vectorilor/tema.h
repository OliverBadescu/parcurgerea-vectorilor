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