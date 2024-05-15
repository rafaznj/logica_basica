#include <iostream>
#include <locale.h>
using namespace std;
int main (){
setlocale(LC_ALL, "");
int num, i, cont;
cout << "DIGITE UM NÚMERO MAIOR QUE 1: ";
cin >> num;	
while (num > 1) 
{	
for (i = 1; i <= num; i++) 
{
if (num % i == 0)	
        cont++;
}
if (cont == 2){
cout << num << " É PRIMO. " << endl;
}
else {
cout << num << " NÃO É PRIMO. "<< endl;
}
cout << "DIGITE UM NÚMERO MAIOR QUE 1: ";
cin >> num;
cont = 0;
}	
return 0;
}
