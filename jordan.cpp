
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));
    if (rand() > (RAND_MAX >> 1))
        goto fail;
        goto fail;

    if (rand() < (RAND_MAX >> 1))
        return 0;

    fail:
        return -1;
}

// scan-build -enable-checker alpha.deadcode.UnreachableCode clang++ -g jordan.cpp -o jordan