#include <iostream>

static void eyth(char *pData)
{
    std::cout << pData << std::endl;
}

int main(int argc, char *argv[])
{
    eyth(argv[1]);

    return 0;
}