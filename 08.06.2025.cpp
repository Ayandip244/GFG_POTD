class Solution {
    string add(string a, string b) {
    string res = "";
    int carry = 0, i = a.size()-1, j = b.size()-1;
    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0) carry += a[i--] - '0';
      if (j >= 0) carry += b[j--] - '0';
      res = char(carry % 10 + '0') + res;
      carry /= 10;
    }
    return res;
  }

  bool check(string &s, string a, string b, int idx) {
    string sum = add(a, b);
    if (s.substr(idx, sum.size()) != sum) return false;
    if (idx + sum.size() == s.size()) return true;
    return check(s, b, sum, idx + sum.size());
  }
  public:
    bool isSumString(string &s) {
        // code here
        int n = s.size();
        for (int i = 1; i < n; i++) {
          for (int j = 1; i + j < n; j++) {
            string a = s.substr(0, i), b = s.substr(i, j);
            if ((a[0] == '0' && a.size() > 1) || (b[0] == '0' && b.size() > 1)) continue;
            if (check(s, a, b, i + j)) return true;
            }
        }
        return false;
    }
};
