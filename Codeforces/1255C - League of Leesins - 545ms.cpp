       /*=============================*/
      /*=== Codeforces - 1255C ======*/
     /*==== League of Leesins ======*/
    /*======== KhanShaheb =========*/
   /*============ C++ ============*/
  /*========== Accepted =========*/
 /*============ 545 ms =========*/
/*=============================*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, start, end;
    cin >> n;
    vector<vector<int> > nums(n+1);
    vector<int> count(n+1, 0);
    set<int> ans;
    
    for (int i = 0; i < n-2; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        count[a]++; count[b]++; count[c]++;
        nums[a].push_back(b);
        nums[a].push_back(c);
        nums[b].push_back(a);
        nums[b].push_back(c);
        nums[c].push_back(a);
        nums[c].push_back(b);
    }

    for(int i = 1; i <= n; i++) {
        if(count[i]==1) {
            start = i;
            break;
        }
    }

    cout << start << " ";
    ans.insert(start);
    count[start]--;

    for(auto x: nums[start]) {
        if(count[x]==2) {
            cout << x << " ";
            ans.insert(x);
            end = x;
            count[x]--;
        }
    }

    while (true) {
        bool found = false;
        for(auto x: nums[start]) {
            if(ans.find(x) == ans.end()) {
                cout << x << " ";
                ans.insert(x);
                start = end;
                end = x;
                found = true;
                count[x]--;
            }
        }
        if(!found) break;
    }
    
    return 0;
}
