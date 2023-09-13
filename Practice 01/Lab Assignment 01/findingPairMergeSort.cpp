#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSort(vector<int> a)
{
    if (a.size() <= 1)
        return a;

    int mid = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int> sorted_b = mergeSort(b);
    vector<int> sorted_c = mergeSort(c);

    vector<int> sorted_a;
    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}

int mergeSortAndCount(vector<int> a, int k)
{
    vector<int> sorted_a = mergeSort(a);
    int count = 0;
    int l = 0;
    int r = sorted_a.size() - 1;
    int i = l;
    int j = r;

    while (i < j)
    {

        if (sorted_a[i] + sorted_a[j] > k)
        {
            j--;
            continue;
        }
        else if (sorted_a[i] + sorted_a[j] < k)
        {
            i++;
            continue;
        }
        else if (sorted_a[i] + sorted_a[j] == k)
        {
            count++;
            j--;
        }
    }

    for (int x = 0; x < sorted_a.size(); x++)
    {
        cout << sorted_a[x] << " ";
    }
    cout << "\n";
    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(input);
    }
    int count = mergeSortAndCount(a, k);
    cout << count;

    return 0;
}