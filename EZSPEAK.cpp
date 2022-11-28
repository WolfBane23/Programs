#include <iostream>
using namespace std;

int main() {
	
	int t, n, count, j;
	cin >> t;
	while(t--)
	{   
    	bool ok=false;
    	count=0;
    	int N;cin>>N;
        string a;
        cin>>a;
       	for(int i=0; i<N;i++)
        {
       
           if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
           {
           count=0;
               
           }
           else
           {
               count++;
           }
        //   cout<<cout=
	        if(count>=4)
	       {
	          //cout<<"NO"<<endl;
	          ok=true;
	          break;
	       }
       
       
        }
        
    if(ok)cout<<"NO\n";
    else cout<<"YES"<<endl;
    
    }
	        
	        
	    
	    
	
	
	
	return 0;
}
