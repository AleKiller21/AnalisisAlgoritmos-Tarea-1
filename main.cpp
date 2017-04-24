#include "Test.h"
#include <iostream>
using namespace std;

bool searchNumber(vector<int> ordered_numbers, int num, int begin, int end)
{
    if(begin > end || end < begin) return false;

    int pos = (end - begin) / 2;
    pos += begin;

    if(ordered_numbers[pos] == num) return true;
    else if(num > ordered_numbers[pos]) return searchNumber(ordered_numbers, num, pos + 1, end);
    else return searchNumber(ordered_numbers, num, begin, pos - 1);
}

bool numberExists(vector<int> ordered_numbers, int x)
{
    if(!ordered_numbers.size()) return false;

    return searchNumber(ordered_numbers, x, 0, ordered_numbers.size() - 1);
}

int main ()
{
    test();
    return 0;
}
