// Lab2A_SumCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long ops = 0; // counts additions
long long sumToIter(int n) {
	long long total = 0;
	for (int i = 1; i <= n; i++) {
		total = total + i;
		ops++; // one addition
	}
	return total;
}
long long sumToRec(int n) {
	if (n == 0) return 0; // base case
	ops++; // one addition
	return n + sumToRec(n - 1); // recursive case
}
int main() {
	int n;
	cout << "Enter n: ";
	cin >> n;
	ops = 0;
	long long s1 = sumToIter(n);
	cout << "Iterative: sum = " << s1 << ", additions = " << ops << endl;
	ops = 0;
	long long s2 = sumToRec(n);
	cout << "Recursive: sum = " << s2 << ", additions = " << ops << endl;
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
