/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

Coding School
30 minutes ago
C++ CODE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n], b[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    for(int i=0; i<n; i++)
	    cin>>b[i];
	    int temp,ans;
	    temp=ans=0;
	    for(int i=0; i<n; i++){
	        if(a[i]!=0 && b[i]!=0)
	        temp++;
	        else{
	            ans=max(ans,temp);
	            temp=0;
	        }
	    }
	    ans=max(ans,temp);
	    cout<<ans<<endl;
	}
	return 0;
}