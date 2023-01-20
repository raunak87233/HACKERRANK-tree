#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
int height(Node * root)
{
  if(!root)
      return 0;
    int l=height(root->left);
    int r=height(root->right);
    if(l > r)
        return(l+1);
    else
        return (r+1);
}
  void level(Node *root,int N){
      if(!root)
          return ;
      if(N==1)
          cout<<root->data<<" ";
      level(root->left,N-1);
      level(root->right,N-1);
  }
void levelOrder(Node * root)
{
  int n=height(root);
    for(int i=1;i<=n;i++){
        level(root,i);
        
    }
  
}


        


    

}; //End of Solution
