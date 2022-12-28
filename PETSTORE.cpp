/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void pets(){
    int n,al=0,bo=0,count=0;
    int a[20];
    cin>>n;
    for(int k=0;k<n;k++){
        cin>>a[k];}
    for(int i=0;i<n;i++){
        /*if(i==0){al=0;
        bo+=a[i];}*/
        //else{
        for(int j=i+1;j<n;j++){
            
        al+=a[i];
        bo+=a[j];
        cout<<al<<bo<<endl;
        if(al==bo){
            count=0; }
        else{
            count++;}}   } //}
    if(count==0){cout<<"YES";}
    else{cout<<"NO";}
}

int main() {
    pets();
	
	return 0;
}