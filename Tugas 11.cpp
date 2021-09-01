#include <iostream>

using namespace std; 

int HitungLuasSegitiga (int Alas, int Tinggi){
	double HitungLuasSegitiga = (Alas*Tinggi)/ 2.0;
	cout<<"Luas Segitiga : "<<HitungLuasSegitiga<<endl;
	
	
}
int main(){
	int A, T;
	cout<<"Inputkan Alas Segitiga : ";
	cin>>A;
	cout<<"Inputkan Tinggi Segitiga : ";
	cin>>T;
	return HitungLuasSegitiga(A, T);
}
