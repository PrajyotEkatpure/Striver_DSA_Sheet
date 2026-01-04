class Solution {
public:
    bool isArmstrong(int n) {
        int old=n;
        int c=0,sum=0;
        while(n){
            c++;
            n=n/10;
        }
        n=old;
        while(n){
            sum=sum+pow(n%10,c);
            n=n/10;
        }
        return sum==old;

    }
};
