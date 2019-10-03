#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    deque<int> ids;
    set<int> uni;
    while(n--) {
        int id;
        cin >> id;
        if(uni.find(id) == uni.end()) {
            uni.insert(id);
            ids.push_front(id);
            if(ids.size()>k) {
                uni.erase(ids.back());
                ids.pop_back();
            }
        }
    }
    cout << ids.size() << endl;
    while(!ids.empty()) {
        cout << ids.front() << " ";
        ids.pop_front();
    }
    return 0;
}
