// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         long long remainder=dividend;
//         long long dividend1=dividend;
//         long long count=0;
//         bool neg1=false;
//         bool neg2=false;
//         if(dividend == INT_MIN && divisor == -1){
//             return INT_MAX;
//         }
//         if(dividend1<0){
//             remainder=dividend1*(-1);
//             dividend1=dividend1*(-1);
//             neg1=true;
//         }

//         if(divisor<0){
//             divisor=divisor*(-1);
//             neg2=true;
//         }

//         while(remainder>=divisor){
//                 if(dividend1==divisor){
//                     count++; break;
//                 }
//                 else{
//                     remainder=dividend1-divisor;
//                     dividend1=dividend1-divisor;
//                     count++;
//                 }
//         }

//         if(neg1||neg2==true){
//             count=count*(-1);
//         }
//         if(neg1&&neg2==true){
//             count=count*(-1);
//         }

//         return count;
//     }
// };
class Solution {
public:
    int divide(int dividend, int divisor) {
        long long dividend1=dividend;
        long long divisor1=divisor;
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        long long quotient=dividend/divisor;
        return quotient;
    }
};
