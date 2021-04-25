#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n;
     cin>>n;

     while (n--)
     {
         char a[21],b[21];
         cin>>a>>b;
         int value=0,max=0,lenA = strlen(a);
         int lenB = strlen(b);

         for(int i=0;i<lenA;i++){
             int index = i;
             value=0;
             for(int j=0;j<lenB;j++){
               //  cout<<"b = "<<b[j]<<" a = "<<a[index];
                 if(b[j] == a[index]){
                     index++;
                     value++;
                 }
                 else if(index!=i){
                     index=i;
                     j -=value;
                     if(value>max){
                        max = value;
                     }
                      value=0;
                 }    
              }
                if(value>max){
                  max = value;
                  }
         }
         
         value = (lenA-max) + (lenB-max);
         cout<<value<<endl;
     }
     

}