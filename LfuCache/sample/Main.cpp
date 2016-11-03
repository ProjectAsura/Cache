#include "../include/LfuCache.h"
#include <cstdio>


void printCache(LfuCache<int>& cache)
{
    int array[5];
    memset( array, -1, sizeof(int) * 5);

    cache.Copy(array, 0);

    for( auto i=0; i<5; ++i)
    { printf_s( "%d: value = %d\n", i, array[i]); }
}

void main()
{
    LfuCache<int> cache(5);

    cache.Add(1);
    cache.Add(2);
    cache.Add(3);
    cache.Add(4);
    cache.Add(5);

    printCache(cache);

    printf("\n");
    printf("add 2\n");
    cache.Add(2);
    printCache(cache);

    printf("\n");
    printf("add 4\n");
    cache.Add(4);
    printCache(cache);

    printf("\n");
    printf("add 6\n");
    cache.Add(6);
    printCache(cache);

    printf("\n");
    printf("add 8\n");
    cache.Add(8);
    printCache(cache);

    printf("\n");
    printf("add 9\n");
    cache.Add(9);
    printCache(cache);

    printf("\n");
    printf("add 2\n");
    cache.Add(2);
    printCache(cache);

    printf("\n");
    printf("add 10\n");
    cache.Add(10);
    printCache(cache);

    printf("\n");
    printf("del 10\n");
    cache.Remove(10);
    printCache(cache);

    printf("\n");
    printf("del 2\n");
    cache.Remove(2);
    printCache(cache);

    printf("\n");
    printf("del 8\n");
    cache.Remove(8);
    printCache(cache);

    printf("\n");
    printf("clear\n");
    cache.Clear();
    printCache(cache);
}
