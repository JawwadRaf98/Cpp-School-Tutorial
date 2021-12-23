#include <iostream>
using namespace std;
int main(){
	
	cout<<"\nProgramme for Newton's Second law of motion'";
	cout<<"\n-------------------------------------\n";
	
	double mass, acceleration, force;
	
//	reading input
	cout<<"\nEnter the value of mass in (kg) : ";
	cin>>mass;
	cout<<"\nEnter the value of acceleration in (m/s^2) : ";
	cin>>acceleration;

// formula
	force = (mass * acceleration);
	
	cout<<"\nForce =====> "<<force<<" N\n";
	
	
	return 0;
}
