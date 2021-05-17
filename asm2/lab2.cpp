#include <stdio.h>
#include <string>
#include<iostream>

using namespace std;

extern "C" int __fastcall FUNC(int size, char* A1);

int main()
{
	string str;
	cin >> str;
	int size = str.size();
	char* x = new char[size];
	for (int i = 0; i < size; i++)
		x[i] = str[i];
	x[size] = '\0';

	int val;
	val = FUNC(size, x);
	if (val) cout << "equal" << endl;
	else cout << "non-equal" << endl;
	system("pause");
	return 0;
}
