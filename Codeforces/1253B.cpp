/*===========================*/
/*=== Codeforces - 1253B ===*/
/*===== Silly Mistake =====*/
/*====== KhanShaheb ======*/
/*========= C++ =========*/
/*======================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int occur[1000009] = {0}, in = 0, nums[n];
    for (int  it = 0; it < n; it++)
    {
        cin >> nums[it];
    }

    bool dead = false;
    int ans = 0, events = 0;
    vector<int> breaks;
    set<int> ocpd;

    for (int  it = 0; it < n; it++)
    {
        int i = nums[it];
        if(i > 0)
        {
            if(occur[i] % 2== 0) 
            {
                occur[i]++;
                in++;
                if(ocpd.find(i) != ocpd.end()) {
                    dead = true;
                    break;
                }
                ocpd.insert(i);
            }
            else
            {
                dead = true;
                break;
            }
        }
        else
        {
            i *= -1;
            if(occur[i] % 2 == 1) 
            {
                occur[i]++;
                in--;
            }
            else
            {
                dead = true;
                break;
            }
        }

        if(in == 0) {
            ans++;
            breaks.push_back(it - events + 1);
            events += it - events + 1;
            ocpd.clear();
        }
    }


    if(dead || in != 0) cout << "-1" << endl;
    else
    {
        cout << ans << endl;
        for (int it = 0; it < breaks.size(); it++)
        {
            cout << breaks[it] << " ";
        }
        cout << endl;
        
    }
    return 0;
}
