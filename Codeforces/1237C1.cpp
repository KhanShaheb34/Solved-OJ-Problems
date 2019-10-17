#include <bits/stdc++.h>
using namespace std;
 
struct Point {
    long long x, y, z;
    bool d;
};
 
int main()
{
	long long n, x, y, z;
	vector<Point> points;
	cin >> n;
	for(int i=1; i<=n; i++) {
        cin >> x >> y >> z;
        Point P;
        P.x = x;
        P.y = y;
        P.z = z;
        P.d = false;
        points.push_back(P);
	}
 
	for(int i=0; i<n; i++) {
        if(points[i].d) continue;
        double mind = DBL_MAX;
        int pos;
        for(int j=0; j<n; j++) {
            if(i==j) continue;
            if(points[j].d) continue;
            double dist = sqrt((points[i].x-points[j].x) * (points[i].x-points[j].x) + (points[i].y-points[j].y) * (points[i].y-points[j].y) + (points[i].z-points[j].z) * (points[i].z-points[j].z));
            if(mind > dist)
            {
                mind = dist;
                pos = j;
            }
        }
        points[i].d = true;
        points[pos].d = true;
        cout << i+1 << " " << pos+1 << endl;
	}
	return 0;
}
