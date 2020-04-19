#include<bits/stdc++.h>
using namespace std;
#define mod (1000000007)
int main(){
    int t;
    cin>>t;
    while (t!=0)
    {   
        int n;
        cin>>n;
        long long int a[n];
        for (int i = 0; i < n; i++)
            {cin>>a[i];}
        sort(a,a+n);
        int year=0;long long sum=0;
        for (int i = n-1; i >=0; i--)
        {   if (a[i]-year>0)
        {
    
            sum=sum+(a[i]-year);
            sum%=mod;
            year++;
        }
        }
      cout<<sum%1000000007<<endl;
      t--;
    } 

    return 0;
}