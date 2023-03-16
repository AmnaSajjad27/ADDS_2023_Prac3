#include "Reverser.h"

#include <string>

// helper function to enable tail recursion 
int helper_numbers(int numbers, int accum)
{
    accum = accum*10 + numbers % 10;
    // base case
    if (numbers < 10)
    {
        return accum;
    }
    return helper_numbers(numbers/10, accum);
}

int Reverser::reverseDigit(int numbers)
{
    if (numbers < 0)
    {
        return -1;
    }
    return helper_numbers(numbers,0);
}

// helper function 
std::string helper_string (std::string characters, std::string accum, int index)
{
    // base case
    if (index < 0)
    {
        return accum;
    }
    // using at becuase it will help not get index out of bound 
    accum = accum + characters.at(index);

    return helper_string(characters, accum, --index);
}

std::string Reverser::reverseString(std::string characters)
{
    return helper_string(characters, "",(characters.length()-1));
}