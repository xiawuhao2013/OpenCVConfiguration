#include<opencv2/core.hpp>

#include<iostream>

void PrintCmdParam (int argc, char** argv)
{
    int argvIndex = 0;
    std::cout << "command parameters member size: " << argc << std::endl;
    do
    {
        std::cout << argvIndex << ":\t" << argv[argvIndex] << std::endl;
    } while ( ++argvIndex < argc );

    return;
}

int main (int argc, char** argv)
{
    cv::Mat mat;
    PrintCmdParam (argc, argv);

    system ("pause");
    return 0;
}