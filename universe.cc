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

    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    unordered_set<long long> numSet;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            long long sum = 42 - numbers[i] - numbers[j];
            if (numSet.count(sum))
            {

                cout << numbers[i] << " " << numbers[j] << " " << sum << endl;
                return 0;
            }
        }
        numSet.insert(numbers[i]);
    }

    cout << "impossible" << endl;

    return 0;
}