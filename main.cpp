#include "Test.h"
#include <iostream>
using namespace std;

bool its_even(int n)
{
    if ( n % 2 == 0)
        return true;
    else
        return false;
}



bool numberExists(vector<int> ordered_numbers, int x){
    int lenght = ordered_numbers.size();
    int lenghto = ordered_numbers.size()+1;
    bool exist = false;

    if(its_even(x)){

        if(x==ordered_numbers[lenght/2]){
            exist= true;
        }
        if(x < ordered_numbers[lenght/2]){
            for(int i =0; i < (lenght/2);i++ ){
                    if(ordered_numbers[i] == x){
                    exist = true;
                    }

                }
            }else{
            for(int i =(lenght/2); i < lenght ;i++ ){
                if(ordered_numbers[i] == x){
                    exist = true;
                    }

                }

        }
    }else{
        if(x==ordered_numbers[lenghto/2]){
            exist= true;
        }
        if(x<ordered_numbers[(lenghto)/2]){
            for(int i =0; i < ((lenghto)/2);i++ ){
                if(ordered_numbers[i] == x){
                    exist = true;
                    }
                }

        }else{
            for(int i =((lenghto)/2); i < lenght ;i++ ){
                if(ordered_numbers[i] == x){
                    exist = true;
                    }
                }
        }
    }


    return exist;

}

int main ()
{
    test();
    return 0;
}
