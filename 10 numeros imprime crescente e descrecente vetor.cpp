#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL, "");
	int num[10];
	for (int i = 0; i < 10; i++)
	{
	cout << "DIGITE UM NÚMERO:";
	cin >> num[i]; 
	}
 	for (int i = 0; i < 10; i++)
	{
	cout << num[i] << "  " ;
	}
	cout << endl;
	for (int i = 9; i >= 0; i--)
	{
	cout << num[i] << "  ";
	}
	return 0;
 	
}
