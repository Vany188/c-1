#include <iostream>
using namespace std;
const int size{10};
int main() {
    const int rows{4};
    const int columns{4};
    int matrix[rows][columns]
        {
            {23,4,123,52},
            {90,2,13,777},
            {45,-5,3,249},
            {11,12,13,14}
        };
    cout<<"массив"<<endl;
    for(int i{}; i<rows;++i)
    {
        for(int j{}; j<columns;++j)
        {
            cout<< matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
    int row_min{},col_min{},row_max{},col_max{};
    int element_min=matrix[0][0],element_max=matrix[0][0];
    for(int i{}; i<rows;++i)
    {
        for(int j{}; j<columns;++j)
        {
            if(matrix[i][j]<element_min)
            {
                row_min=i;
                col_min=j;
                element_min=matrix[i][j];
            }
            if(matrix[i][j]>element_max)
            {
                row_max=i;
                col_max=j;
                element_max=matrix[i][j];
            }
        }
    }
    cout<<"адрес минимального эллемента:"<<row_min<<". "<<col_min<<endl;
    cout<<"адрес максимального эллемента:"<<row_max<<". "<<col_max<<endl;
    cout<<"минимальный эллемент:"<<matrix[row_min][col_min]<<endl;
    cout<<"максимальный эллемент:"<<matrix[row_max][col_max]<<endl;



    return 0;
}
