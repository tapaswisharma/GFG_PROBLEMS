class Solution{
public:
       Node* search(Node* root, int target, int &sum1)
       {
           if(root==NULL) return NULL;
           
           sum1+=root->data;
           if(root->data==target)
           {
               return root;
           }
           
           if(target>root->data)
           {
               return search(root->right,target, sum1);
           }
           else
           
           {
              return search(root->left,target,sum1);
           }
       }
       int LeafNode(Node* root)
       {
           if (root->left== NULL and root->right== NULL)
           {
               return root->data;
           }
           int mn=INT_MAX;
           if (root->left)
           {
               mn=min(mn,LeafNode(root->left));
           }
           if (root->right)
           {
               mn=min(mn,LeafNode(root->right));
           }
           return mn+root->data;
       }
    int maxDifferenceBST(Node *root,int target){
        int sum1=0;
        Node* targetNode=search(root, target, sum1);
        if(targetNode== NULL) return -1;
        
        int sum2 = LeafNode(targetNode);
        
        return sum1-sum2;
    }
};
