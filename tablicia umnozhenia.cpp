#include <iostream>
using namespace std;

int main()
{
	int multiplicand = 1;
	int multiplier = 1;
	for (int i = 1; i < 11; i++) {
		multiplier = 1;

		for (int j = 1; j < 11; j++) {

			cout << i << "*" << j << "=" << i * j << " ";

		}
		
		cout << "\n";

	}

	

}
