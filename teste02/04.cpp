#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

main()
{
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
    cout << x << ",";
    cout << y << ",";
    cout << *p << endl;
}