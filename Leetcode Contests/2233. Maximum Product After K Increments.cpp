class Solution {
public:
    int maximumProduct(vector<int> &nums, int k)
{
    priority_queue<long long int, vector<long long int>, greater<long long int>> p;

    for (auto it : nums)
    {
        p.push(it);
    }
    // pq contains all numbers;
    while (k--)
    {
        long long int top = p.top();
        // cout << top << " ";
        p.pop();
        top++;
        // cout << "->" << top << "\n";
        p.push(top);
    }
    long long int mul = 1;
    while (p.size()!=0)
    {
        // cout<<p.top()<<" ";
        mul = (mul*p.top())%(int)(1e9+7);
        p.pop();
    }
        // mul%=(int)(1e9+7);
    return mul;
}
};
