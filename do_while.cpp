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
	
	double mc1=max(a1c[0],max(a2c[0],a3c[0])),
	mc2=max(a1c[1],max(a2c[1],a3c[1])),
	mc3=max(a1c[2],max(a2c[2],a3c[2])),
	mc4=max(a1c[3],max(a2c[3],a3c[3])),
	mc5=max(a1c[4],max(a2c[4],a3c[4]));
	
	double Ra1c[5]={ (a1c[0]/mc1),(a1c[1]/mc2),(a1c[2]/mc3),(a1c[3]/mc4),(a1c[4]/mc5) };
	double Ra2c[5]={ (a2c[0]/mc1),(a2c[1]/mc2),(a2c[2]/mc3),(a2c[3]/mc4),(a2c[4]/mc5) };
	double Ra3c[5]={ (a3c[0]/mc1),(a3c[1]/mc2),(a3c[2]/mc3),(a3c[3]/mc4),(a3c[4]/mc5) };
	cout << endl<<endl;
	
	cout << "MATRIX R :"<<endl;
	int apam1=0;
	do{
		cout << Ra1c[apam1]<<" | ";
		apam1++;
	}while(apam1<5);cout<<endl;
		int apam2=0;
	do{
		cout << Ra2c[apam2]<<" | ";
		apam2++;
	}while(apam2<5);cout<<endl;
		int apam3=0;
	do{
		cout << Ra3c[apam3]<<" | ";
		apam3++;
	}while(apam3<5);cout<<endl;
	
	
}
