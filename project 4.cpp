//
#include <iostream>
#include <string>

using namespace std;

int main()
{  int  x = 20;
    int* ptr = &x;

    int numArray[] = {1,2,3,4,5,6,7,8,9};

   cout << x <<endl;
    cout << ptr <<endl;
    cout << *ptr <<endl;


    return 0;
}