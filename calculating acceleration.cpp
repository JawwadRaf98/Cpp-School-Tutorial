#include <iostream>
using namespace std;
int main(){
	
	
	cout<<"\n Programme for calculating acceleration";
	cout<<"\n --------------------------------------";
	
	float acceleration , finalVelocity , initialVelocity , time;

	
	// reading input
	cout<<"\n enter the value of initial velocity in (m/s) : ";
	cin>>initialVelocity;
	cout<<"\n enter the value of final velocity in (m/s) :";
	cin>>finalVelocity;
	cout<<"\n enter the value of time in   (sec) : ";
	cin>>time;
	
	// formula
	acceleration=(finalVelocity-initialVelocity)/time;
	cout<<"\n acceleration ========>  "<<acceleration<<" m/s^2";
	
	
	return 0;
}
