#include <iostream>
using namespace std;

int main () {
	int x = 20;
	int y = x++; // x= 21, y =20 (tra ve gia tri trc khi tang)
	int z = ++x;  // x=z=21 (tra ve gia tri moi sau khi tang)
	cout << x;
	return 0;
}