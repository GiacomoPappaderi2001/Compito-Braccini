#include <iostream>
using namespace std;

int main() {
	int contatore = 0;
	for (int i = 1; i < 11; i++) {
		contatore = i;
		cout << contatore << endl;
	}
	//linea che viene modificata per creare un conflitto
	cout << "voglio creare un conflitto" << endl;
	system("pause");
}
