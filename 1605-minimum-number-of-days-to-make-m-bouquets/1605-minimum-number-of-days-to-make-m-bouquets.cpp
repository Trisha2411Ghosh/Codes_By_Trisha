class Solution {
public:

    bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int day) {
        int flowers = 0;
        int bouquets = 0;
        int n=bloomDay.size();
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n=bloomDay.size();
        if(static_cast<long long>(m)*k > n){
            return -1;
        }
        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canMakeBouquets(bloomDay, m, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};