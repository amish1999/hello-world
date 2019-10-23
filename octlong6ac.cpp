#include <bits/stdc++.h>
using namespace std;
#define ft first
#define sd second
long long int form_sum(int f,string str)
{
  long long int len=str.length(),cnt=0;
 for(int i=0;i<len;i++) {
   if(int(str[i])>=65)
    cnt+=(int(str[i])-55)*pow(f,len-i-1);
 if(int(str[i])<=57)
   cnt+=(int(str[i])-48)*pow(f,len-i-1);
 }
return cnt; }

int main() {
//fast io
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);

   int test;
    cin>>test;
    while(test--){
     int n,b;
	 long long int c,d,temp;
  string y; map <long long int,int> res;
    cin>>n;
  temp=n;
   while(temp--) {
    cin>>b>>y;
     if(b!=-1){
      c=form_sum(b,y);
  if(c>=0)
    res[c]++;
  }
 if(b==-1) {
    int largest=1;
  for(int i=0;i<y.length();i++) {
    if(int(y[i])>=65)
    {
  d=int(y[i])-55;
    if(d>largest)
     largest=d;
  }
    if(int(y[i])<=57) {
         d=int(y[i])-48;
    if(d>largest)
     largest=d;
  }
}
  for(int i=largest+1;i<=36;i++) {
    c=form_sum(i,y);
     if(c>=0)
      res[c]++;
    if(y.length()==1)
     break; }
  }
}
  long long int answ=pow(10,15);
   for(auto i=res.begin();i!=res.end();i++) {
            if((i->sd)>=n)
            {
                if((i->ft)<answ)
                answ=i->ft;
            }
        }
        if(answ==pow(10,15)||answ>pow(10,12))
        cout<<"-1"<<"\n";
        else 
         cout<<answ<<"\n"; // outpt minimum value
    }
	return 0;
}
