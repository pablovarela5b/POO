#include<iostream>
#include <cstdlib>	
#include <ctime>
#include<windows.h>
using namespace std;

int main(){
	int y,x;
	srand ( time (NULL)); //[Instrucci�n que inicializa el generador de n�meros aleatorios]
	do{
		y= rand();
		x= y%2; 
		cout<< x;
		Sleep(40);
 } while(1);
}
