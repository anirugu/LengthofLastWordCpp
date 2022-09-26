// LengthofLastWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int lengthOfLastWord(string);

int main()
{
	int result = lengthOfLastWord("Hello World");
	cout << result << endl;
	//lengthOfLastWord("a");
}

int lengthOfLastWord(string s) {
	int total = 0;
	int i = s.size() - 1;
	while (i >= 0) {
		if (s[i] != ' ') {
			total++;
			i--;
		}
		else {
			if (total > 0)
				break;
			i--;
			continue;
		}

	}
	return total;
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
