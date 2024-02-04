#include <iostream>
#include <string>;
using namespace std;

int main() {
	bool gemi[4][4] = {
	{1,0,1,0},
	{1,0,0,1},
	{0,0,0,0},
	{1,0,1,0}
	};

	int hs = 0;
	while (hs <= 4) {
		int row, colum;
		if (hs == 0) {
			cout << "Satir seciniz.\n";
			cin >> row;
			while (row > 4) {
				cout << "Lutfen belirtilen aralikta satir giriniz.\n";
				cin >> row;
			}
			cout << "Sutun seciniz \n";
			cin >> colum;
			while (colum > 4) {
				cout << "lutfen belirtilen aralikta sutun giriniz.\n";
				cin >> colum;
				
				}

			row = row - 1;
			colum = colum - 1;
			if (gemi[row][colum] == 1) {
				cout << "Tebrikler batirdiniz!\n";
				gemi[row][colum] = 0;

			}
			else {
				cout << "Batiramadiniz,lutfen tekrar deneyin.\n";
			}
		}
		cout << "Tekrar satir seciniz.\n";
		cin >> row;
		while (row > 4) {
			cout << "Lutfen belirtilen aralikta satir giriniz.\n";
			cin >> row;
		}
		cout << "Tekrar sutun seciniz \n";
		cin >> colum;
		while (colum > 4) {
			cout << "lutfen belirtilen aralikta sutun giriniz.\n";
			cin >> colum;
		}

		row = row - 1;
		colum = colum - 1;
		if (gemi[row][colum] == 1) {
			cout << "Tebrikler batirdiniz!\n";
			gemi[row][colum] = 0;
		
		}
		else {
			cout << "Batiramadiniz,lutfen tekrar deneyin.\n";
		}
		hs++;
	}
}