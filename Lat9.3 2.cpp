#include<iostream>
#include<conio.h>
using namespace std;

string nilai(int x){ 	
	if(x>80 && x<=100){
		cout<< "Excellent";
	}
	else if(x>70 && x<=80){
		cout<< "Good Job!";
		}
	else if(x>60 && x<=70){
		cout<< "Study Harder";
	}
	else if(x>50 && x<=60){
		cout<< "Sorry, you failed";
	}
	else if(x>0 && x<=50){
		cout<< "Sorry, you failed";
	}
}

main(){
	cout<< "Masukan nilai : ";
	int bil;
	cin>> bil;
	cout<< nilai(bil);
}
