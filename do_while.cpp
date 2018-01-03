#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	double a1c[5]={4,4,5,3,3}, a2c[5]={3,3,4,2,3}, a3c[5]={5,4,2,2,2};
	
	cout << "MATRIX X :"<<endl;
	int bingka1=0;
	do{
		cout << a1c[bingka1]<<" | ";
		bingka1++;
	}while(bingka1<5);cout<<endl;
	int bingka2=0;
	do{
		cout << a2c[bingka2]<<" | ";
		bingka2++;
	}while(bingka2<5);cout<<endl;
		int bingka3=0;
	do{
		cout << a3c[bingka3]<<" | ";
		bingka3++;
	}while(bingka3<5);cout<<endl;
}
