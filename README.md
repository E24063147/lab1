# lab1
#include <iostream>
using namespace std;

int main()
{
	int n;//宣告變數為n
	cout << "Please enter an integer:";//輸出字串
	cin >> n;//把輸入數值指派給n

	if (n == 1)//如果n=1則進入if敘述，輸出n。如果n!=1則不會進入if
		cout << n;

	while (n != 1)//在n!=1的時候進入迴圈
	{
		if (n % 2 == 1){//如果n為奇數，則輸出n=n*3+1
			n = n * 3 + 1;
			cout << n ;
		}
		else{
			n = n / 2;//如果n為偶數，則輸出n=n/2
			cout << n ;
		}
	}

	return 0;

}
