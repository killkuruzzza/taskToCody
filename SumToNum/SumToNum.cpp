#include <iostream>
#include <string>
#include <vector>

using namespace std;

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {};
      ListNode(int x) : val(x), next(nullptr) {};
      ListNode(int x, ListNode* next) : val(x), next(next) {};
  };
 
  class Solution {
  public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          string num1 = "";
          string num2 = "";
          ListNode* ld = new ListNode(0);


          while (l1->next && l2->next) {
              ListNode* tail = new ListNode(0);
              ld->val += (l1->val + l2->val) % 10;
              tail->val += (l1->val + l2->val) / 10;
              ld->next = tail;
              ld = ld->next;
              l1 = l1->next;
              l2 = l2->next;
          }
          while (l1->next) {
              ListNode* tail = new ListNode(l1->val);
              ld->next = tail;
          }
          while (l2->next) {
              ListNode* tail = new ListNode(l2->val);
              ld->next = tail;
          }
          return ld;
      }
  };
  ListNode* Testt() {
      ListNode* head2 = new ListNode(0);
      return head2;
  }
  vector<int> mergerVectros(vector<int>& vector1, vector<int>& vector2) {
      vector<int> result;
      int i = 0, j = 0;
      while (i < vector1.size() && j < vector2.size()) {
          if (vector1[i] < vector2[j]) {
              result.push_back(vector1[i]);
              i++;
          }
          else {
              result.push_back(vector2[j]);
              j++;
          }
      }
      while (i < vector1.size()) {
          result.push_back(vector1[i]);
          i++;
      }
      while( j < vector2.size()) {
          result.push_back(vector2[j]);
          j++;
      }
      return result;
  }
  int main() {
      vector<int> a = { 1, 2, 3, 4, 5, 6, 7 }, b = { 1, 2, 3, 4, 5, 6, 7 };
      for (int i : mergerVectros(a, b)) {
          cout << i << " ";
      }
  }
