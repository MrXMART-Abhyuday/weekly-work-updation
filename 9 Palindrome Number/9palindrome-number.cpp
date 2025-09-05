class Solution {
public:
    bool isPalindrome(int x) {
    long long reverse=0,rem,holder;
    holder=x;
    while(x>0)
    {
        rem=x%10;
        reverse=rem+reverse*10;
        x=x/10;
    }
    
    if(reverse==holder)
    return true;
    else
    return false;
    }
};