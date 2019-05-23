#include<iostream>
#include<conio.h>
using namespace std;

float fahrenheit(int c)
{
	float f;
	f= 9*c/5 + 32;
	return f;
}
float reamur(int c)
{
	float r;
	r= 4*c/5;
	return r;
}

main()
{
	float fahren, celcius,re;
	cout<< "Masukan celcius : ";
	cin>> celcius;
	fahren=fahrenheit(celcius);
	re=reamur(celcius);
	cout<< "Fahrenheit : "<< fahren<< endl;
	cout<< "Reamur : "<< re;
	getch();
}
