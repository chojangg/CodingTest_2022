#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> nums)
{
    unordered_map<int, int> hash;

    for (auto& i : nums) {
        hash[i] += 1;
    }

    return min(hash.size(), nums.size() / 2);
}