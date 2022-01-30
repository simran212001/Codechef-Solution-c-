#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float salary = 0, basic, hra, da;
        cin >> basic;
        if (basic < 1500)
        {
            hra = (0.1 * basic);
            da = (0.90 * basic);
        }
        else
        {
            hra = 500;
            da = (0.98 * basic);
        }
        salary += (basic + hra + da);
        // cout << fixed << setprecision(2) << salary << "\n";
        cout<<fixed<<setprecision(2)<<salary<<endl;
    }
  return 0;
}