// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int n;
	long factorial = 1.0;

	cout << "Enter Positive Number: ";
	cin >> n; 

	if (n < 0)
		cout << "ERROR! Factorial doesn't exist.";
	else {
		for (int i = 1; i <= n; ++i) {
			factorial *= i;
		}
		cout << "Factorial of " << n << " = " << factorial;
	}
}
void arithmetic() {
	int n1, df, n2, i, ln;
	int s1 = 0;
	cout << "\n\n Find out the sum of A.P. Series:\n";
	cout << "--------------------------------------\n";
	cout << "Input the starting number of the A.P. series:";
	cin >> n1;
	cout << "Input the number of elements for the A.P. series: ";
	cin >> n2;
	cout << "Input the difference of the A.P. series: ";
	cin >> df;
	s1 = (n2 * (2 * n1 + (n2 - 1) * df)) / 2;
	ln = n1 + (n2 - 1) * df;
	cout << "The Sum of the A.P. series are: " << endl;
	for (i = n1; i <= ln; i = i + df)
	{
		if (i != ln)
			cout << i << " + ";
		else
			cout << i << " = " << s1 << endl;
	}
}
void geometric() {
	int a, r, n, value;
	double sum = 0;
	cout << "Geometric Series: " << endl;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "";
	cout << "Enter a number to multiply each time: ";
	cin >> r;
	cout << "";
	cout << "Enter the number of elemnts in the series: ";
	cin >> n;

	value = a;
	for (int i = 0; i < n; i++)
	{
		cout << value;
		sum += a * pow(r, i);
		value = value * r;

		if (i != n - 1)
			cout << " * ";
		else
			cout << " = " << sum << endl;
	}

}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
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
