#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	//meolah variabel
	double haliling[5]={4,4,5,3,3};
	double timpakul[5]={3,3,4,2,3};
	double manday[5]={5,4,2,2,2};
	
	double mc[5]={
		max(haliling[0],max(timpakul[0],manday[0])),
		max(haliling[1],max(timpakul[1],manday[1])),
		max(haliling[2],max(timpakul[2],manday[2])),
		max(haliling[3],max(timpakul[3],manday[3])),
		max(haliling[4],max(timpakul[4],manday[4]))
	};
	
	double mantan[5]={ 
		(haliling[0]/mc[0]), 
		(haliling[1]/mc[1]),
		(haliling[2]/mc[2]),
		(haliling[3]/mc[3]),
		(haliling[4]/mc[4])
	};
	
	double jablay[5]={ 
		(timpakul[0]/mc[0]), 
		(timpakul[1]/mc[1]),
		(timpakul[2]/mc[2]),
		(timpakul[3]/mc[3]),
		(timpakul[4]/mc[4])
	};
	
	double balu[5]={ 
		(manday[0]/mc[0]), 
		(manday[1]/mc[1]),
		(manday[2]/mc[2]),
		(manday[3]/mc[3]),
		(manday[4]/mc[4])
	};
		
	double w[5]={5,3,4,4,2};
	
	double RWa1c[5]={
		mantan[0]*w[0],
		mantan[1]*w[1],
		mantan[2]*w[2],
		mantan[3]*w[3],
		mantan[4]*w[4]
	};
	
	double RWa2c[5]={
		jablay[0]*w[0],
		jablay[1]*w[1],
		jablay[2]*w[2],
		jablay[3]*w[3],
		jablay[4]*w[4]
	};
	
	double RWa3c[5]={
		balu[0]*w[0],
		balu[1]*w[1],
		balu[2]*w[2],
		balu[3]*w[3],
		balu[4]*w[4]
	};
	double ha[3];
	
	//proses penjumlahan dari R * W
	ha[0]=RWa1c[0]+RWa1c[1]+RWa1c[2]+RWa1c[3]+RWa1c[4];
	ha[1]=RWa2c[0]+RWa2c[1]+RWa2c[2]+RWa2c[3]+RWa2c[4];
	ha[2]=RWa3c[0]+RWa3c[1]+RWa3c[2]+RWa3c[3]+RWa3c[4];
	
	cout << "MATRIKS X :"<<endl;
	cout << haliling[0] <<" | "<<haliling[1]<<" | "<<haliling[2]<<" | "<<haliling[3]<<" | "<<haliling[4]<<endl;
	cout << timpakul[0] <<" | "<<timpakul[1]<<" | "<<timpakul[2]<<" | "<<timpakul[3]<<" | "<<timpakul[4]<<endl;
	cout << manday[0] <<" | "<<manday[1]<<" | "<<manday[2]<<" | "<<manday[3]<<" | "<<manday[4]<<endl;
	cout << endl;
	cout << "MATRIKS R :"<<endl;
	cout << mantan[0] <<" | "<<mantan[1]<<" | "<<mantan[2]<<" | "<<mantan[3]<<" | "<<mantan[4]<<endl;
	cout << jablay[0] <<" | "<<jablay[1]<<" | "<<jablay[2]<<" | "<<jablay[3]<<" | "<<jablay[4]<<endl;
	cout << balu[0] <<" | "<<balu[1]<<" | "<<balu[2]<<" | "<<balu[3]<<" | "<<balu[4]<<endl;
	cout << endl;
	cout << "BOBOT W :"<<endl;
	cout << w[0] <<" | "<<w[1]<<" | "<<w[2]<<" | "<<w[3]<<" | "<<w[4]<<endl;
	cout << endl;
	cout << "MATRIKS R * W :"<<endl;
	cout << RWa1c[0] <<" | "<<RWa1c[1]<<" | "<<RWa1c[2]<<" | "<<RWa1c[3]<<" | "<<RWa1c[4]<<endl;
	cout << RWa2c[0] <<" | "<<RWa2c[1]<<" | "<<RWa2c[2]<<" | "<<RWa2c[3]<<" | "<<RWa2c[4]<<endl;
	cout << RWa3c[0] <<" | "<<RWa3c[1]<<" | "<<RWa3c[2]<<" | "<<RWa3c[3]<<" | "<<RWa3c[4]<<endl;
	cout << endl;	
	cout << "HASIL AKHIR  :"<<endl;
	cout << "Nilai A1 : "<<ha[0]<<endl;
	cout << "Nilai A2 : "<<ha[1]<<endl;
	cout << "Nilai A3 : "<<ha[2]<<endl;
}
