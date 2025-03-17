#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a,b,c,a1,b1,c1;
    cout<<"стороны треугольника"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    a1=pow(a,2);
    b1=pow(b,2);
    c1=pow(c,2);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        if(a1+b1==c1||b1+c1==a1||c1+a1==b1)
        {
            cout<<"прямо уг"<<endl;
        }

        else{
            if(a1+b1<c1||b1+c1<a1|c1+a1<b1)
            {
                cout<<"тупо уг"<<endl;
            }
        }

        if(a1+b1>c1&&b1+c1>a1&&c1+a1>b1)
        {
            cout<<"остро уг"<<endl;
        }
        if(a1==b1&&b1==c1)
        {
            cout<<"равносторонний"<<endl;
        }
        else
        {
            if(a1==b1||b1==c1||c1==a1)
            {
                cout<<"равнобедренный"<<endl;
            }
        }
    }
    else{
        cout<<"несущ"<<endl;
    }
    return 0;
}
