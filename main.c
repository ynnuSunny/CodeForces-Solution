#include<stdio.h>
#include<string.h>

int main(){

  int n,i;
  scanf("%d ",&n);

  for(i=0;i<n;i++){
    int num,a=0,b=0,c=0,max=0,fast=0;
    char str[1000],chr,brak,brak_1;
    scanf("%s",str);
    num = strlen(str);
    for(int j=0;j<num;j++){
        if(str[j]=='A')a++;
        else if(str[j]=='B')b++;
        else if(str[j]=='C')c++;

    }

    if(a>=b&&a>=c){max=a;chr='A';}
    else if(b>=a&&b>=c){max=b;chr='B';}
    else if(c>=a&&c>=b){max=c;chr='C';}

   if(max==num/2){
        int k=0;
          //str[0]='(';
         if(str[0]==chr){brak='(';brak_1=')';}
         else{ brak=')';brak_1='(';}
        for(int j=0;j<num;j++){
            if(str[j]==chr)str[j]=brak;
            else str[j]=brak_1;
        }
        for(int j=0;j<num;j++){
            if(fast<0)break;

            if(str[j]=='(')fast++;
            else fast--;

            //printf("%d\n",fast);
        }

        if(fast==0)printf("Yes\n");
        else printf("No\n");
        //printf("%s\n",str);


    }
    else printf("No\n");


  }

}
