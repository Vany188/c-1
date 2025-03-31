#include <iostream>
using namespace std;
float y(int n){
    cout <<"введите количество сторон многоугольника:"<<endl;
    cin >>n;
    cout<<"сумма углов многоугольника:"<<endl;
    return ((n-2)*180);
}
float v(int n1,int n2,int n3){
    cout <<"введите стороны прямоугольника:"<<endl;
    cin >>n1;
    cin >>n2;
    cin >>n3;
    if(n3==0||n2==0||n1==0)
    {
        if(n1*n2!=0||n2*n3!=0||n1*n3!=0)
        {
            cout<<"площадь прямоугольника:"<<endl;
            return(n1*n2+n2*n3+n3*n1);
        }
    }
    cout<<"обьем равен:"<<endl;
    return n1*n2*n3;
}
int main() {
    cout<<"что вы хотити сделать:"<<endl;
    cout<<"1 нахождение площадь прямоугольника"<<endl;
    cout<<"2 нахождение обьема паралепипида"<<endl;
    cout<<"3 сумма углов многоугольника"<<endl;
    cout<<"введите номер пункта"<<endl;
    int n;
    cin>>n;
    if(n==1)
    {
        cout<< "нахождение площади прямоугольника"<<endl;
        int a,b,c;
        cout<<v(a,b,c)<<endl;
    }
    if(n==2)
    {
        cout<< "нахождение обьема паралепипида"<<endl;
        int a,b,c;
        cout<<v(a,b,c)<<endl;
    }
    if(n==3)
    {
        cout<< "сумма углов многоугольника"<<endl;
        int a;
        cout<<y(a)<<endl;
    }
    return 0;
}
