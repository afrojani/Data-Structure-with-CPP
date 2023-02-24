#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a;
    a.resize(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ans++;
            continue;
        }
        /*i er value jokhn zero, tar ager value -1,ja array er baire.taio ei comparison rekhe dile
        undefined value asbe,jate hoy program crash korbe,ba garbage value dibe,ba thikthak run o korte pare.
        tai undefined value jate na ashe sevabe code likhte hobe*/
        if (a[i] != a[i - 1])
        {
            ans++;
        }
    }

    cout << ans << "\n";
    // endl dileo slow kaj kore,tai \n deyai better.
    return 0;
}