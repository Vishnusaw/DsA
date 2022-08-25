class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[],int m, int n)
    {
    //Your code goes here
        vector<int> ans;
        sort(arr2,arr2+n);
        
        for(int i=0;i<m;i++){
            int x = arr1[i];
            
            int l =0;
            int h=n-1;
            int mid = l + (h-l)/2;
            while(l<=h){
                
                mid = l + (h-l)/2;
                
                if(arr2[mid]>x){
                    h = mid-1;
                }else{
                    l = mid+1;
                }
            }
            ans.push_back(l);
        }
        return ans;
    }
};
