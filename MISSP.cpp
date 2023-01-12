#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, temp;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],j=0 ;
	    for (int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < n - i - 1; j++){
                if (arr[j] > arr[j + 1]){
                    swap(arr[j], arr[j + 1]);
                }
            }
	    }       
        
        
        
	    while(j<n){
	        if(arr[j]!=arr[j+1]){
	            cout<<arr[j]<<endl;
	            j+=1;
	        }
	        else{
	            j+=2;
	        }
	    }
	    
	}
	return 0;
}
