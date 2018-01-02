#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	//meolah variabel
	double a1c[5]={4,4,5,3,3};
	double a2c[5]={3,3,4,2,3};
	double a3c[5]={5,4,2,2,2};
	
	double mc[5]={
		max(a1c[0],max(a2c[0],a3c[0])),
		max(a1c[1],max(a2c[1],a3c[1])),
		max(a1c[2],max(a2c[2],a3c[2])),
		max(a1c[3],max(a2c[3],a3c[3])),
		max(a1c[4],max(a2c[4],a3c[4]))
	};
	
	double Ra1c[5]={ 
		(a1c[0]/mc[0]), 
		(a1c[1]/mc[1]),
		(a1c[2]/mc[2]),
		(a1c[3]/mc[3]),
		(a1c[4]/mc[4])
	};
	
	double Ra2c[5]={ 
		(a2c[0]/mc[0]), 
		(a2c[1]/mc[1]),
		(a2c[2]/mc[2]),
		(a2c[3]/mc[3]),
		(a2c[4]/mc[4])
	};
	
	double Ra3c[5]={ 
		(a3c[0]/mc[0]), 
		(a3c[1]/mc[1]),
		(a3c[2]/mc[2]),
		(a3c[3]/mc[3]),
		(a3c[4]/mc[4])
	};
		
	double w[5]={5,3,4,4,3};
	
	double RWa1c[5]={
		Ra1c[0]*w[0],
		Ra1c[1]*w[1],
		Ra1c[2]*w[2],
		Ra1c[3]*w[3],
		Ra1c[4]*w[4]
	};
	
	double RWa2c[5]={
		Ra2c[0]*w[0],
		Ra2c[1]*w[1],
		Ra2c[2]*w[2],
		Ra2c[3]*w[3],
		Ra2c[4]*w[4]
	};
	
	double RWa3c[5]={
		Ra3c[0]*w[0],
		Ra3c[1]*w[1],
		Ra3c[2]*w[2],
		Ra3c[3]*w[3],
		Ra3c[4]*w[4]
	};
	double ha[3];
	
	//proses penjumlahan dari R * W
	ha[0]=RWa1c[0]+RWa1c[1]+RWa1c[2]+RWa1c[3]+RWa1c[4];
	ha[1]=RWa2c[0]+RWa2c[1]+RWa2c[2]+RWa2c[3]+RWa2c[4];
	ha[2]=RWa3c[0]+RWa3c[1]+RWa3c[2]+RWa3c[3]+RWa3c[4];
	
	cout << "MATRIKS X :"<<endl;
	cout << a1c[0] <<" | "<<a1c[1]<<" | "<<a1c[2]<<" | "<<a1c[3]<<" | "<<a1c[4]<<endl;
	cout << a2c[0] <<" | "<<a2c[1]<<" | "<<a2c[2]<<" | "<<a2c[3]<<" | "<<a2c[4]<<endl;
	cout << a3c[0] <<" | /"<<a3c[1]<<" | "<<a3c[2]<<" | "<<a3c[3]<<" | "<<a3c[4]<<endl;
	cout << endl;
	cout << "MATRIKS R :"<<endl;
	cout << Ra1c[0] <<" | "<<Ra1c[1]<<" | "<<Ra1c[2]<<" | "<<Ra1c[1]<<" | "<<Ra1c[4]<<endl;
	cout << Ra2c[0] <<" | "<<Ra2c[1]<<" | "<<Ra2c[2]<<" | "<<Ra2c[3]<<" | "<<Ra2c[4]<<endl;
	cout << Ra3c[0] <<" | "<<Ra3c[1]<<" | "<<Ra3c[2]<<" | "<<Ra3c[3]<<" | "<<Ra3c[1]<<endl;
}
