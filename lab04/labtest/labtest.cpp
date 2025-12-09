#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int n1 = 1, n2 = 20;
	cout << " duo 1 to 20" << endl;
	do {
		if (n1 % 2 == 0)
			cout << n1 << endl; 
		n1++;
	} while (n1 <= 20);

	cout << " return 20 to 1" << endl;
	
	do {
		if (n2 % 2 == 1)
			cout << n2 << endl;
		n2--;
	} while (n2 >= 1);
	

	return 0;
}