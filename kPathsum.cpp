/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
public:
    void solve(Node *root, int k, int &cnt, vector<int> &path)
    {
        // base case
        if (root == NULL)
            return;

        // Add current node to path
        path.push_back(root->data);

        // Check all possible sums ending at current node
        long long sum = 0; // Use long long to prevent overflow
        for (int i = path.size() - 1; i >= 0; i--)
        {
            sum += path[i];
            if (sum == k)
                cnt++;
        }

        // Recurse on left and right subtrees
        solve(root->left, k, cnt, path);
        solve(root->right, k, cnt, path);

        // Backtrack - remove current node from path
        path.pop_back();
    }
    int sumK(Node *root, int k)
    {
        vector<int> path;
        int cnt = 0;
        solve(root, k, cnt, path);
        return cnt;
    }
};