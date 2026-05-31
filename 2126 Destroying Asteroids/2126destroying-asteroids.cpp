class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int i=0;
        bool check=false;
        long long currmass = mass;
        while( i<asteroids.size()){
            if(asteroids[i]<=currmass){
                currmass+=asteroids[i];
                i++;
                check=true;
            }
            else{
                check=false;
                break;
            }
        }
    return check;
    }
};