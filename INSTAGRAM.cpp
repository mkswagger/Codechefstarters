/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

void follow(){
    int x,y;
    cin>>x>>y;
    if(x>10*y){
        cout<<"YES\n";}
    else{
        cout<<"NO\n";}
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    follow();
	}
	return 0;
}
