//codechef
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A = 15;
    int C = 17;

    // Check if both A and C are even
    if (A % 2 == 0 && C % 2 == 0)
    {
        cout << "Both A and C are even" << endl;
    }
    // Check if both A and C are odd
    else if (A % 2 != 0 && C % 2 != 0)
    {
        cout << "Both A and C are odd" << endl;
    }
    // Check if one is odd and the other is even
    else
    {
        cout << "A is odd and C is even or vice versa" << endl;
    }

    // Modify the values of A and C
    A = 15;
    C = 18;

    // Check again for the new values
    if (A % 2 == 0 && C % 2 == 0)
    {
        cout << "Both A and C are even" << endl;
    }
    else if (A % 2 != 0 && C % 2 != 0)
    {
        cout << "Both A and C are odd" << endl;
    }
    else
    {
        cout << "A is odd and C is even or vice versa" << endl;
    }

    return 0;
}
