/*
Name: Micah Catbagan
Date: 11/06/2025
Class: ACCT-202
Sem: F25
Reason: For fun
Hours: 2 hours
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

int main () 
{
    int array[6];
    int add;

    for (int i = 0; i < 6; ++i) 
    {
        array[i] = i + 1;
        add = add + array[i];
    }


return add;
}