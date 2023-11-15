
#include <iostream>
using namespace std;
int main()
{
	int liczba;
	cout<<"Podaj liczbe: ";
	cin>>liczba;
	int i = 0;
	int tab[31];
	while(liczba){
		tab[i++] = liczba%2;
		liczba = liczba/2;
	}
	for(int j=i-1; j >= 0; j--){
		cout<<tab[j];
	}
	}