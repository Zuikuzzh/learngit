#include<iostream>
using namespace std;

void Ninety_nine_bottles_of_beer() {
	for (int i = 99; i > 1; i--) {
		cout << i << " bottles of beer on the wall, " << i << " bottles of beer" << endl;
		cout << "take one down, pass it around, " << i - 1 << " bottles of beer on the wall." << endl;
	}
	cout << "1 bottle of beer on the wall, 1 bottle of beer" << endl;
	cout << "take one down, pass it around, no more bottles of beer on the wall. " << endl;
}

int main() {
	Ninety_nine_bottles_of_beer();
	system("pause");
	return 0;
}