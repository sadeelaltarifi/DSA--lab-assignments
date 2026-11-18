// Lab2A_Timing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
long long sumToIter(int n) {
	long long total = 0;
	for (int i = 1; i <= n; i++)
		total = total + i;
	return total;
}
long long sumToRec(int n) {
	if (n == 0) return 0;
	return n + sumToRec(n - 1);
}
int main() {
	int n;
	char version;
	cout << "Enter n: ";
	cin >> n;
	cout << "Version (i = iterative, r = recursive): ";
	cin >> version;
	auto start = steady_clock::now(); // read the clock
	long long result;
	if (version == 'i') result = sumToIter(n);
	else result = sumToRec(n);
	auto stop = steady_clock::now(); // read it again
	auto ms = duration_cast<milliseconds>(stop - start).count();
	cout << "sum = " << result << endl;
	cout << "time = " << ms << " ms" << endl;
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
