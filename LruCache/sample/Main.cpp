#include "../include/LruCache.h"
#include <cstdio>

void printCache(LruCache<int>& cache)
{
    int array[5];
    memset( array, -1, sizeof(int) * 5 );

    cache.Copy(array, 0);

    for( auto i=0; i<5; ++i)
    { printf_s( "%d: value = %d\n", i, array[i]); }
}

void main()
{
    LruCache<int> cache(5);

    cache.Add(1);
    cache.Add(2);
    cache.Add(3);
    cache.Add(4);
    cache.Add(5);

    printCache(cache);

    printf_s("\n");
    printf_s("add\n");
    cache.Add(6);
    printCache(cache);

    printf_s("\n");
    printf_s("add\n");
    cache.Add(7);
    printCache(cache);

    printf_s("\n");
    printf_s("add\n");
    cache.Add(8);
    printCache(cache);

    printf_s("\n");
    printf_s("add\n");
    cache.Add(9);
    printCache(cache);

    printf_s("\n");
    printf_s("add\n");
    cache.Add(10);
    printCache(cache);

    printf_s("\n");
    printf_s("del\n");
    cache.Remove(10);
    printCache(cache);

    printf_s("\n");
    printf_s("del\n");
    cache.Remove(9);
    printCache(cache);

    printf_s("\n");
    printf_s("del\n");
    cache.Remove(8);
    printCache(cache);

    printf_s("\n");
    printf_s("del\n");
    cache.Remove(7);
    printCache(cache);

    printf_s("\n");
    printf_s("del\n");
    cache.Remove(6);
    printCache(cache);

    printf_s("set\n");
    cache.Add(1);
    cache.Add(2);
    cache.Add(3);
    cache.Add(4);
    cache.Add(5);
    printCache(cache);

    printf_s("clear\n");
    cache.Clear();
    printCache(cache);
}

