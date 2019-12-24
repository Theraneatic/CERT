#include "Menu.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include "art.h"
#include <stdlib.h>
using namespace std;

void Menu::diagMenu() {
	Menu menu;
	Art art;
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
		
	} else if (diagChoice == 3) {
		
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
