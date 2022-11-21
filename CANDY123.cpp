#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int lmk=1, bob=2;
	    while(true){
	        if(a-lmk>=0){
	            a-=lmk;
	            lmk+=2;
	        }
	        else{
	            cout<<"Bob"<<endl;
	            break;
	        }
	        if(b-bob>=0){
	            b-=bob;
	            bob+=2;
	        }
	        else{
	            cout<<"Limak"<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
