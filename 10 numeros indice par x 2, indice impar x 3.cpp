#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL, "");
	int num[10], x[10];
	for (int i = 0; i < 10; i++)
	{
	cout << "DIGITE O " << i + 1 <<  " NÚMERO: ";
	cin >> num[i];
	
	if ( i % 2 == 0) 
		x[i] = num[i] * 2; 
 
	else
	  x[i] = num[i] * 3;
}
	
	for (int i = 0; i < 10; i++)
	{
	cout << num[i] << "  " ;
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
	cout << x[i] << "  " ;
	}
	return 0;
 	
}
