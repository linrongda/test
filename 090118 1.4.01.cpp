#include<cstdio>
using namespace std;
int main()
{ long n;
  scanf("%ld",&n);
  if(n>0) printf("positive");
  else if(n==0) printf("zero");
  else printf("negative");
  return 0;
  
}
