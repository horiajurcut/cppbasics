#include <iostream>
#include "Logger.h"

int main()
{
	int a = 8;
	a++;
	const char* string = "Hello";

	for (int i = 0; i < 5; i++)
	{
		const char c = string[i];
		std::cout << c << std::endl;
	}

	int x = 5;
	bool comparisonResult = x == 5;

	if (comparisonResult)
	{
		Log("Hello, world!");
	}

	const char* ptr = "Yolo!";
	const char* nptr = nullptr;

	if (ptr)
	{
		Log(ptr);
	}
	else
	{
		Log("Pointer is null!");
	}

	if (nptr)
	{
		Log(nptr)
	}
	else
	{
		Log("Null Pointer!");
	}

	std::cin.get();
}