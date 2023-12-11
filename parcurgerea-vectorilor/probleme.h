#include <iostream>
using namespace std;


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

	cout << " v = { ";
	for (int i = 0; i < dim; i++) {
		cout <<  v[i] << " ";
	}
	cout << "}"<<endl;
}

int cifMax(int v[], int dim) {

	int max = INT_MIN;

	for (int i = 0; i < dim; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}

int cifMin(int v[], int dim) {

	int min = INT_MAX;

	for (int i = 0; i < dim; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	return min;
}

bool isEgale(int nr) {

	int uc = nr % 10;
	while (nr > 10) {
		nr = nr / 10;
	}
	if (uc == nr) {
		return true;
	}
	return false;
}

int rasturnatNr(int nr) {

	int nou = 0;
	int p = 1;

	while (nr != 0) {
		int uc = nr % 10;
		nou = nou * 10 + uc;
		nr = nr / 10;

	}
	return nou;
}

bool isExactKDivizori(int nr, int k) {


	return nrDivizori(nr) == k;

}

//todo functie ce verifica daca toate elementele vectorului au k divizori

bool isElementeleKdivizori(int v[], int dim, int k) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		if (isExactKDivizori(v[i], k)==true) {
			ct++;
		}
	}
	if (ct == dim){
		return true;
	}
	else {
		return false;
	}
}

int ProdusulParitate(int v[], int dim) {

	int p = 1;

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0 && i % 2 == 0) {
			p = p * v[i];
		}
		if (v[i] % 2 == 1 && i % 2 == 1) {
			p = p * v[i];
		}
	}
	return p;
}

int sumaCif(int nr) {

	int s = 0;
	while (nr != 0) {
		int uc = nr % 10;
		s = s + uc;
		nr = nr / 10;
	}
	return s;
}

int cifraControl(int nr) {
	int s = sumaCif(nr);;
	while (s > 9) {
		s = sumaCif(s);
	}
	return s;
	
}

int produsCif(int nr) {

	int p = 1;

	while (nr != 0) {
		int uc = nr % 10;
		p = p * uc;
		nr = nr / 10;
	}
	return p;
}

int produsulCifcuCifaControlPara(int v[], int dim) {


	for (int i = 0; i < dim; i++) {
		if (cifraControl(v[i]) % 2 == 0) {
			cout << "Produsul cifrelor lui " << v[i] << " este " << produsCif(v[i]) << endl;
		}
	}
	return 0;
}

int pozitiaPrimuluiElemPar(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0 ) {
			
			return i;
		}
	}
	return -1;
}

int pozitiaUltimuluiElemPar(int v[], int dim) {

	for (int i = dim-1; i >=0; i--) {
		if (v[i] % 2 == 0) {

			return i;
		}
	}
	return -1;
}

int sumaElementeIntrePare(int v[], int dim) {

	int s = 0;
	int par1 = pozitiaPrimuluiElemPar(v, dim);
	int par2 = pozitiaUltimuluiElemPar(v, dim);


	if (par1 == -1) {

		return s;
	}



	for (int i = par1; i <= par2; i++) {

		s += v[i];
	}
	return s;
}

int contorIntervalInchis(int v[], int dim) {

	int ct = 0;

	int primul = v[0]; int doi = v[dim - 1];

	if (primul > doi) {
		int aux = primul;
		primul = doi;
		doi = aux;
	}

	for (int i = 1; i < dim-1; i++) {
		if (v[i] >= primul && v[i] <= doi) {
			ct++;
		}
	}

	return ct;

}

int cmmdc(int a, int b) {



	while (a != b) {


		if (a > b) {

			a = a - b;
		 }
		if (b> a) {

			b = b - a;
		}
	}

	return a;
}

bool isPrimeIntreEle(int a, int b) {
	
	return cmmdc(a, b) == 1;

}

