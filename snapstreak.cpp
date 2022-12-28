/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void streak(){
    int n,count=0;;
    int a[20],b[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];}
    for(int j=0;j<n;j++){
        cin>>b[j];}
    for(int k=0;k<n;k++){
        if(a[k]!=0 && b[k]!=0){
            count++; }
        
    }
    cout<<count;
}
int main()
{   int t;
    cin>>t;
    while(t--){
    streak();}

    return 0;
}