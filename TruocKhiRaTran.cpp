#include <iostream>
#include <conio.h>

using namespace std;

int tongChan(int n);
<<<<<<<
int tongLe(int n);
=======
int CongTu1DenN(int n);

int main()
{
	int n;
	cout << "Nhap vao n = ";
	cin >> n;
	cout << "\nTong so chan tu 1 den " << n << " la: " << tongChan(n) << endl;
	cout << "Kha dep trai nhat" << endl;
	cout << "\nTong so le tu 1 den " << n << " la: " << tongLe(n) << endl;
	cout << "Kha dep trai nhat" << endl;	
=======
	cout << "\nKet qua cong tu 1 den n: " << CongTu1DenN(n);
>>>>>>> 
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
<<<<<<< HEAD

int tongLe(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i+=2)
		sum += i;
	return sum;
=======
int CongTu1DenN(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i;
	}
	return s;
>>>>>>> c7f8384be90ca08692969b0e389dd82b8c858842
}
