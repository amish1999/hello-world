#include <iostream>
#include <map>
#include <vector>
    using namespace std;
 
    int main()
    {
    	int T;
    	cin>>T;
    	while(T--)
    	{
    		int N;
    		cin>>N;
    		int tab[N],x=0;
    		for (int i = 0; i < N; ++i)
    		{
    			cin>>tab[i];
    		}
    		int i=0;
    		int j=0,r=0;
    		// include code update here
            while(i<N)
    {
    x^=tab[i];
    if(x==0)
    {
    r+=i-j;
    j++;
    i=j+1;
 
    x=tab[j];
    }
    else
    {
    i++;
            
            
            //
 
    		cout<<r<<endl;
    	}
    	return 0;
    }
