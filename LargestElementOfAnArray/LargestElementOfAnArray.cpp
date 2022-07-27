#include <iostream>
using namespace std;

int main()
{
	int i;
	int array[10];

	for (i = 0; i < 10; i++) {
	cout << "Please Enter 10 Numbers: ";
	cin >> array[i];
}
	for (i = 1; i < 10; i++) {
		if (array[0]< array[i])
			array[0] = array[i];
	}
	cout << endl << "The Largest Number Out Of The 10 Numbers You Enter Are: " << array[0];

	return 0;
}

