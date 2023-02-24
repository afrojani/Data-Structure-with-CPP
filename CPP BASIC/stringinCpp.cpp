#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "I am eating rice.";
    string s1 = "I am cooking dal";
    cout << s.size() << endl;
    string s3 = s + s1;
    cout << s3 << "\n";
    s.pop_back(); /*ei function diye string er pechon dik theke ekta kore character delete kore deya jay.*/
    cout << s << "\n";

    string s2 = "abcdef";
    s2.erase(s2.begin()); /*ei function diye string er jekono index er character delete kore deya jay*/
    cout << s2 << "\n";
    s2.erase(s2.begin() + 1); /*prothom ta diye a delte hiye bcdef thake.r eta diye 1 index e pore c thake.
    seta delete hoy*/
    cout << s2 << "\n";
    return 0;
}