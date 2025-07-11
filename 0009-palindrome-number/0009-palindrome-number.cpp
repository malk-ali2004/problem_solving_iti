class Solution {
public:
    bool isPalindrome(int x) {
      
      if (x<0) return false;
      int num = x;
      long long rev = 0;
      while(x!=0){
        rev = x % 10 + rev * 10;
        x /= 10; 
      }
      return num == rev;

    }
};

