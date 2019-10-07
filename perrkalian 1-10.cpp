#include <iostream>
using namespace std;

int main(){
	
	int i,n,batas=10,jumlah;
	
	menu:
	cout<<"perkalian 1-10\n";
	cout<<"BY AMALIA FANDANING TYAS\n";
	cout<<"\n\n";
	cout<<"masukkan agka yang ingin dikalikan\n";
	cin>>n;
	cout<<"maka....\n\n";
	
	for(i=1;i<=batas;i++){
		jumlah=i*n;
		cout<<i<< " x " <<n<<" = "<<jumlah<<endl;
	}
	return 0;
	
}
