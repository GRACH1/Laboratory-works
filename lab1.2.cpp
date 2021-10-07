#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    double r, p, q, r1;
    cout<<"r= "; cin>>r;
    cout<<"p= "; cin>>p;
    cout<<"q= "; cin>>q;
    r1=p*q/(4*sqrt(p*p+q*q));
    if (r1>=r)
        cout << "Mozhet";
    else
        cout << "Ne mozhet";
    return 0;
}