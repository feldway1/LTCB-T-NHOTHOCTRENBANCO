#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int soo, sothoc=0;
	cout << "Nhap so o: "; cin >> soo;
	for (int i = 0; i < soo; i++) {
		cout << "O so " << i << " co so thoc la" << pow(2, i) << endl;
		sothoc += pow(2, i);
	}
	cout << "Tong so thoc chua trong " << soo << " la" << sothoc << " hat\n";
	return 0;
}