int elementePrimeEgalDepartate(int v[], int dim) {

	int ct = 0;
	for (int i = 0,j=dim-1; i < j; i++,j--) {
		
		if (isPrimeIntreEle(v[i], v[j])) {
			ct++;
		}
	}
	return ct;
}

int sumaSir(int v[], int dim) {

	int s = 0, i;

	for (i = 0; i < dim; i++) {
		s = s + v[i];
	}

	cout << s << endl;

	for (i = dim - 1; i >= 1; i--) {
		s = s - v[i];
		cout << s << endl;
	}
	return 0;
}

int sortareSir(int v[], int dim) {

	for (int i = 0; i < dim - 1; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	return 0;
}

int factorialulNr(int nr) {

	int fact = 1;

	for (int i = 1; i <= nr; i++) {
		fact = fact * i;
	}

	return fact;
}

int divizorFactorial(int v[], int dim) {


	for (int i = 0; i < dim; i++) {

		if (factorialulNr(dim) % v[i] == 0) {
			cout << v[i] << " ";
		}

	}
	return 0; 
}

int valMax(int v[], int dim) {

	int max = INT_MIN;

	for (int i = 0; i < dim; i++) {

		if (v[i] > max) {
			max = v[i];
		}

	}
	return max;
}

int valMin(int v[], int dim) {

	int min = INT_MAX;

	for (int i = 0; i < dim; i++) {

		if (v[i] < min) {
			min = v[i];
		}

	}
	return min;

}

int contorValMax(int v[], int dim) {

	int ct = 0;
	int max = valMax(v, dim);

	for (int i = 0; i < dim; i++) {
		if (max == v[i]) {
			ct++;
		}
	}
	return ct;
}

int contorEgalcuUltimul(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] == v[dim - 1]) {
			ct++;
		}

	}
	return ct;
}

int sumaMaxPerechi(int v[], int dim) {

	int s = 0;

	for (int i = 0, j = dim - 1; i < j; i++, j--) {

		if (v[i] + v[j] > s) {
			s = v[i] + v[j];
		}
	}
	return s;
}

int contorPrimeCuUltimulElement(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		if (isPrimeIntreEle(v[i], v[dim - 1]) == true) {
			ct++;
		}
	}
	return ct;
}

int valoriPare(int v[], int n) {

	int nrPare = 0;

	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0) {
			nrPare++;
		}
	}
	return nrPare;
}

int valoriImpare(int v[], int n) {

	int nrImpare = 0;

	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 1) {
			nrImpare++;
		}
	}
	return nrImpare;
}

int ultimulElementPrim(int v[], int dim) {

	for (int i = dim - 1; i >= 0; i--) {

		if (isNrPrim(v[i]) == true) {
			return v[i];
		}

	}
	return -1;
}

int inidiciImpariDescresc(int v[], int dim) {

	for (int i = dim - 1; i >= 0; i--) {
		if (i % 2 == 0) {
			cout << v[i] << " ";
		}
	}
	return 0;
}

int indiciPariCresc(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (i % 2 == 1) {
			cout << v[i] << " ";
		}
	}
	return 0;
}

int indiceMax(int v[], int dim) {

	int max = INT_MIN;
	int imax = INT_MIN;

	for (int i = 0; i < dim; i++) {

		if (v[i] > max) {
			max = v[i];
			imax = i;
		}

	}
	imax++;
	return imax;
}

int indiceMin(int v[], int dim) {

	int min = INT_MAX;
	int imin = INT_MAX;

	for (int i = 0; i < dim; i++) {

		if (v[i] < min) {
			min = v[i];
			imin = i;
		}

	}

	imin++;
	return imin;
}

int difMaxMin(int v[], int dim) {

	int max = cifMax(v, dim);
	int min = cifMin(v, dim);

	int dif = max - min;

	return dif;

}

int contorEgalCuDiferentaMaxMin(int v[], int dim) {

	int dif = difMaxMin(v, dim);
	int ct = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] == dif) {
			ct++;
		}
	}
	return ct;
}
