class Solution{
    
    public boolean IsPerfect(int a[], int n)
    {
       int flag=0;
         for(int i=0;i<a.length/2;i++){
            if(a[i]!=a[n-1-i])
                flag=1;
    }
    if(flag==0) return true;
    else return false;
    }
    
}
