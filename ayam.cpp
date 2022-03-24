#include<iostream>
#include<windows.h>
#include<fstream>
#include"_rumusAyam.h"
using namespace std;

void gotoxy(int x ,int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
class ayam
{
	friend ostream& operator <<(ostream& out , ayam& );	
	friend istream& operator >>(istream& in, ayam& );
	
	private:
		int totalHarga,jumlahGrngBkr;
		int jumlahPesananGrng,totalHrgGrng,ayamGoreng =17000;
		int jumlahPesananBakar,totalHrgBkr,ayamBakar =21000;
		float diskon=10,potongan;
		string pesananAyamGoreng= "Ayam goreng";
		string pesananAyamBakar= "Ayam bakar";
	public:
		void potonganHarga();
		
}a;

istream& operator>>(istream& in, ayam& var)
{
	for(int i=0;i<=51;i++)
	{
		gotoxy(0+i,0);
		cout<<"=";
	}
	gotoxy(0,1);cout<<"|   Nama Menu   |  Jumlah  |  Harga  | Total Harga |"<<endl;
	for(int i=0;i<=51;i++)
	{
		gotoxy(0+i,2);
		cout<<"=";
	}
	for(int i=1;i<=2;i++)
	{	
		gotoxy(0,2+i);
		cout<<"|               |          |         |             |";
	}
	gotoxy(3,3);cout<<var.pesananAyamGoreng;
	gotoxy(21,3);in>>var.jumlahPesananGrng;
	gotoxy(30,3);cout<<var.ayamGoreng;
	var.totalHrgGrng=kali(var.jumlahPesananGrng , var.ayamGoreng);
	gotoxy(42,3);cout<<var.totalHrgGrng;
	
	gotoxy(3,4);cout<<var.pesananAyamBakar;
	gotoxy(21,4);in>>var.jumlahPesananBakar;
	gotoxy(30,4);cout<<var.ayamBakar;
	var.totalHrgBkr=kali(var.jumlahPesananBakar , var.ayamBakar);
	gotoxy(42,4);cout<<var.totalHrgBkr;
	for(int i=0;i<=51;i++)
	{
		gotoxy(0+i,5);
		cout<<"=";
	}
	for(int i=0;i<=62;i++)
	{
		gotoxy(0+i,7);
		cout<<"=";
	}
	gotoxy(27,8);cout<<"Struk pembelian";
	for(int i=0;i<=62;i++)
	{
		gotoxy(0+i,9);
		cout<<"=";
	}
	gotoxy(0,10);cout<<"|   menu pesanan   |   harga   | jumlah pesanan | jumlah harga |";
		for(int i=0;i<=62;i++)
	{
		gotoxy(0+i,11);
		cout<<"-";
	}
	for(int i=0;i<=2;i++)
	{
		gotoxy(0,12+i);
		cout<<"|                  |           |                |              |";
	}
	gotoxy(4,12);cout<<var.pesananAyamGoreng;
	gotoxy(23,12);cout<<var.ayamGoreng;
	gotoxy(39,12);cout<<var.jumlahPesananGrng;
	gotoxy(53,12);cout<<var.totalHrgGrng;
	
	gotoxy(4,13);cout<<var.pesananAyamBakar;
	gotoxy(23,13);cout<<var.ayamBakar;
	gotoxy(39,13);cout<<var.jumlahPesananBakar;
	gotoxy(53,13);cout<<var.totalHrgBkr;
		for(int i=0;i<=62;i++)
	{
		gotoxy(0+i,14);
		cout<<"-";
	}
	var.jumlahGrngBkr= tambah(var.totalHrgGrng,var.totalHrgBkr);
	gotoxy(0,15);cout<<"|   Jumlah                                      |              |";
	gotoxy(53,15);cout<<var.jumlahGrngBkr;
		if (var.jumlahGrngBkr>45000)
	{	
		for(int i=0;i<=62;i++)
		{
			gotoxy(0+i,16);
			cout<<"-";
		}
		gotoxy(0,17);cout<<"|   anda mendapat potongan 10% karna pembelian anda >Rp45.000  |"<<endl;
		var.potongan =(var.diskon/100)*var.jumlahGrngBkr;
		var.totalHarga = kurang(var.jumlahGrngBkr,var.potongan);
			for(int i=0;i<=62;i++)
		{
			gotoxy(0+i,18);
			cout<<"-";
		}
		gotoxy(0,19);cout<<"|   TOTAL HARGA                                 |              |";
		gotoxy(53,19);cout<<var.totalHarga;
		for(int i=0;i<=62;i++)
		{
			gotoxy(0+i,20);
			cout<<"=";
		}
		gotoxy(20,21);cout<<" T E R I M A  K A S I H ";
		for(int i=0;i<=62;i++)
		{
			gotoxy(0+i,22);
			cout<<"=";
		}
	}
	
		else
	{	
		for(int i=0;i<=62;i++)
		{
			gotoxy(0+i,16);
			cout<<"-";
		}
		gotoxy(0,17);cout<<"|   anda tidak dapat potongan karna pembelian <Rp 45.000       |"<<endl;
			for(int i=0;i<=62;i++)
		{
			gotoxy(0+i,18);
			cout<<"-";
		}
		gotoxy(0,19);cout<<"|   TOTAL HARGA                                 |              |";
		gotoxy(53,19);cout<<var.jumlahGrngBkr;
		for(int i=0;i<=62;i++)
		{
			gotoxy(0+i,20);
			cout<<"=";
		}
		gotoxy(20,21);cout<<" T E R I M A  K A S I H ";
		for(int i=0;i<=62;i++)
		{
			gotoxy(0+i,22);
			cout<<"=";
		}
	}
	return in;
}
int main()
{
	cin>>a;
}
