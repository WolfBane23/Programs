#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b,c;
	cin>>n;
	while(n--){
	    cin>>a>>b>>c;
	    if(a>b || c>b){
	        cout<<"no"<<endl;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
