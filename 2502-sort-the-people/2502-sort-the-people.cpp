class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        vector<pair<int, string>> people(n);
        
        for (int i = 0; i < n; i++) {
            people[i] = make_pair(heights[i], names[i]);
        }
        
        sort(people.begin(), people.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first > b.first;
        });
        
        vector<string> sortedNames(n);
        for (int i = 0; i < people.size(); i++) {
            sortedNames[i] = people[i].second;
        }
        
        return sortedNames;
    }
};