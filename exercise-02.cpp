/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : Celcius ke Fahrenheit
Tanggal Buat : 26-02-2018
Deskripsi : Program akan mengubah nilai suhu yang awalnya dari celcius ke fahrenheit
*/

#include <iostream> //memasukkan library
using namespace std; //mengaktifkan penulisan standar

float ubahSuhu(float celcius,float fahrenheit){ //fungsi mengubah suhu
	fahrenheit = ((celcius*9)/5)+32; //rumus celcius ke fahrenheit
	cout<<fahrenheit; //nyetak fahrenheit
	return fahrenheit; //mengembalikan nilai fahrenheit
}

int main(){ //fungsi utama
	float fahrenheit; //pendeklarsian variabel fahrenheit
	float celcius; //pendeklarasian varable celcius
	
	cout<<"Masukkan suhu(dalam celcius): "; //ui
	cin>>celcius; //memasukkan nilai celcius
	
	cout<<"The temp is = ";ubahSuhu(celcius,fahrenheit); //mencetak nilai fahrenheit
}
