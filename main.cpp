#include "Test.h"
#include <iostream>
using namespace std;

bool its_odd(int n)
{
    if ( n % 2 == 0)
        return false;
    else
        return true;
}



bool numberExists(vector<int> ordered_numbers, int x)
{

    if(its_odd(ordered_numbers.size()))
    {
        //ordered_numbers
    }
    //std::vector<int> v2(ordered_numbers.begin(), ordered_numbers.begin() + ordered_numbers.size()/2),
      //         v3(ordered_numbers.begin() + ordered_numbers.size()/2, ordered_numbers.end());


    bool exists = false;
    for(int i = 0; i < ordered_numbers.size();i++)
    {

        if(ordered_numbers[i] < x)
            {
                if(i + 4 <= ordered_numbers.size())
                    {
                        i + 4;
                    }
            }else if(ordered_numbers[i] > x)
            {
                if(i -3 >= 0)
                    {
                        i -3;
                    }
            }
        if(ordered_numbers[i] == x)
            {
                exists = true;
            }
    }
    return exists;
}

int main ()
{
    test();
    return 0;
}
