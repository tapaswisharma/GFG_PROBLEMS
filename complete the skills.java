
class Solution {

    public void scores(long a[], long b[]) {
        // store the answer as
        // GFG.ca=3;
        // GFG.cb=5;
        // Your code goes here
GFG.ca =0; GFG.cb=0;
        for(int i=0; i<a.length && i<b.length;i++){
          if(a[i]>b[i]){
               GFG.ca++;
          }else if(a[i]<b[i]){
              GFG.cb++;
          }
        }//for
        
    }//scores()
}//class
