#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    double a, r1, r2;
    cout<<"a= "; cin>>a;
    cout<<"r1= "; cin>>r1;
    r2=(sqrt(4*r1*r1-a*a))/2;
    cout<<"Max radius= "<<r2;
    return 0;
}