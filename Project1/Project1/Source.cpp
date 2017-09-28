/* Heading
Rahul Singh - 9/26/17 1st period

Assignment Name : Take in Data

Display Data, Accept User Name, Display Changed Data

*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha , noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch()  for pause()
#include <math.h> //* power function pow

//Namespaces
using namespace std;

// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '/n';
}

// MAIN 
void main() {
	// Variables 
	int chip;
	float guacamole;
	double chips;
	bool salsa = false; // assume no one has salsa
	char cheese;
	int calc_1, calc_2, calc_3;

	// User Oueries
	cout << "How many chips do you have?";
	cin >> chip; // int
	cout << "How much guacamole does the recipe say you need?";
	cin >> guacamole; // float?
	cout << "How many chips do you think there are in the store?";
	cin >> chips;
	cout << "Do you have salsa : Y/N ";
	cin >> salsa;
	if (salsa == 'Y' || salsa == 'y') {
		salsa = true; // freely changes the value from true to false
	}

	// After questions print out stored data
	cout << "You have" << chip << " number of chips.  \n"; // \n creates a new line 
	cout << "You need" << guacamole << " ounces of guacamole for your recipe." << endl; // different type new line 
	cout << "You think approximately " << chips * 12.454 * pow(9.7, 25) << " chips that are in the store." << '\n';
	cout << boolalpha << " The answer evaluation of you have salsa is" << salsa << endl; 

	// Change Values

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number another number : ";
	cin >> calc_2;
	cout << calc_1 << "+" << calc_2 << " = " << calc_1 + calc_2 << endl; 
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;
	// Pause
	pause();
}


	


