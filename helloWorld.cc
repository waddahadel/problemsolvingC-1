// compile (for debugging): g++ -Wall -Wextra -fsanitize=undefined,address -D_GLIBCXX_DEBUG -g <file>
// compile (as on judge): g++ -x c++ -Wall -O2 -static -pipe <file>
// Output file will be a.out in both cases
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define debug(x) \
    (cerr << #x << ": " << (x) << endl)

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;
        cout << "Hello " << name << "!" << endl;
    }
    return 0;
}
