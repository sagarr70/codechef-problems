# codechef-problems
## IN THIS REPOSITORY I AM KEEPING TRACK OF MY SOLUTION TO CODECHEF PROBLEMS.

### LIST OF PROBLEMS I HAVE SOLVED TILL NOW
* ATM
* ARSELL
* COVID PANDEMIC AND LONG QUEUE
* ADD TWO NUMBERS
* FAST CIN AND COUT


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
#CARSELL
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

