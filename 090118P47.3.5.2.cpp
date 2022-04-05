#include<iostream>
using namespace std;
int main()
{ float a,b,c,maxn;
  cin>>a>>b>>c;
  maxn=a;
  if(b>maxn) maxn=b;
  if(c>maxn) maxn=c;
  cout<<maxn<<endl;
  return 0;
}
