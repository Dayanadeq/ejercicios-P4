#include <iostream>
using namespace std;

float convertirKilometro(float milla){
	double kilometro = milla * 1.2356;
	return kilometro;
}

int main(){
	double milla;
	cout << "Ingrese la cantidad en millas: " <<endl;
	cin >> milla;
	cout << "La cantidad en kilometro es: " <<convertirKilometro(milla);
	return 0;
}
