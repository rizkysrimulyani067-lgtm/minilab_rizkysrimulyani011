#include <iostream>
using namespace std;

int tambah (int a, int b){
	return a + b;
}
int kurang (int a, int b){
	return a-b;
}
int kali (int a, int b){
	return a*b;
}

float bagi (float a, float b){
	if(b==0){
		cout<<"Error: Pembagian dengan nol"<<endl;
		return 0;
	}
	return a/b;
}

int main(){
	int a, b, pilihan;
	
	cout<<"===Kalkulator Sederhana==="<<endl;
	cout<<"Masukkan Angka pertama : ";
	cin>>a;
	cout<<"Masukan angka kedua : " ;
	cin>>b;
	
	cout<<"\nPilih Operasi : "<<endl;
	cout<<"1. Tambah" <<endl;
	cout<<"2. Kurang "<<endl;
	cout<<"3. Kali "<<endl;
	cout<<"4. Bagi "<<endl;
	cout<<"Pilihan : ";
	cin>>pilihan;
	
	cout<<"\nHasil : ";
	
	switch (pilihan){
		case 1:
			cout<<tambah(a,b);
			break;
		case 2:
			cout<<kurang(a,b);
			break;
		case 3:
			cout<<kali(a,b);
			break;
		case 4:
			cout<<bagi(a,b);
			break;
			default:
				cout<<"Pilihan tidak valid";
	}
	cout<<endl;
	return 0;
	
}
