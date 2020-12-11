#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>


int main()
{
    std::vector<int> v;
    int num;
    do
    {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> num;
        if(num!=0)
        {
            v.push_back(num);
        }
    } while (num != 0);

    std::sort(v.begin(), v.end(), std::greater<int>());
    int summen = std::accumulate(v.begin(), v.end(), 0);

    std::cout << "Average : " << (float) summen/v.size() << std::endl;

    if(v.size()%2 != 0)
    {
        std::cout << "Median : " << v[v.size()/2] << std::endl;
    }
    else
    {
        int a, b;
        a = v.size()/2 - 1;
        b = v.size()/2;
        float c = (v[a]+v[b])/2.0;
        std::cout << "Median : " << c << std::endl;
    }

    std::cout << "Descending : ";
    for (int i : v)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;






    return 0;
}
