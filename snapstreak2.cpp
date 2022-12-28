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
