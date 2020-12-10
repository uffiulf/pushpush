#include <iostream>
#include "string"

int main() {
    std::string str1;
    std::string str2;

    std::cout << "Enter string" << std::endl;
    std::getline(std::cin,str1);
    std::cout << "One more" << std::endl;
    std::getline(std::cin,str2);
    //enter two strings

    if (str1 == str2) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }



    
    if(str1.find(str2) != std::string::npos)
    {
        std::cout << "Last string is substring of first string"   << std::endl;
    }

    else if (str2.find(str1) != std::string::npos) {
            std::cout << "First string is substring of last string" << std::endl;
        }
        else{std::cout << "There are no substrings" << std::endl;}



        return 0;
}



