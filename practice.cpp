#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n,m,i,sum=0,j,temp;
     cin>>n>>m;
     int a[n];
     for(i=0;i<n;i++){
          cin>>a[i];
     }

    for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
         if(a[i]>a[j]){
             temp = a[i];
             a[i] = a[j];
             a[j] = temp;
         }
       }
    }
    
     for(i=0;i<m;i++){
     if(a[i]<=0) {
         if(a[i]<0)a[i]*=(-1);
       sum+=a[i];
     }
     }
     cout<<sum<<endl;
}