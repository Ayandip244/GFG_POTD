class Solution {
  public:
    string addString(string& s1, string& s2) {
        int i = s1.length() - 1;
        int j = s2.length() - 1;
        int c = 0;
        string result = "";
        while (i >= 0 || j >= 0 || c > 0) {
            int sum = c;
            if (i >= 0) sum += (s1[i] - '0');
            if (j >= 0) sum += (s2[j] - '0');
            result.push_back(sum % 10 + '0');
            c = sum / 10;
            i--; j--;
        }
        while (!result.empty() && result.back() == '0') {
            result.pop_back();
        }
        reverse(result.begin(), result.end());
        return result;
    }
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        string s1 = "";
        string s2 = "";
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) {
                s1.push_back(arr[i] + '0');
            } else {
                s2.push_back(arr[i] + '0');
            }
        }
        return addString(s1, s2);
    }
};
