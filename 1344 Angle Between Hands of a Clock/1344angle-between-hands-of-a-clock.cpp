class Solution {
public:
    double angleClock(int hour, int minutes) {
       double degreeofhour=hour*30+minutes*0.5;
       double degreeofminute=minutes*6;
       double diff1=abs(degreeofhour-degreeofminute);
       double ans=min(diff1,360-diff1);

return ans;
    }
};