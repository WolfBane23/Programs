#include <bits/stdc++.h>
using namespace std;

int findNumber(string str, int n){
    int result = 0;
    
    for(int i = n - 1;i>=0;i--){
        if(str[i] == '1'){
            int term = pow(2, i);
            result = result + term;
        }
    }
    
    return result;
}

bool isPower(int n){
    int number = n;
    for(int i = 0;i<100;i++){
        for(int j = 0;j<100;j++){
            for(int k = 0;k<100;k++){
                int key = pow(2, i) + pow(2, j) + pow(2, k);
                if(key == n){
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
	// your code goes here
	string str;
	int test;
	int n;
	cin>>test;
	for(int i = 0;i<test;i++){
	    cin>>n;
	    cin>>str;
	    int number = findNumber(str, n);
	   // cout<<number<<endl;
	    if(isPower(number)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
