#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while (n--){
	    int n,m;
	    cin>>n>>m;
	    if(n%m==0){
	        if((n/m)%2==0){
	            cout<<"yes"<<endl;
	        }
	        else {
	            cout<<"no"<<endl;
	        }
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
