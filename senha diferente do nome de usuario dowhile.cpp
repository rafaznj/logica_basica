#include <iostream>
#include <locale.h>
using namespace std;
int main (){
setlocale(LC_ALL, "");
string senha, nome;

do {
cout << "DIGITE O NOME:" << endl;
cin >> nome;
cout << "DIGITE A SENHA:" << endl;
cin >> senha;
if (nome == senha) {
	cout << "TENTE NOVAMENTE." << endl;
}
}
while (senha == nome);
cout << "SUCESSO."<< endl;	

return 0;
}
