#include <iostream>

#define test_t t1
#include "t1.h"
#undef test_t

#define test_t t2
#include "t2.h"
#undef test_t

using namespace std;

int main()
{
    cout << getz() << '\n';
    cout << "Hello World!" << endl;
    return 0;
}
