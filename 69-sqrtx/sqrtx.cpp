class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=x,ans;

        while(start<=end){

           long long  mid=start+(end-start)/2;
           long long sq=mid*mid;

            if(sq==x){
                ans=mid;
                break;

            }
            else if(sq < x){
                ans=mid;
                start=mid+1;

            }
            else{
             end=mid-1;
            }
        }
        return ans;
        
    }
};