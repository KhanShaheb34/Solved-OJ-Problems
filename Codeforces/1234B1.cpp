#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    deque<int> ids;
    for(int i=0; i<n; i++) {
        int id;
        cin >> id;
        bool taken = false;
        //ids.push_front(id);
        if(!ids.empty()) {
            deque<int>::iterator it = ids.begin();
            while (it != ids.end())
                if(id==*it++) {
                    taken=true;
                    break;
                }
        }
        if(!taken) {
            ids.push_front(id);
            if(ids.size() > k) ids.pop_back();
        }
    }
    cout << ids.size() << endl;
    deque<int>::iterator it = ids.begin();
    while (it != ids.end())
        cout << *it++ << " ";
    cout << endl;
}
