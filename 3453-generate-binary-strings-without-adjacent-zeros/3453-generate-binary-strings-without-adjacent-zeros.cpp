class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> result;
        generateValidStrings(n, "", result);
        return result;
    }

private:
    void generateValidStrings(int n, string current, vector<string>& result) {
        if (current.length() == n) {
            result.push_back(current);
            return;
        }
        
        // If the current string is empty or ends with '1', we can add either '0' or '1'
        if (current.empty() || current.back() == '1') {
            generateValidStrings(n, current + '0', result);
            generateValidStrings(n, current + '1', result);
        }
        // If the current string ends with '0', we can only add '1'
        else if (current.back() == '0') {
            generateValidStrings(n, current + '1', result);
        }
    }
};