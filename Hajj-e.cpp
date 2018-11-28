#include <iostream>
using namespace std;

int main() {
	
	int n;
	string text,result;
	while (cin >> text)
	{
		n++;
		if (text == "*") {
			break;
		}
		cout << "Case " << n << ": ";
		
		if (text == "Hajj") {
			cout << "Hajj-e-Akbar" << endl;
		} else if (text == "Umrah") {
			cout << "Hajj-e-Asghar" << endl;
		}
		
	}
	
	return 0;
}
