class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> score;
        int i=0;
        while(i<operations.size()){
            if(operations[i]=="C"){
                score.pop();
            }
            else if(operations[i]=="+"){
                int first= score.top();
                score.pop();
                int second = score.top();
                int naya= first+second;
                score.push(first);
                score.push(naya);
            }
            else if(operations[i]=="D"){
                int newtop = score.top();
                newtop= score.top()*2;
                score.push(newtop);
            }
            else{
                score.push(stoi(operations[i]));
            }
            i++;
        }
        int sum=0;
        while(!score.empty()){
            sum=sum+score.top();
            score.pop();
        }
return sum;
    }
};