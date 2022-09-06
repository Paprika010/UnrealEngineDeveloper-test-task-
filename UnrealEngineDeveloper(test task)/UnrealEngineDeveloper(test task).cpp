// UnrealEngineDeveloper(test task).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>

std::string replaceChar(std::string str) 
{
	std::unordered_map<char, int> Cnt;
	for (char c : str) Cnt[tolower(c)]++;
	std::string ans = "";
	for (char c : str) ans += (Cnt[tolower(c)] > 1) ? ')' : '(';
	return ans;
}

int main()
{
	//char ch;
	std::string ch;
	do
	{
		
		std::string str1;
		std::cout << "Enter the line:" << std::endl;
		getline(std::cin, str1); // исходная строка, введеная пользователем
		
		
		replaceChar(str1);
		std::cout << replaceChar(str1) << std::endl;		
		std::cout << "Would you like to repeat it(y/n)?" << std::endl;
		//std::cin >> ch;
		getline(std::cin, ch);
		
		
	} while (ch != "n");

	return 0;
}

