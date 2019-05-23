#include<iostream>
using namespace std;

int maks(int x, int y)
{
	if(x>y){
		cout<< x<<" adalah bilangan terbesar";
	}
	else{
		cout<< y<<" adalah bilangan terbesar";
	}
}
main()
{
	int x,y;
	cout<< "Masukan bilangan 1 : ";
	cin>>x;
	cout<< "Masukan bilangan 2 : ";
	cin>>y;
	maks(x,y);
}

