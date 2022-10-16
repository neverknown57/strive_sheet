#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class solutions
{
public:
    void permute_gen(vector<int> nums, vector<int> vect, vector<vector<int>> &per_holder)
    {
        if (vect.size() != nums.size())
        {
            vect.push_back()
                permute_gen()
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> per_holder;
        vector<int> vect;
        permute_gen(nums, vect, per_holder);
    }
};

int main()
{
}