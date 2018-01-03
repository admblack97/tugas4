#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	
	double ac[3][5]={ {4,4,5,3,3},{3,3,4,2,3},{5,4,2,2,2} };
	double mc[5]={
		max(ac[0][0],max(ac[1][0],ac[2][0])),
		max(ac[0][1],max(ac[1][1],ac[2][1])),
		max(ac[0][2],max(ac[1][2],ac[2][2])),
		max(ac[0][3],max(ac[1][3],ac[2][3])),
		max(ac[0][4],max(ac[1][4],ac[2][4]))
	};
	
		double Rac[3][5]={
	   {(ac[0][0]/mc[0]),(ac[0][1]/mc[1]),(ac[0][2]/mc[2]),(ac[0][3]/mc[3]),(ac[0][4]/mc[4])}, 
	   {(ac[1][0]/mc[0]),(ac[1][1]/mc[1]),(ac[1][2]/mc[2]),(ac[1][3]/mc[3]),(ac[1][4]/mc[4])},
	   {(ac[2][0]/mc[0]),(ac[2][1]/mc[1]),(ac[2][2]/mc[2]),(ac[2][3]/mc[3]),(ac[2][4]/mc[4])} 
	};
	double w[5]={5,3,4,4,2};
	
	double RWac[3][5]={
		(Rac[0][0]*w[0]),(Rac[0][1]*w[1]),(Rac[0][2]*w[2]),(Rac[0][3]*w[3]),(Rac[0][4]*w[4]),
		(Rac[1][0]*w[0]),(Rac[1][1]*w[1]),(Rac[1][2]*w[2]),(Rac[1][3]*w[3]),(Rac[1][4]*w[4]),
		(Rac[2][0]*w[0]),(Rac[2][1]*w[1]),(Rac[2][2]*w[2]),(Rac[2][3]*w[3]),(Rac[2][4]*w[4])
	};
	double ha[3];
}
