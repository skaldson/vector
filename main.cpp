#include "classVector.hpp"

int main()
{
    MyVector vec;
    int counter=0;
    
    while((counter++)!=30)
        vec.push(counter);
    
    vec.printVector();

    keepWindowOpen();
    return 0;
}

