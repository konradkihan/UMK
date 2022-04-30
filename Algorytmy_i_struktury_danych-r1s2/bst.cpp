#include<iostream>
#include<vector>

using namespace std;

struct node{
    node* p;
    node* l;
    node* r;
    int dane;
};


node* seek_key(node* root, int x){
    if(root == NULL) return NULL;
    if(root -> dane == x) return root;
    if(root -> dane > x) return seek_key(root->l, x);
    return seek_key(root->r, x);
}

node* minimum(node* root){
    if(root == NULL) return NULL;
    while(root -> l != NULL) root = root->l;
    return root;
}


node* minimum(node* root){
    if(root == NULL) return NULL;
    while(root -> l != NULL) root = root->r;
    return root;
}


node* find_next(node* x){
    node* ret = x->p;
    if(x->r != NULL) return minimum(x->r);
    while(ret!=NULL && ret->l !=x){
        x = ret;
        ret = x->p;
    }
    return ret;
}

int main(){
    // initialize vector
    vector<node*> v;
    node* n;
    int m, x;
    // read tree
    cin >> m;
    for(int i = 0; i <m; i++){
        cin>>x;
        n = new node;
        n -> dane = x;
        n -> p = (i!=0)? v[i/2]: NULL;
        v.push_back(n);
    }

    for(int i = 0; i<m; ++i){
        n = v[i];
        n -> l = (i*2+1<m)?v[i*2+1]:NULL;
        n -> r = (i*2+2<m)?v[i*2+2]:NULL;
    }

}