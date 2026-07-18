class Solution {
public:
    int minOperations(int n) {
        //1 3 5 7 9 11
        //2 3 5 7 9 10 
        //3 3 5 7 9 9
        //4 3 5 7 9 8
        //5 3 5 7 9 7
        //6 3 5 7 9 6 
        //6 4 5 7 8 6
        //6 5 5 7 7 6
        //6 6 5 7 6 6 
        //6 6 6 6 6 6
        int sum=0;
        for(int i=1;i<=2*n;i+=2){
            sum=sum+i;
        }
        int avg=sum/n;
        int count=0;
        for(int i=1;i<avg;i+=2){
            count=count+avg-i;
        }
    return count;}
};