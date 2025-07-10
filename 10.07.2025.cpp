class Solution {
  public:
    struct Node {
        Node* next[26] = {};
        bool isEnd = false;
    };
    string longestString(vector<string> &words) {
        // code here
        Node* root = new Node();
        for (auto& w : words) {
            Node* node = root;
            for (char c : w) {
                int i = c - 'a';
                if (!node->next[i]) node->next[i] = new Node();
                node = node->next[i];
            }
            node->isEnd = true;
        }

        string res = "";
        for (auto& w : words) {
            Node* node = root;
            bool ok = true;
            for (int i = 0; i < w.size(); ++i) {
                node = node->next[w[i] - 'a'];
                if (!node || (i < w.size() - 1 && !node->isEnd)) {
                    ok = false;
                    break;
                }
            }
            if (ok && (w.size() > res.size() || (w.size() == res.size() && w < res)))
                res = w;
        }
        return res;
    }
};
