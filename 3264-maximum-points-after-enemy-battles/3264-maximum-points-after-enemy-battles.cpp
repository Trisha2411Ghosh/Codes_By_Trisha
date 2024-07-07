class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        int num = enemyEnergies.size();
        long long total = 0;
        sort(enemyEnergies.begin(), enemyEnergies.end());
        int start = 0, end = num - 1;
        while (start <= end) {
            if (enemyEnergies[start] > currentEnergy) {
                if (total == 0) {
                    return 0;
                }
                while (currentEnergy < enemyEnergies[start]) {
                    currentEnergy += enemyEnergies[end];
                    end--;
                }
            } else {
                int inc = currentEnergy / enemyEnergies[start];
                currentEnergy %= enemyEnergies[start];
                total += inc;
            }
        }
        return total;
    }
};