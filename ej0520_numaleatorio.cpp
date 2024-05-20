#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
    int a,t;
    t = time(NULL);
    srand(t);
    a=rand()%3+1;  
    cout << a;  
    return 0;
}