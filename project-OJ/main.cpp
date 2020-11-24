#include <iostream>
#include <vector>

#include "Parameter.h"
#include "IOOperate.h"
#include <algorithm>
using namespace std;

class Solution {
public:
	string longestPalindrome(string s) {

	}
};


int main(void)
{	
	Solution a;
	IOOperate io;
	Parameter p;
	io.read(p.s1);
	p.s2 = a.longestPalindrome(p.s1);
	io.write(p.s2);
	return 0;
}

/* 链表
class Solution {
public:
	bool isPalindrome(ListNode* head) {
		if (head == nullptr)
			return 1;
		ListNode* spoint = head, * end = spoint, * temp = spoint;
		while (end->next != nullptr)
			end = end->next;
		while (spoint->next != nullptr) {
			if (spoint->val != end->val)
				return 0;
			else {
				while (temp->next != end)
					temp = temp->next;
				if (temp == spoint)
					return 1;
				end = temp;
				spoint = spoint->next;
				temp = spoint;
				if (spoint == end)
					return 1;
			}
		}
		return 1;
	}
};

int main(void)
{
	Solution a;
	IOOperate io;
	Parameter p;
	io.read(p.root);
	p.b = a.isPalindrome(p.head);
	io.write(p.root);
	return 0;
}
*/