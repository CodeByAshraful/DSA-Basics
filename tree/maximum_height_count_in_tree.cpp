#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right; 
    
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        //1.ber kore ana
        Node* f = q.front();
        q.pop();
        //2.oi node er kaj
        cout<<f->val<<" ";
        //3.children push kora
        if(f->left!=NULL)
        q.push(f->left);
        if(f->right!=NULL)
        q.push(f->right);
    }
}

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root!=NULL)
    q.push(root);

    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        Node*myLeft, *myRight;
        int l,r;
        cin>>l>>r;
        if(l==-1) myLeft=NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight=NULL;
        else myRight = new Node(r);

        p->left=myLeft;
        p->right=myRight;

        if(p->left!=NULL)
        q.push(p->left);
        if(p->right!=NULL)
        q.push(p->right);

    }
    return root;
}
int maximum_height(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    int l =maximum_height(root->left);
    int r=maximum_height(root->right);
    return max(l,r)+1;

}
int main()
{
    Node* root = input_tree();
    cout<<maximum_height(root) ; 
    
    return 0;
}