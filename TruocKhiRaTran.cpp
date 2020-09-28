#include <iostream>
#include <conio.h>

using namespace std;

struct ds{
	string name;
	int age;
};
void nhap(ds a[],int n);
void xuat(ds a[],int n);

int tongChan(int n);
int tongLe(int n);
int CongTu1DenN(int n);

int main()
{
	int n;
	cout << "Nhap vao n = ";
	cin >> n;
	cout << "\nTong so chan tu 1 den " << n << " la: " << tongChan(n) << endl;
	cout << "\nTong so le tu 1 den " << n << " la: " << tongLe(n) << endl;
	cout << "\nKet qua cong tu 1 den n: " << CongTu1DenN(n) << endl;
	
	cout<<"Nhap so Thanh vien nhom: ";
	cin>>n;
	ds a[n];
	nhap(a,n);
	xuat(a,n);

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
	for (int i = 1; i <= n; i += 2)
		sum += i;
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

void nhap(ds a[],int n)
{
	
	for (int i=0;i<n;++i)
	{
		cout<<"Thanh vien thu "<<i+1<<endl;
		cout<<"Nhap ten: ";
		fflush(stdin);
		getline(cin,a[i].name);
		cout<<"Nhap tuoi: ";
		cin>>a[i].age;
	}
}
void xuat(ds a[],int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<"Thanh Vien "<<i+1<<endl;
		cout<<"\t Name: "<<a[i].name<<endl;
		cout<<"\t Age: "<<a[i].age<<endl;
	}
}

