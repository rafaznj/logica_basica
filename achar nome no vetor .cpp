#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
setlocale(LC_ALL, "");
string nomes[10], nome; 
bool achou = false;

cout << "Informe os 10 nomes:" << endl;
for(int i = 0; i < 10; i++)
	cin >> nomes[i]; 
	
cout << "Informe o nome para pesquisar:" << endl;
cin >> nome;

for(int i = 0; i < 10; i++)
	if(nomes[i] == nome)
	achou=true;
	
if(achou==true)
cout << "Nome encontrado" << endl;

else	 
cout << "Nome não encontrado" << endl;	 


return 0;	
}
