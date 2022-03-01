//================LÝ THUYẾT===============
//Câu 1 : biến con trỏ và biến thường khác nhau ở chính cái giá tri , con trỏ thì không mang một giá trị nhất định 
// nó mang giá trị và địa chỉ mà nơi nó trỏ đến
// 
// 
// Câu 2 
// 1.Lệnh: int *b = &a;
// B1: Máy tính sẽ khai báo biến con trỏ b với kdl là int, một địa chỉ và một miền giá trị.
// B2: Biến con trỏ b lưu địa chỉ của biến a vào miền giá trị của nó.
// 
// 2.Lệnh: cout<<b<<endl;
// B1:Máy tính sẽ lấy địa chỉ của biến a vừa lưu trong miền giá trị
// B2: In ra địa chỉ của biến a
// 
// 3.Lệnh: cout<<*b<<endl;
// B1:Máy tính sẽ trỏ đến đến địa chỉ của biến a
// B2:Máy tính lấy giá trị của biến a
// B3:In giá trị của biến a
// 
// 4.Lệnh: float *c = a;
// Máy tính sẽ trỏ đến địa chỉ của biến a lấy giá trị của biến a và in với kiểu dữ liệu flloat
// 
// 5.Lệnh: a = 15; //trình bày các sự thay đổi liên quan
// Gia trị của biến a bây giờ đã thay đổi do con trỏ b đnag trỏ vào a vì vậy b cũng thay đổi giá trị
// là 15;
// 
// 
// Câu 3 : Trình bày tính chất của biến thường và biến con trỏ trong phạm vi trỏ
// - Một biến ta khai báo có thể được nhhieuf con trỏ trỏ đến
// Nhưng một con trỏ chỉ có thể trỏ được cho 1 biến;
// 
// Câu 4. Lợi ích của con trỏ ?
// Lợi ích của con trỏ có rất nhiều , nhưng nổi bật nhất chính là có thể thay đổi giá trị , và địa chỉ ;
// 
// Câu 5 CÂU 5:kích thước con trỏ là bao nhiêu ? trình bày chi tiết ?
// Kích thước con trỏ sẽ không có kích cố định nó phụ thuộc vào người dùng khai báo diểu dữ liệu cho nó
// hoặc là kích thước mà tham số nó truyền vào
// 
// Câu 6 Trình bày cú pháp hàm trả về con trỏ 
//
// int  Trave( int *x)
// {
//		cout << "Nhap x " ; cin >> x ;
//		return *x;
// }
// 
// int main ()
// {
//		int x = 15;
//		cout << Trave(x) << endl;
// }
//		
// ========================================= BT vận dụng =============================
//  
//
//
#include<iostream>
using namespace std;
#define MAX 100
void Xuat(int* p, int n);
void Nhap(int* p, int n);
int Max(int* p, int n);
int Min(int* p, int n);
void Snt_contro(int* p, int n);
void Xoa(int* p, int& n, int k);
void Them(int* p, int& n, int x, int k);
void Tangdan(int* p, int n);

int main()
{
	int n, a[100];
	int * p = a;  // khai báo con trỏ bang a[0]
	do
	{
		cout << "Nhap n : " << endl; cin >> n;
	}while(n <= 0, n > 100);
	Nhap(p, n);
	Tangdan(p, n);
	//int k; cout << "Nhap k " << endl ; cin >> k;
	//int Giatri; cout << "Nhap gia tri can them : " << endl; cin >> Giatri;
	//Them(p, n, Giatri, k);
	//Xoa(p, n, k);
	Xuat(p, n);
	//cout << "Max la : " << Max(p, n) << endl;
	//cout << "Min la : " << Min(p, n) << endl;
	//Snt_contro(p, n);
	system("pause");
	return 0;
}
void Nhap(int *p, int n)
{
	cout << "\n\n\t\tNHAP GIA TRI" << endl;

	for (int i=0; i < n; i++)
	{
		cout << "Nhap gia tri thu  " << i << " : " << endl;
		cin >> *(p + i);
	}
}
void Xuat(int* p,int n)
{
	cout << "\n\n\t\tXUAT GIA TRI " << endl
		;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i << " la : " << *(p + i) << endl;
	}
}
int Max(int* p, int n)
{
	int Max = *p;
	for (int i = 0; i < n; i++)
	{
		if (Max < *(p + i))
		{
			Max = *(p + i);
		}
	}
	return Max;
}
int Min(int* p, int n)
{
	int Min = *p;
	for (int i = 0; i < n; i++)
	{
		if (Min > *(p + i))
		{
			Min = *(p + i);
		}
	}
	return Min;
}
bool Snt(int Giatri)
{
	if (Giatri == 1)
	{
		return false;
	}
	for (int i = 2; i < Giatri; i++)
	{
		if (Giatri % i == 0)
		{
			return false ;
		}
	}
	return true; 
}
void Snt_contro(int* p, int n)
{
	bool Kiemtra; 
	cout << "Cac so nguyen to la : " << endl;
	for (int i = 0; i < n; i++)
	{
		Kiemtra = Snt(*(p + i));
		if (Kiemtra == true)
		{
			cout << *(p + i) << endl;
		}
	}
}
void Xoa(int* p, int &n, int k)
{
	for (int i = k; i < n; i++)
	{
		*(p + i) = *(p + i + 1);
	}
	n--;
}
void Them(int* p, int&n, int x, int k)
{
	for(int i = n ;i > k; i--)
	{
		*(p + i) = *(p + i - 1);
	}
	*(p + k) = x;
	n++;

}
void Tangdan(int* p, int n)
{
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(p+i) > *(p+j))
			{
				 temp = * (p + i) ;
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
}