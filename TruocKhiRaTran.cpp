#include <iostream>
#include <conio.h>

using namespace std;

int tongChan(int n);

int main()
{
	int n;
	cout << "Nhap vao n = ";
	cin >> n;
	cout << "\nTong SO LE tu 1 den " << n << " la: " << tongChan(n) << endl;
	cout << "Kha dep trai nhat" << endl;
	
	getch();
	return 0;
}

int tongChan(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	return sum;
}