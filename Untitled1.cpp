#include <iostream>
#include <cmath>
using namespace std;

class kendaraan{
	public:
		void harga(string price);
		string kualitas, tenaga, model;
		
};

int main(){
	kendaraan Honda, Yamaha, Suzuki;
	
	Honda.kualitas = "irit dan murah ";
	Yamaha.kualitas = " irit dan bertenaga ";
	Suzuki.kualitas = " murah dan higt performa ";
	
	cout << (Honda.kualitas);
	Honda.harga(" standar ");
	
	Yamaha.harga(" normal ");
}

void kendaraan::harga(string price){
	cout<<" Harga "<<price<<" sesuai keinginan anda ";
}

