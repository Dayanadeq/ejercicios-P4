#include<iostream>
using namespace std;

int main(){
	int numero = 1;
	while (numero <= 125){
		if (numero % 3 == 0){
			cout << numero << endl;
		}
		numero = numero + 4;
	}
}
