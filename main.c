#include<stdio.h>

int main(){

  int n;
  scanf("%d",&n);
  while(n--){
    long long int x,y,value=1;
    scanf("%lld%lld",&x,&y);


    if(x==y || (x==2&&y==3) ||(x==3 && y==2) || y==1)value=1;
    else if(x== 1 || x==3 || x==2)value=0;

    if(value==1)printf("YES\n");
    else printf("NO\n");

  }


return 0;}
