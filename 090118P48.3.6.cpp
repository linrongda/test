#include<cstdio>
using namespace std;
int main()
{ float w,s;
  scanf("%f",&w);
  if(w<=20)
  { s=w*1.68;
    printf("%.2f\n",s);
  }
  else { s=w*1.98;
 printf("%.2f\n",s);
  }
  return 0;
}
