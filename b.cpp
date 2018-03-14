#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Please enter an integer:";
	cin >> n;

	if (n == 1)
		cout << n;

	while (n != 1)
	{
		if (n % 2 == 1){
			n = n * 3 + 1;
			cout << n ;
		}
		else{
			n = n / 2;
			cout << n ;
		}
	}

	return 0;

}
