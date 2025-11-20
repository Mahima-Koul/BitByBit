class Solution {
public:

    int sumofdigits(int n){
        int sum=0;
        while(n>0){
            int i= n%10;
            sum= sum+ i*i;
            n=n/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow= n;
        int fast=n;

        do{
            slow= sumofdigits(slow);
            fast= sumofdigits(sumofdigits(fast));
        }while(slow != fast);

        return slow==1;
    }
};
