#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <map>

int main()
{

    std::map <std::string, std::vector<std::string>> m;

    std::string name, course, character;

    std::cout << "Enter name: " << std::endl;
    while(std::cin >> name)
    {
        if(name.compare("stop") == 0)
        {
            break;
        }
        else
        {
            m[name];
            std::cout << "enter course name" << std::endl;
            while(std::cin >> course >> character)
            {
                if(course.compare("stop") == 0)
                    break;
                m[name].push_back(course);
                m[name].push_back(character);
            }
        }
    }

    for (auto it=m.begin(); it!=m.end(); ++it)
    {
        std::cout << it->first << std::endl;
    }
    return 0;
}