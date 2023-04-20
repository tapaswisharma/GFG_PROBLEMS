class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
       if(!node) return 0;

         if(node)

        {
            int left_height,right_height;
            left_height = height(node->left)+1;
            right_height = height(node->right)+1;
            
            return max(left_height,right_height);
    }
    }
    
};
