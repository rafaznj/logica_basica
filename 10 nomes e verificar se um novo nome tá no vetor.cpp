#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	string nomes[10], nome;
	int flg;
	for(int i = 0; i < 10; i++) {
	 cout << "Digite o " << i << " nome: " << endl;
	 cin >> nomes[i];
	}
	cout << "Digite um novo nome para verificar no vetor: " << endl;
	cin >> nome;
	for (int i = 0; i < 10; i++) {
		if (nomes[i] == nome)
		     flg = 1;
		}
		if (flg == 1) {
		cout << "Achei" << endl;
	}
		else{
		 cout << "Não achei" << endl; 

}
return 0;
	}
    
	 
 
