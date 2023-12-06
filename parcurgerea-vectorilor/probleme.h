#include <iostream>
using namespace std;


// todo: Se citeste de la tastatura un vector de maxim de 200 de numere intregi de maxim 4 cifre fiecare.

// a) Cate numere prime avem in vector?

int nrDivizori(int nr) {
	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		if (nr % i == 0) {
			ct++;
		}
	}
	return ct;
}

bool isNrPrim(int nr) {

	if (nrDivizori(nr) == 2) {
		return true;
	}
	else {
		return false;
	}

}

int contorPrime(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		if (isNrPrim(v[i]) == true) {
			ct++;
		}
	}
	return ct;
}

void afisare(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}

}

void sol1() {


	int v[100] = { 12,34,17,31,90,21,32 };
	int dim = 6;
	
	afisare(v, dim);


	int prime = contorPrime(v, dim);


	cout << "In vector sunt " << prime << " nr prime" << endl;

	
	

}


// b) Care este cea mai mica, respectiv cea mai mare cifra din vector?
 

int cifMax(int v[], int dim) {

	int max = INT_MIN;

	for (int i = 0; i < dim; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return cifMax;
}

int cifMin(int v[], int dim) {

	int min = INT_MAX;

	for (int i = 0; i < dim; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	return cifMin;
}

void sol2() {

	int v[100] = { 24, 29, 12, 94, 43, 99 };

}