#include <iostream>
#include <vector>                //Shikhar Srivastava
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i = 1; i < n; i++) {
        if(stalls[i] - lastPos >= mid) {
            cowCount++;
            lastPos = stalls[i];
            if(cowCount == k) {
                return true;
            }
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int s = 0;
    int e = stalls[n - 1];
    int ans = -1;
    int mid;
    while(s <= e) {
        mid = s + (e - s) / 2;
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;
    cout << "The largest minimum distance is: " << aggressiveCows(stalls, k) << endl;
    return 0;
}
