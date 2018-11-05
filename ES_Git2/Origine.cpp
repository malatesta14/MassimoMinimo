using namespace std;
#include <iostream>;

int iMax, iMin = 10000;

void Max(int x) {
	if (iMax < x)
		iMax = x;
}

void Min(int x) {
	if (iMin > x)
		iMin = x;
}

void Ordina(int v[]) {
	int x = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (v[i] > v[j]) {
				x = v[i];
				v[i] = v[j];
				v[j] = x;
			}
		}
	}

}

int main() {
	int iV[10];

	for (int i = 0; i < 10; i++) {
		cout << "V[" << i << "]: ";
		cin >> iV[i];
		Max(iV[i]);
		Min(iV[i]);
	}

	cout << "il numero minimo inserito e' " << iMin << endl;
	cout << "il numero massimo inserito e' " << iMax << endl;

	Ordina(iV);

	for (int i = 0; i < 10; i++)
		cout << "V[" << i << "]: " << iV[i] << endl;
	cout << "il vettore e' stato ordinato in modo crescente" << endl;
	system("pause");
}