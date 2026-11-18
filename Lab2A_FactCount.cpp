// Lab2A_FactCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long mults = 0; // counts multiplications
long long calls = 0; // counts function calls
long long factorialIter(int n) {
	calls++;
	long long result = 1;
	for (int i = 2; i <= n; i++) {
		result = result * i;
		mults++;
	}
	return result;
}
long long factorialRec(int n) {
	calls++;
	if (n == 0) return 1; // base case
	mults++;
	return n * factorialRec(n - 1); // recursive case
}
int main() {
	int n;
	cout << "Enter n: ";
	cin >> n;
	mults = 0; calls = 0;
	long long f1 = factorialIter(n);
	cout << "Iterative: " << n << "! = " << f1
		<< ", multiplications = " << mults << ", calls = " << calls << endl;
	mults = 0; calls = 0;
	long long f2 = factorialRec(n);
	cout << "Recursive: " << n << "! = " << f2
		<< ", multiplications = " << mults << ", calls = " << calls << endl;
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
