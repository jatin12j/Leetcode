class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26, 0);
        string vowels = "aeiou";
        int maxV = 0, maxC = 0;

        for (char ch : s) freq[ch - 'a']++;

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) continue;
            char ch = 'a' + i;
            if (vowels.find(ch) != string::npos)
                maxV = max(maxV, freq[i]);
            else
                maxC = max(maxC, freq[i]);
        }
        return maxV + maxC;
    }
};