#include <iostream>
using namespace std;

long long pangkat(long  long a, long long b) {
	if(b==0) {
		return 1;
	}
	return a* pangkat(a,b-1);
}

int main(){
	int a, b;
	
	cout<<"=== Program Pangkat Rekursif ==="<<endl;
	cout<<"Masukkan Angka dasar (a) : ";
	cin>>a;
	cout<<"Maasukkan eskponen (b) : ";
	cin>>b;
	
	int hasil= pangkat (a,b);
	
	cout<<"\nHasil dari "<<a<<"^"<<b<<" adalah :" << hasil << endl;
	
	return 0;
}
