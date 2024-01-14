// CppNativeAppTst.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <atlstr.h>

int main()
{
	std::cout << "Hello World from MFC application!\n";

	std::ofstream file("filename.txt");

	if (file.is_open()) {
		std::string str = "Hello World from MFC application!";
		file << str;
		file.close();

		std::cout << "String written to the file successfully." << std::endl;
	}
	else {
		std::cout << "Failed to open the file." << std::endl;
		// Handle the error
	}

	CString aCString = CString(_T("This is CString"));
	_tprintf(_T("%s\n"), (LPCTSTR)aCString);

	std::cout << "enter a string" << std::endl;
	std::string intput;
	std::cin >> intput;
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
