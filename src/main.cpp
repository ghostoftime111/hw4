#include <iostream>
#include <gtest/gtest.h>
#include "unique_ptr.h"
#include "shared_ptr.h"
#include <memory>

int main(int argc, char **argv)
{
    if (false) // make false to run unit-tests
    {
        UniquePtr<double> ptr{new double{1.567}};
        if(ptr)
        {
        }

        ptr.reset();
        if(ptr) 
        {
            
        }

    }
    else
    {
        ::testing::InitGoogleTest(&argc, argv);
        std::cout << "RUNNING TESTS ..." << std::endl;
        int ret{RUN_ALL_TESTS()};
        if (!ret)
            std::cout << "<<<SUCCESS>>>" << std::endl;
        else
            std::cout << "FAILED" << std::endl;
    }
    return 0;   
}