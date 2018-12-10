#include <iostream>
using namespace std;
//ho creato il conflitto
int main() {
	int contatore = 0;
	for (int i = 1; i < 11; i++) {
		contatore = i;
		cout << contatore << endl;
	}
	//linea che viene modificata per creare un conflitto
<<<<<<< HEAD
	cout << "voglio creare un conflitto per il compito" << endl;
	
	cout << "pecore" << endl;
=======
	cout << "voglio creare un conflitto" << endl;
	
	
	
	cout << "beeee" << endl; 
>>>>>>> FIX_BUG
	system("pause");
}
