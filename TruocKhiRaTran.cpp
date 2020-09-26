#include <iostream>
#include <conio.h>

using namespace std;

int tongChan(int n);
int CongTu1DenN(int n);

int main()
{
	int n;
	cout << "Nhap vao n = ";
	cin >> n;
	cout << "\nTong SO LE tu 1 den " << n << " la: " << tongChan(n) << endl;
	cout << "Kha dep trai nhat" << endl;
	cout << "\nKet qua cong tu 1 den n: " << CongTu1DenN(n);
	getch();
	return 0;
}
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	return sum;
}
int CongTu1DenN(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i;
	}
	return s;
}
