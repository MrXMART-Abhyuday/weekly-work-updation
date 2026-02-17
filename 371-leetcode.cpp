#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        if(a==0){
            return b;
        }
        while(a!=0){
            if(a>0){
                a--;
                b++;
            }
            else if(a<0){
                a++;
                b--;
            }
        }
        return b;
    }
};

int main() {
    Solution obj;
    
    int a, b;
    cin >> a >> b;
    
    cout << obj.getSum(a, b);
    
    return 0;
}
