/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void printSpiral(Node *root);


Node* buildTree(string str)
{
    
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    
    Node* root = newNode(stoi(ip[0]));

    
    queue<Node*> queue;
    queue.push(root);

    
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        
        Node* currNode = queue.front();
        queue.pop();

        
        string currVal = ip[i];

        if(currVal != "N") {

            
            currNode->left = newNode(stoi(currVal));

           
            queue.push(currNode->left);
        }

       
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        
        if(currVal != "N") {

            
            currNode->right = newNode(stoi(currVal));

            
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

void printSpiral(Node *root)
{
    stack<Node*>s1;
    stack<Node*>s2;
    if(root==NULL)
    return;
    s1.push(root);
    while(!s1.empty()||!s2.empty()){
        
        while(!s1.empty()){
            Node*temp=s1.top();
            cout<<temp->data<<" ";
            s1.pop();
            
        if(temp->right!=NULL)
        s2.push(temp->right);
        if(temp->left!=NULL)
        s2.push(temp->left);
        
            
        }
        while(!s2.empty()){
            Node*temp=s2.top();
            cout<<temp->data<<" ";
        
        s2.pop();
        if(temp->left!=NULL)
        s1.push(temp->left);
        if(temp->right!=NULL)
        s1.push(temp->right);
        }
        
    }
}

int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        printSpiral(root);
        cout << endl;
    }
    return 0;
}

