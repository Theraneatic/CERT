#include "Menu.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include "art.h"
#include <stdlib.h>
#include "diagnostics.h"
using namespace std;

void Menu::diagMenu() {
	Menu menu;
	Art art;
	Diagnostics diag;
	string diagMenuProxy = "";
	int diagChoice = 0;
	cin >> diagMenuProxy;
	diagChoice = atoi(diagMenuProxy.c_str());
	while (diagChoice < 1 || diagChoice > 6) {
		cout << "Invalid option. Please select a valid menu option: ";
		cin >> diagMenuProxy;
		diagChoice = atoi(diagMenuProxy.c_str());
	}
	if (diagChoice == 1) {
		
	} else if (diagChoice == 2) {
		diag.ipConfig();
	} else if (diagChoice == 3) {
		diag.userList();
	} else if (diagChoice == 4) {
		system("cls");
		art.drawInfo();
		menu.infoMenu();
	} else if (diagChoice == 5) {
		system("cls");
		art.drawRep();
		menu.repMenu();
	} else if (diagChoice == 6) {
		system("cls");
		exit(0);
	}
}

void Menu::infoMenu() {
	Menu menu;
	Art art;
	string infoMenuProxy = "";
	int infoChoice = 0;
	cin >> infoMenuProxy;
	infoChoice = atoi(infoMenuProxy.c_str());
	while (infoChoice < 1 || infoChoice > 3) {
		cout << "Invalid option. Please select a valid menu option: ";
		cin >> infoMenuProxy;
		infoChoice = atoi(infoMenuProxy.c_str());
	}
	if (infoChoice == 1) {
		system("cls");
		art.drawDiag();
		menu.diagMenu();
	} else if (infoChoice == 2) {
		system("cls");
		art.drawRep();
		menu.repMenu();
	} else if (infoChoice == 3) {
		system("cls");
		exit(0);
	}
}

void Menu::repMenu() {
	Menu menu;
	Art art;
	string repMenuProxy = "";
	int repChoice = 0;
	cin >> repMenuProxy;
	repChoice = atoi(repMenuProxy.c_str());
	while (repChoice < 1 || repChoice > 5) {
		cout << "Invalid option. Please select a valid menu option: ";
		cin >> repMenuProxy;
		repChoice = atoi(repMenuProxy.c_str());
	}
	if (repChoice == 1) {
		
	} else if (repChoice == 2) {
		
	} else if (repChoice == 3) {
		system("cls");
		art.drawDiag();
		menu.diagMenu();
	} else if (repChoice == 4) {
		system("cls");
		art.drawInfo();
		menu.infoMenu();
	} else if (repChoice == 5) {
		system("cls");
		exit(0);
	}
}





/* 
Guide on adding new menus to the system.

When adding a new menu, please add the header art and the text options to Art.cpp.
Then, while here, please create a menu object and an art object. 
Define the menu name here and init it public in Menu.h
PLEASE ADD ERROR CHECKING, EXAMPLES ABOVE
Clear the screen with a system call, then call the art object to draw your menu, then call the menu object for menu functionality. 
ALWAYS ADD AN EXIT CALL AT THE END
*/

