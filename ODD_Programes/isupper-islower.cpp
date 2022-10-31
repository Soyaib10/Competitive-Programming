// C++ program to toggle cases of a given
// string.
#include <iostream>
#include <cstring>
using namespace std;

// function to toggle cases of a string
void toggle(string& str)
{
	int length = str.length();
	for (int i = 0; i < length; i++) {
		int c = str[i];
		if (islower(c))
			str[i] = toupper(c);
		else if (isupper(c))
			str[i] = tolower(c);	
	}
}

// Driver Code
int main()
{
	string str = "GeekS";
	toggle(str);
	cout << str;
	return 0;
}
