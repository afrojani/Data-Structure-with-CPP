
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v(5, 2);
//     for (int i = 0; i < 5 - 2; i++)
//         v[i] = i;
//     for (int i = 0; i < 5; i++)
//         cout << v[i] << " ";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5, 0);
    /*
    The line vector<int> v(5, 0); creates a vector v of integers with an initial size of 5 elements,
    and each element is initialized to 0.
    The constructor used here is the one that takes the initial size and initial value as arguments.
    */
    v[1] = 5;
    cout << v.front() << '\n';
    /*
    The line cout << v.front() << '\n';
    prints the value of the first element in the vector using the front() member function.
    In this case, it will output 0 since the first element was initialized to 0.
    */
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v(5, 0);
//     v.resize(10, 10);
//     cout << v[7] << '\n';
//     return 0;
// }