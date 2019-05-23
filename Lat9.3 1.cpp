#include<iostream>
#include<conio.h>
using namespace std;

char nilai(int x){ 
	char y;	
	if(x>80 && x<=100){
		y= 'A';
		return y;
	}
	else if(x>70 && x<=80){
		y='B';
		return y;
		}
	else if(x>60 && x<=70){
		y='C';
		return y;
	}
	else if(x>50 && x<=60){
		y='D';
		return y;
	}
	else if(x>0 && x<=50){
		y='E';
		return y;
	}
}

main(){
	cout<< "Masukan nilai : ";
	int bil;
	cin>> bil;
	cout<< "Nilai : "<< nilai(bil);
}
