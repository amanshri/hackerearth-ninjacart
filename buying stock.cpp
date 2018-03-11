#include <iostream>

using namespace std;

int main() 
{
long long  n,lelo,p=0,i=0,f=0,max=0;
cin>>n;
long long  a[n];
for(long long j=0;j<n;j++)
{
    cin>>a[j];
}

while(a[i]<0)
{
    i++;
}
lelo=i;

for(long long j=i;j<n;j++)
 {   
     p=a[j]+p;
     
     if(max<=p)
     {
         max=p;
         
     }
     if(p<0)
     {  
         p=0;
            
        
        
         lelo=j+1;
        
     }
     
 }
 
 for(long long j=lelo;j<n;j++)
 {
     f=f+a[j];
 }
 
 if(f>=max)
   {  cout<<f;
       
   }
 if(max>f)
 {
     cout<<max;
 }
return 0;
}
