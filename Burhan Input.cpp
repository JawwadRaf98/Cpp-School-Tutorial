#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdio.h>
using namespace std;

int main(){
	
//	char ch;
	
//	getting value through cout

/*
	cout<<"Please Enter any Character: ";
	cin>> ch;
*/

// getting input through getch() must include <conio.h>
/*
	cout<<"Program start.... \npress any key to move further";
	ch = getch();
*/

// gettig input through getche() must include <conio.h>
/*
	cout<<"Program start.... \npress any key to move further : ";
	ch = getche();
*/


// gettig input through getchar() must include <stdio.h>
/*

	cout<<"Program start.... \npress any key to move further : ";
	ch = getchar();

*/

// gettig input through gets() must include <cstdio.h>

	char ch[20];
	cout<<"Program start.... \npress any key to move further : ";
	gets(ch);

	
//	output
	cout<<"\nThe Charcter you entered is: '"<<ch<<"'";
	
	return 0;
}
