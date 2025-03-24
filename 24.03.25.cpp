#include <iostream>
using namespace std;
float sum(int n1,float n2){
    cout <<"введите целое число:"<<n1<<endl;
    cout <<"введите действительное число:"<<n2<<endl;
    return(n1+n2);
}
int main() {
    int num1;
    double num2;
    double s,a,b;
    cin>>"1 число:">>num1;
    cin>>"2 число:">>num2;
    s=sum(num1,num2);
    cout<<"сумма:"<<s<<endl;
    a=num1*num2;
    cout<<"умножение:"<<a<<endl;
    b=num1/num2;
    cout<<"деление:"<<b<<endl;
    return 0;
}
