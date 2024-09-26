#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;
int main()
{
    int n = 424;
    cpp_int fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;

    cout << fact << endl;
    return 0;
}