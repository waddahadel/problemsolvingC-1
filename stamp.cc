// Output file will be a.out in both cases
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define debug(x) \
    (cerr << #x << ": " << (x) << endl);

int main()
{
    int n;
    cin >> n;

    vector<int> stamps(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> stamps[i];
    }

    vector<int> sortedStamps = stamps;
    sort(sortedStamps.begin(), sortedStamps.end());

    int mismatches = 0;
    pair<int, int> mismatchIndices;
    for (int i = 0; i < n; ++i)
    {
        if (stamps[i] != sortedStamps[i])
        {
            ++mismatches;
            if (mismatches == 1)
            {
                mismatchIndices.first = i + 1;
            }
            else if (mismatches == 2)
            {
                mismatchIndices.second = i + 1;
            }
            else
            {
                break;
            }
        }
    }

    if (mismatches == 0)
    {
        cout << "already sorted" << endl;
    }
    else if (mismatches == 2)
    {
        cout << mismatchIndices.first << " " << mismatchIndices.second << endl;
    }
    else
    {
        cout << "impossible" << endl;
    }

    return 0;
}