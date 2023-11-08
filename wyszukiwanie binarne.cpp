// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int wyszukiwanie = int l, int p, int szukana;
int main() {
	int szukana = 29;
	int l = 0;
	int p = 15;
	cout << "Liczba  " << szukana << "występuje w komórce o indeksie" << wyszukiwanie(l, p, szukana);
	return 0;
}
int wyszukiwanie = (int l, int p, int szukana){
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int sr = (l + p) / 2;
	while (l <= p) {
		if (szukana == tab[sr]) {
			return sr;
		}
		if (szukana < tab[sr]) {
			p = sr - 1;
		}
		else {
			l = sr + 1;
		}
	}
	sr = (l + p) / 2;
	return -1;
}