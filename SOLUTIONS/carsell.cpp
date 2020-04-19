#include<bits/stdc++.h>
using namespace std;
int carsell(int a[],int size,long long int ans)
{
    if (size==0)
    {
        return ans%1000000007;
    }
   ans=(ans+a[size-1])%1000000007;
    for (int i = 0; i <size; i++)
    {   if (a[i]>0)
    {
        a[i]=a[i]-1;
    }
    }
    carsell(a,size-1,ans);

    
}
int main(){
    int T=1;
    cin>>T;
    T=T%26;
    long long int ans[T];
    for(int i=0;i <T;i++)
    {
        int n=1;
        cin>>n;
        n=n%100000;  
        
        int a[n]={0};
        for (int j = 0; j < n; j++)
        {
          cin>>a[j];
          a[j]=a[j]%1000000007;    
        }
      sort(a,a+n);
      ans[i]=carsell(a,n,0);
    }
    for (int i = 0; i < T; i++)
    {
        cout<<ans[i]%1000000007<<endl;
    }
    
    return 0;
}