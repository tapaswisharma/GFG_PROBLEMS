class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
               unordered_map<int,int> mpp;
        int count = 0;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        
       for(int i=0;i<n;i++){
           if(mpp[arr[i]]>1){
               return i+1;
           }
       }
        return -1;
    }
};
