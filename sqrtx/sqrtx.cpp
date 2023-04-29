class Solution {
public:
    int mySqrt(int x) {

        if(x==1) return 1;
    int low=1;
    int high=x/2;
    int ans=0;
   while(low<=high)
   {
       long long int mid=(low+high)/2;
       long long int square= mid*mid;
       if(square==x)
       {
           return mid;
       }
       else if(square<x)
       {
           ans=mid;
           low=mid+1;
       }
       else 
       {
           high=mid-1;
       }
   }
         return ans;
    }
};