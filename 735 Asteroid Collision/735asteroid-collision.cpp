class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ans;
        for(int i=0;i<asteroids.size();i++){
            if(ans.empty()){
                ans.push(asteroids[i]);
            }
            else if(ans.top()>0 && asteroids[i]<0){

                if(abs(ans.top()) == abs(asteroids[i])){
                    ans.pop();
                    continue;
                }

                if(!ans.empty() && abs(ans.top()) > abs(asteroids[i])){
                    continue;
                }

                while(!ans.empty() &&
                      ans.top()>0 &&
                      asteroids[i]<0 &&
                      abs(ans.top()) < abs(asteroids[i])){
                    ans.pop();
                }
                if(ans.empty() || ans.top() < 0){
                    ans.push(asteroids[i]);
                }

                else if(abs(ans.top()) == abs(asteroids[i])){
                    ans.pop();
                }

                else if(abs(ans.top()) < abs(asteroids[i])){
                    ans.push(asteroids[i]);
                }
            }
            else{
                ans.push(asteroids[i]);
            }
        }

        vector<int> fians;
        while(!ans.empty()){
            fians.push_back(ans.top());
            ans.pop();
        }
        reverse(fians.begin(), fians.end());
        return fians;
    }
};