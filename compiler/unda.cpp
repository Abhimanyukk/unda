#include <iostream>

#include "unda.hpp"
std::string dist_loc = "/usr/local/bin/undampori/";

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        LOGE("No input files");
        return -1;
    }

    FILE *ptr;
    char ch;
    ptr = fopen(argv[1], "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }

    char statement[100];
    int index = 0;

    while (fgets(statement, 100, ptr))
    {
        std::string statement_str(statement);
        std::string dd = dist_loc + statement_str;

        system(dd.c_str());
    }
    fclose(ptr);

    return 0;
}
