#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float D,x1,x2;
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    D=pow(b,2)-4*a*c;
    cout<<D<<"\t"<<pow(D,0.5)<<endl;
    if(a!=0)
    {
        if(D>0)
        {
            x1=(-b-pow(D,0.5))/(2*a);
            x2=(-b+pow(D,0.5))/(2*a);
            cout<<"x1="<<x1<<endl;
            cout<<"x2="<<x2<<endl;
        }
        if(D==0)
        {
            x1=-b/(2*a);
            x2=x1;
            cout<<"x1="<<x1<<endl;
            cout<<"x2="<<x2<<endl;
        }
        if(D<0)
        {
            D=-D;
            cout<<"x1="<<-b/(2*a)<<"+"<<pow(D,0.5)/(2*a)<<endl;
            cout<<"x2="<<-b/(2*a)<<"-"<<pow(D,0.5)/(2*a)<<endl;
        }
    }
    if(a==0&&b!=0&&c!=0)
    {
        cout<<"x="<<-c/b<<endl;

    }
    if(a==0&&b!=0&&c!=0)
    {
        cout<<"нет реш"<<endl;
    }

    return 0;
}
