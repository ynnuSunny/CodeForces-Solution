#include<stdio.h>

int main(){

 int n,i;
 scanf("%d",&n);

 for(i=0;i<n;i++){
    long long int p,a,b,c,v1,v2,v3,min;
    scanf("%lld%lld%lld%lld",&p,&a,&b,&c);
    v1= p/a;
    if(p%a!=0)v1++;
    v2= p/b;
    if(p%b!=0)v2++;
    v3 = p/c;
    if(p%c!=0)v3++;

    a*=v1;
    b*=v2;
    c*=v3;
    v1= a-p;
    v2= b-p;
    v3= c-p;

    if(v1<=v2 && v1<=v3)min=v1;
    else if(v2<=v1 && v2<=v3)min=v2;
    else if(v3<=v1 && v3<=v3)min=v3;

    printf("%lld\n",min);


 }

return 0;}
