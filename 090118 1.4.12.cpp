#include<cstdio>
using namespace std;
int main()
{ double a,b,n;
  scanf("%lf",&n);
  a=n/3+27+23;b=n/1.2;
  if(a<b) printf("Bike\n");
  if(a==b) printf("All\n");
  if(a>b) printf("Walk\n");
  return 0;
}
