/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : Swap
Tanggal Buat : 26-02-2018
Deskripsi : Mengganti nilai x dengan nilai y dan sebaliknya
*/

#include <iostream>
using namespace std;

void swap(int x,int y,int temp){
	cout<<"Masukkan nilai x : ";
	cin>>x;
	cout<<"Masukkan nilai y : ";
	cin>>y;
	temp = x;
	x = y;
	y = temp;
	cout<<"X="<<x<<endl;
	cout<<"Y="<<temp<<endl;
}

int main(){
	int x,y,temp;
	swap(x,y,temp);
}
