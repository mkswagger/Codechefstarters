/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

Coding School
1 hour ago
C++ CODE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    map<int, int>mp;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    int temp=1;
	    for(auto it:mp){
	        if(it.second%2!=0){
	            cout<<"NO"<<endl;
	            temp=0;
	            break;
	        }
	    }
	    if(temp)
	    cout<<"YES"<<endl;
	    
	}
	return 0;
}