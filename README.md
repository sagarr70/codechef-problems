
# codechef-problems
[DOWNLOAD REPOSITORY](https://codeload.github.com/sagarr70/codechef-problems/zip/master)

### LIST OF PROBLEMS I HAVE SOLVED TILL NOW
* ATM
* CARSELL
* COVID PANDEMIC AND LONG QUEUE
* ADD TWO NUMBERS
* FAST CIN AND COUT in c++
>THESE CODE ARE IN C++, i have built logic as per my knowledge.
>You should first try youself before loooking into the solutions.
>Star my repository at
[GitHub](https://github.com/sagarr70/codechef-problems)

# ATM
```c++
    #include<iostream>
    #include<iomanip>
    using namespace std;
    int main(){
    int X;float Y;
    cin>>X>>Y;
     if(X%5==0&&Y>X)
    {
        Y=Y-X-0.50;
        cout<<setprecision(2)<<fixed<<Y;
    }
    else
    {
        cout<<setprecision(2)<<fixed<<Y;
    }
    return 0;
    }
```
# CARSELL
```c++
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
```
# COVID PANDEMIC AND LONG QUEUE
```c++
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
             }+
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
```
# ADD TWO NUMBERS
```c++
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    
    return 0;
}
```
# FAST CIN AND COUT IN C++
```c++
#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<endl;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a;
    a.push_back(40);
    cout<<a[0];
    float x=4.00;
    cout<<setprecision(4)<<fixed<<x;
    print(50);
    print("sagar");
    return 0;
}
```

