#include <iostream>

using namespace std;

 struct node{
        int value;
        node* next;
             };
             
void addnode (node* &H, int val){
    node* P = new node;
    P->next = H;
    P->value = val;
    H = P;
}

void printnodes(node* &H){
    node* P = H;
    while(P->next){
        cout << P->value << endl;
        P = P->next;
    }
}
int main()
{
    node* H = new node;
    H-> next = nullptr;
    addnode(H, 9);
    addnode(H, 5);
    addnode(H, 3);
    printnodes(H);
}
