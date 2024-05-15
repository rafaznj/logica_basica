#include <iostream>
#include <locale.h>
using namespace std;
int main(){
 setlocale(LC_ALL, "");
 int patos, n;
 cout << "informe quantos patinhos são:";
 cin >> patos;
 n = patos;
 cout << n <<  " patinhos foram passear\nAlém das montanhas\nPara brincar" << endl;
while (n > 2){
cout << "A mamãe gritou: Quá, quá, quá, quá\nMas só " << n - 1 <<  " patinhos voltaram de lá." << endl;
n--;
}
cout << "A mamãe gritou: Quá, quá, quá, quá\nMas só 1 patinho voltou de lá."<< endl;
cout << "A mamãe gritou: Quá, quá, quá, quá\nMas nenhum patinho voltou de lá."<< endl;
cout << "A mamãe patinha foi procurar\nAlém das montanhas\nNa beira do mar\nA mamãe gritou: Quá, quá, quá, quá\nE os "<< patos <<  " patinhos voltaram de lá.";
return 0;
}
