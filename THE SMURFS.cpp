class Solution{
public:
    int findMin(int n, char a[]){
        int R = 0, G = 0, B = 0;  // R-> Red, G-> Green, B-> Blue
        
        for(int i = 0;i < n; i++) {
            (a[i] == 'R') ? R++ : ((a[i] == 'G') ? G++ : B++);  // count the colors
        }
        
        if(R == n || G == n || B == n)   // if any color equal to length
            return n;
        if(R%2 == G%2 && G%2 == B%2)  // if they are either odd or even
            return 2;
        return 1;
    }
};
