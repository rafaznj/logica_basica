#include <iostream>
#include <locale.h>
using namespace std;
int main(){
 setlocale(LC_ALL, "");
 int patos, n;
 cout << "informe quantos patinhos s�o:";
 cin >> patos;
 n = patos;
 cout << n <<  " patinhos foram passear\nAl�m das montanhas\nPara brincar" << endl;
while (n > 2){
cout << "A mam�e gritou: Qu�, qu�, qu�, qu�\nMas s� " << n - 1 <<  " patinhos voltaram de l�." << endl;
n--;
}
cout << "A mam�e gritou: Qu�, qu�, qu�, qu�\nMas s� 1 patinho voltou de l�."<< endl;
cout << "A mam�e gritou: Qu�, qu�, qu�, qu�\nMas nenhum patinho voltou de l�."<< endl;
cout << "A mam�e patinha foi procurar\nAl�m das montanhas\nNa beira do mar\nA mam�e gritou: Qu�, qu�, qu�, qu�\nE os "<< patos <<  " patinhos voltaram de l�.";
return 0;
}
