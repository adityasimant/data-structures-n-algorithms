#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *left, *right;
};

class Tree
{

private:
    Node *root;

public:
    Tree()
    {
        root = nullptr;
    }
    Node *insert(Node *r, int y)
    {
        if (r == nullptr)
        {
            r = new Node;
            r->data = y;
            r->left = r->right = nullptr;
        }
        else if (y < r->data)
        {
            r->left = insert(r->left, y);
        }
        else if (y > r->data)
        {
            r->right = insert(r->right, y);
        }

        return r;
    }
    void findMin(Node *r)
    {
        if (r->left == nullptr)
        {
            cout << "Min no. is : " << r->data << endl;
            return;
        }
        findMin(r->left);
    }
    void findMax(Node *r)
    {
        if (r->right == nullptr)
        {
            cout << "Max no. is : " << r->data << endl;
            return;
        }
        findMax(r->right);
    }
    void add(int x)
    {
        root = insert(root, x);
    }
    void find()
    {
        findMin(root);
        findMax(root);
    }
    void inorder(Node *r)
    {
        if (r == nullptr)
        {
            return;
        }
        // left root right
        inorder(r->left);
        cout << r->data << endl;
        inorder(r->right);
    }
    void preorder(Node *r)
    {
        // root left right
        if (r == nullptr)
        {
            return;
        }
        cout << r->data << endl;
        preorder(r->left);
        preorder(r->right);
    }
    void postorder(Node *r)
    {
        if (r == nullptr)
        {
            return;
        }
        // left  right root
        postorder(r->left);
        postorder(r->right);
        cout << r->data << endl;
    }
    void dispInorder()
    {
        inorder(root);
    }
    void search(Node *r, int x)
    {
        if (r == nullptr)
        {
            cout << "not found" << endl;
            return;
        }
        else if (r->data == x)
        { 
            cout << "data found" << endl;
            return;
        }
        else if(x<r->data)
        {
             search(r->left, x);
        
        }
        else if(x>r->data)
        {
            search(r->right, x);
        }
       
    }
    void srchitm(int x)
    {
        search(root, x);
    }
};

int main()
{
    Tree t1;
    t1.add(4);
    t1.add(14);
    t1.add(24);
    t1.add(54);
    t1.add(74);
    t1.add(124);
    t1.add(44);
    t1.find();
    t1.dispInorder();
    t1.srchitm(54);
    return 0;
}