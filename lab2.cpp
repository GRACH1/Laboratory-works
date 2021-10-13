 #include <iostream>

#include <math.h>

int main()
{
   using namespace std;
    double E,lim;
    double e=2.718;
    double n=1;
    cout<<"E= ";
    cin>>E;
    do
    {
        lim=pow(1+1/n, n);
        n+=1;
    }
    while(abs(lim-e)>E);
    cout<<"n= "<<n-1<<endl;
    return 0;
}