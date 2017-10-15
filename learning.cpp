// learning.cpp : A simple project made to gain an understanding of C++
// @author eashwar (eashwar.github.io)
//

#include "stdafx.h"
#include <iostream>
#include <cassert>
#include "doc.h"


using namespace std;

int main()
{
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << n << "! = " << factorial(&n) << "." << endl;
    return 0;
}


int factorial(int* n)
{
	// Can't take the factorial of a negative number!
	assert(*n >= 0);

	// Base case
	if (*n == 1 || *n == 0)
	{
		return 1;
	}
	// Recurse
	else
	{
		int next = *n - 1;
		return *n * factorial(&next);
	}
}