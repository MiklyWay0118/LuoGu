#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int lis;
    cin >> lis;
    int count=0;
    for (int i = 0; i < 8; i++)
    {
        if (lis%10==1)
        {
            count++;
        }
        lis=lis/10;
    }
    
    cout<<count;
    
    return 0;
}