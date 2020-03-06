#include "Diagnostics.h"
#include <iostream>
#include "windows.h"
#include <stdlib.h>
#include "menu.h"
#include "art.h"
#include <fstream>
#include <string>
using namespace std;

void Diagnostics::portScan() {
	Art art;
	Menu menu;
	string firstPortProxy, secondPortProxy, writeChoiceProxy, fileNameUnedited, filename, sysCall, confirmProxy;
	int firstPort = 0, secondPort = 0, writeChoice = 0, portSelectionConfirm = 0;
	do {
		cout << "Please enter the port you would like to start the scan at: ";
		cin >> firstPortProxy;
		cout << "\n\n";
		firstPort = atoi(firstPortProxy.c_str());
		while (firstPort < 1 || firstPort > 65535) {
			cout << "Please enter a valid input (1-65535): ";
			cin >> firstPortProxy;
			firstPort = atoi(firstPortProxy.c_str());
		}
		cout << "Please enter the port you would like to end the scan at: ";
		cin >> secondPortProxy;
		cout << "\n\n";
		secondPort = atoi(secondPortProxy.c_str());
		while (secondPort < 1 || secondPort > 65535) {
			cout << "Please enter a valid input (1-65535): ";
			cin >> secondPortProxy;
			firstPort = atoi(secondPortProxy.c_str());
		}
		cout << "Are you happy with the port range?\n1. Yes\n2. No\n\n";
		cin >> confirmProxy;
		cout << "\n\n";
		portSelectionConfirm = atoi(confirmProxy.c_str());
		while (portSelectionConfirm < 1 || portSelectionConfirm > 2) {
			cout << "Please enter a valid input: ";
			cin >> confirmProxy;
			portSelectionConfirm = atoi(confirmProxy.c_str());
		}
		if (portSelectionConfirm == 1) {
			portSelectionConfirm = 1;
		} else if (portSelectionConfirm == 2) {
			portSelectionConfirm = 0;
		}
		
	} while (portSelectionConfirm == 1);
	portSelectionConfirm = 0;
	// STOP HERE FOR NOW, BUG BYPASSED CONFIRM
	system("pause");
	system("cls");
	art.drawDiag();
	menu.diagMenu();
}

void Diagnostics::ipConfig() {
	Art art;
	Menu menu;
	string ipProxy = "", fileNameUnedited, fileName, sysCall;
	int ip = 0;
	cout << system("ipconfig");
	cout << "\n\n";
	cout << "Would you like to save these results to a text file?\n1. Yes\n2. No\n\n";
	cin >> ipProxy;
	ip = atoi(ipProxy.c_str());
	while (ip < 1 || ip > 2) {
		cout << "Please enter a valid input: ";
		cin >> ipProxy;
		ip = atoi(ipProxy.c_str());
	}
	if (ip == 1) {
		cout << "Please enter the title of the output file: ";
		cin >> fileNameUnedited;
		fileName = fileNameUnedited + ".txt";
		cout << "Saving file...\n";
		sysCall = "ipconfig > " + fileName;
		system(sysCall.c_str());
		cout << "Writing completed to " + fileName + ".\n";
		system("pause");
		system("cls");
		art.drawDiag();
		menu.diagMenu();
	} else {
		system("pause");
		system("cls");
		art.drawDiag();
		menu.diagMenu();
	}
}

void Diagnostics::userList() {
	Art art;
	Menu menu;
	string userProxy = "", fileNameUnedit = "", fileN = "", sysC = "";
	int user = 0;
	cout << system("net user");
	cout << "\n\n";
	cout << "Would you like to save these results to a text file?\n1. Yes\n2. No\n\n";
	cin >> userProxy;
	user = atoi(userProxy.c_str());
	while (user < 1 || user > 2) {
		cout << "Please enter a valid input: ";
		cin >> userProxy;
		user = atoi(userProxy.c_str());
	}
	if (user == 1) {
		cout << "Please enter the title of the output file: ";
		cin >> fileNameUnedit;
		fileN = fileNameUnedit + ".txt";
		cout << "Saving file...\n";
		sysC = "net user > " + fileN;
		system(sysC.c_str());
		cout << "Writing completed to " + fileN + ".\n";
		system("pause");
		system("cls");
		art.drawDiag();
		menu.diagMenu();
	} else {
		system("pause");
		system("cls");
		art.drawDiag();
		menu.diagMenu();
	}
}
