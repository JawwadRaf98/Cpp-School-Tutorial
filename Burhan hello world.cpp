#include <iostream>
#include <cstdio>
using namespace std;

void abc(){
	cout<<"it is abc function";
}

int main(){
	// title
	
	putc("s");
	cout<<"Programme for writing a table"<<endl;
	
	// initialize a varible
	int number;
	
	//read input from user end then assign it to varible 'number'
	cout<<"Please enter the value which table you want to print : ";
	cin>>number;
	
	// Heading of tabel
	cout<<endl<<"Table of "<<number<<endl;
	
	//for loop
	for(int i = 1; i<=10; i++){
		
		/*print each statement of table
			f sdm fjsd vm 
			vnksdbvs v
		*/
		cout<<number<<" X "<<i<<" = "<<number*i<<endl;
	}
	//	table end
	cout<<"======end=======";
	return 0;
}

