#include <iostream>
#include <vector>
#include <numeric>  
#include <algorithm> 

using namespace std;

bool isPossible(vector<int>& boards, int n, int k, long long maxTime) {
    int painters = 1;
    long long currentTime = 0;

    for (int i = 0; i < n; i++) {
        if (currentTime + boards[i] > maxTime) {
            painters++;
            currentTime = boards[i];
            if (painters > k) {
                return false;
            }
        } else {
            currentTime += boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int>& boards, int k) {
    int n = boards.size();
    long long low = *max_element(boards.begin(), boards.end()); 
    long long high = accumulate(boards.begin(), boards.end(), 0LL); 

    while (low < high) {
        long long mid = low + (high - low) / 2;
        if (isPossible(boards, n, k, mid)) {
            high = mid; 
        } else {
            low = mid + 1; 
        }
    }

    return low;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> boards(n);
    
    for (int i = 0; i < n; i++) {
        cin >> boards[i];
    }

    cout << findLargestMinDistance(boards, k) << endl;
    return 0;
}
