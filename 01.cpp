#include<iostream>
#include <cstdlib>	
#include <ctime>
#include<windows.h>
using namespace std;

int main(){
	int y,x;
	srand ( time (NULL)); //[Instrucción que inicializa el generador de números aleatorios]
	do{
		y= rand();
		x= y%2; 
		cout<< x;
		Sleep(40);
 } while(1);
}
