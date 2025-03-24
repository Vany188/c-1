#include <iostream>
using namespace std;
float sum(float n1,float n2){
    cout <<"введите целое число:"<<endl;
    cin>>n1;
    cout <<"введите действительное число:"<<endl;
    cin>>n2;
    return n1+n2;
}
float rus(float x1,float x2)
{
    cout <<"введите действительное число:"<<endl;
    cin>>x1;
    cout <<"введите действительное число:"<<endl;
    cin>>x2;
    return x1-x2;
}
int main() {
    int num1;
    float num2,num3,num4;
    cout<<sum(num1,num2)<<":сумма"<<endl;
    cout<<rus(num3,num4)<<":разность"<<endl;
    return 0;
}
