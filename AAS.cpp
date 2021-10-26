#include <bits/stdc++.h>
 
#define long long long
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000
#define LONG_MAX_VALUE 0x7fffffffffffffffL
#define LONG_MIN_VALUE 0x8000000000000000L
 
using namespace std;
 
struct Solution
{
    void run()
    {
        int n, m;
        cin >> n >> m;
 
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string b[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
 
        string ans;
        for (int i = 0; i < m; i++)
        {
            int count[26]{0};
            for (int j = 0; j < n; j++)
            {
                count[a[j][i] - 'a']++;
            }
            for (int j = 0; j < n - 1; j++)
            {
                count[b[j][i] - 'a']--;
            }
            for (int j = 0; j < 26; j++)
            {
                if (count[j] != 0)
                {
                    char now = (char)(j + 'a');
                    ans += now;
                }
            }
        }
        cout << ans << endl;
        cout.flush();
    }
};
 
int main()
{
    ios_base::sync_with_stdio(false);
 
    Solution solution = Solution();
 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solution.run();
    }
    return 0;
}
