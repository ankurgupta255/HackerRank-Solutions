#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

int height(Node *root)
{
if(root==NULL)
return 0;

int ls=height(root->left);
int rs=height(root->right);

return max(ls,rs)+1;
}


void printLevel(Node *root,int k)
{
if(root==NULL)
return;

if(k==1)
{
cout<<root->data<<" ";
return;
}

printLevel(root->left,k-1);
printLevel(root->right,k-1);
}

void levelOrder(Node *root)
{
int h=height(root);

for(int i=1;i<=h;i++)
{
printLevel(root,i);

}
      }      //Write your code here

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}