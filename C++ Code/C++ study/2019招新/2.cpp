#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	int removeDuplicates(string &nums) {
		int res = 1;
		if (nums.size() == 0) {
			return 0;
		}
		int temp = nums[0];
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != temp) {
				res++;
				temp = nums[i];
				nums[res - 1] = nums[i];
			}
			else {

			}
		}
		for (int i = 0; i < res; i++) {
			cout << nums[i];
		}
		cout << endl;
		return res;
	}
};

int main()
{
	Solution a = Solution();
	string text = "aaafdsfdsggggg";
	cout<<a.removeDuplicates(text);
	return 0;
}