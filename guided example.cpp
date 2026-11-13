// guided example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
 using namespace std;

 int sumTo(int n) {
	 cout << "enter sumTo(" << n << ")" << endl;
	 if (n == 0) { // base case
		 cout << "base case: return 0" << endl;
		return 0;
		
	}
	 int result = n + sumTo(n - 1); // recursive case
	 cout << "sumTo(" << n << ") returns " << result << endl;
	return result;
	
}

int main() {
	 int total = sumTo(5);
	 cout << "Total = " << total << endl;
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
