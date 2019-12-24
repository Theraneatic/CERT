#include <iostream>
#include <windows.h>
#include <string>
#include <typeinfo>
#include "art.h"
#include "menu.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Variable declarations, object creation, and console manipulation.
	int menChoice = 0, loop = 0;
	string menChoiceProxy = "";
	Art art;
	Menu menu;
	string title = "Common Error Repair Tool | CERT";
	SetConsoleTitle(title.c_str());
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	
	// Menu Functionality
	while (loop != 1) {
		art.drawMenu();
		cout << "Welcome to CERT. Please select a menu option to continue.\n";
		cout << "1. Diagnostics\n";
		cout << "2. Repair\n";
		cout << "3. Information\n";
		cout << "4. Quit\n\n";
		cout << "Please select an option: ";
		cin >> menChoiceProxy;
		menChoice = atoi(menChoiceProxy.c_str());
	
		while (menChoice < 1 || menChoice > 4) {	
			cout << "Please enter a valid menu option: ";
			cin >> menChoiceProxy;
			menChoice = atoi(menChoiceProxy.c_str());
		}
		if (menChoice == 1) {
			art.drawDiag();
			menu.diagMenu();
		} else if (menChoice == 2) {
			art.drawRep();
			menu.repMenu();
		} else if (menChoice == 3) {
			art.drawInfo();
			menu.infoMenu();
		} else {
			return 0;
		}
	}
	
	
	
	
	
	return 0;
}
