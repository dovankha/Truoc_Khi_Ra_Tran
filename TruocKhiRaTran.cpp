#include <iostream>
#include <conio.h>

using namespace std;

int tongChan(int n);
int tongLe(int n);

int main()
{
	int n;
	cout << "Nhap vao n = ";
	cin >> n;
	cout << "\nTong so chan tu 1 den " << n << " la: " << tongChan(n) << endl;
	cout << "Kha dep trai nhat" << endl;
	cout << "\nTong so le tu 1 den " << n << " la: " << tongLe(n) << endl;
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

int tongLe(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i+=2)
		sum += i;
	return sum;
}
