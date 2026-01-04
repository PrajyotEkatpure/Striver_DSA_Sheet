class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd=1;
        for(int i=1;i<(n1<n2?n1:n2);i++){
            if(n1%i==0&&n2%i==0) gcd=i;
        }
return gcd;
    }
};
/*
we can aslo use eculidean therom also
gcd(a,b) == gcd(a-b,b)
gcd(10,20) == gcd (20-10,10) 
gcd(10,10) == gcd(0,10)
:. GCD = 10
*/
