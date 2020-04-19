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