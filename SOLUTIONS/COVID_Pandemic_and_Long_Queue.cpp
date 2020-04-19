#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n]={-1};
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for (int i = 0; i < n; i++)
        {    
            if(a[i]==1)
            {   int k=i-1;
                int m=i+1;
                int count =0;
                while(count<5&&(m<n||k>=0))
                {
                    if(a[k]==1||a[m]==1)
                    { flag=1;
                      cout<<"NO"<<endl;
                      break;
                    }
                    else
                    {
                        k--;m++;
                        count++;
                    }
                    
                }

             }
             if (flag==1)
             {
                 break;
             }

             }
             if(flag!=1)
             {
                 cout<<"YES"<<endl;
             }
                
            
    }


    return 0;
}