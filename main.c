#include <stdio.h>

int main(int argc, char *argv[])
{
    const char *path = (argc > 1) ? argv[1] : ".";
    printf("%s\n", path);
    
    return 0;
}
