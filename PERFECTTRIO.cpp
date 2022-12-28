#include <iostream>
using namespace std;
void age(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==(b+c) || b==(a+c) || c==(a+b)){
        cout<<"YES\n";}
    else{
        cout<<"NO\n";}
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    age();
	}
	return 0;
}
