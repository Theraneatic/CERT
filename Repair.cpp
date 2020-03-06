#include "Repair.h"
#include <iostream>
#include "windows.h"
#include <stdlib.h>
#include "menu.h"
#include "art.h"
#include <string>
#include "gpedit.h"
using namespace std;

void Repair::flushDNS() {
	Art art;
	Menu menu;
	cout << system("ipconfig /flushdns");
	cout << "\n";
	system("pause");
	system("cls");
	art.drawRep();
	menu.repMenu();
}

void Repair::fixRollback() {
    Art art;
    Menu menu;
    HKEY hkey;
    long regOpenResult;
    char buffer[50];
    string rollProxy = "";
    cout << "Please ensure that you are admin before attempting to alter this registry value.\n";
    system("pause");
    /*RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Group Policy Objects\\{51954609-911F-4C71-BCF4-6C0591BF70C7}User\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\DisableRegistryTools", 0, NULL, NULL);
    RegSetValueExA(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Group Policy Objects\\{51954609-911F-4C71-BCF4-6C0591BF70C7}User\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\DisableRegistryTools", 0, REG_DWORD, 000001, 32);
    RegCloseKey(HKEY_CURRENT_USER);*/
    
    /*regOpenResult = RegOpenKeyEx(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Group Policy Objects\\{51954609-911F-4C71-BCF4-6C0591BF70C7}User\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\DisableRegistryTools", 0, 0, &hkey);
    if (regOpenResult == ERROR_SUCCESS) {
    	regOpenResult = RegSetValueEx(hkey, TEXT("1"), 0, REG_SZ, (BYTE*) buffer, strlen(buffer));
    	if (regOpenResult == ERROR_SUCCESS) {
    		cout << "Successfully edited preventative registry closure.";
		}
	}
	*/
	cout << "\n";
	system("pause");
	system("cls");
	art.drawRep();
	menu.repMenu();
    /*
    https://stackoverflow.com/questions/29624015/how-to-programatically-update-group-policy-with-c
    http://tech.labs.oliverwyman.com/blog/2013/03/25/programmatically-updating-local-policy-in-windows/
    https://docs.microsoft.com/en-us/windows/win32/api/gpedit/nn-gpedit-igrouppolicyobject
    
    https://stackoverflow.com/questions/863991/using-c-to-edit-the-registry THIS SHOWS PROMISE
    
	https://stackoverflow.com/questions/12926644/update-the-local-computer-policy-in-windows-7-with-igrouppolicyobject#13152886
    https://pete.akeo.ie/2011/03/porgramatically-setting-and-applying.html
    https://www.cplusplus.com/forum/windows/196897/
    
    
    
    HKCU\Software\Microsoft\Windows\CurrentVersion\Group Policy Objects\{51954609-911F-4C71-BCF4-6C0591BF70C7}User\Software\Microsoft\Windows\CurrentVersion\Policies\System\DisableRegistryTools
    
    */
    
    
}
