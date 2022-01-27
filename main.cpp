#include <iostream>

int add(int a, int b)
{
    return a+b;
}

int minus(int a, int b)
{
    return a-b;
}

void printMyName(char* name)
{
    printf("Hi ! My mane is %s\n", name);
}

int main(int argc, char** argv)
{
    std::cout << "Hello World" << std::endl;
    printMyName("Matsushita");
    
    return 0;
}