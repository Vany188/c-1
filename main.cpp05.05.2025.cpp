#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Введите число: ";
    int k;
    cin >> k;

    vector<short> a, b, s;
    a.push_back(0);
    b.push_back(1);
    s.push_back(1);

    for(int j = 0; j < k - 2; ++j)
    {
        for(int n = 0; n < s.size(); ++n)
        {
            s[n] = a[n] + b[n];
        }

        for(int n{}; n < s.size(); ++n)
        {
            if(s[n] >= 10 && n < s.size() - 1)
            {
                s[n + 1] += 1;
                s[n] -= 10;
            }

            if(s[n] >= 10 && n == s.size() - 1)
            {
                s.push_back(s[n] / 10);
                s[n] -= 10;
                a.push_back(0);
                b.push_back(0);
            }
        }

        for(int n = s.size() - 1; n >= 0; --n)
        {
            a[n] = b[n];
            b[n] = s[n];
        }
    }

    std::cout << "Числа Фибоначчи под номером: " << k << " равно " << " ";

    for(int n = s.size() - 1; n >= 0; --n)
    {
        std::cout << s[n];
    }
    std::cout << std::endl;
}
