#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int num;
	do{
		cout << "Digite o n�mero: " << endl;
		cin >> num;
		if (num > 0)
		    cout << "O sucessor �: " << num + 1 << endl;
		else 
		  cout << "N�mero negativo.";    
	}
	while (num > 0);
	return 0;
}

