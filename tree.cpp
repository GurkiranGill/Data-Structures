#include<iostream>
using namespace std;

char tree[7];// global declaration of tree array

//Inserting element in root of binary tree

void root(char r){
if(tree[0] == '\0'){
    tree[0] = r;
}
else
    cout<<"Root is not NULL!";
}

//Inserting element in left child node

void ins_left(int p_index, char ele){
if(tree[(p_index * 2) + 1] == '\0'){
    tree[(p_index * 2) + 1] = ele;
}
else
    cout<<"\nLeft Child is not NULL";
}

//Inserting element in right child node

void ins_right(int p_index, char ele){
if(tree[(p_index * 2) + 2] == '\0'){
    tree[(p_index * 2) + 2] = ele;
}
else
    cout<<"\nRight Child is not NULL";
}

//Display Binary tree

void display_tree(){
if(tree[0] == '\0'){
    cout<<"\nNot a binary tree";
}
else
    cout<<"\n";
for(int i=0;i<7;i++){
    cout<<tree[i]<<" ";
}
}

//Delete left child node

void del_left(int p_index){
if(tree[(p_index * 2) + 1] == '\0'){
    cout<<"\nNode is NULL";
}
else
    tree[(p_index * 2) + 1] = '\0';
}

//Delete right child node

void del_right(int p_index){
if(tree[(p_index * 2) + 2] == '\0'){
    cout<<"\nNode is NULL";
}
else
    tree[(p_index * 2) + 2] = '\0';
}

//Delete root node

void del_root(){
if(tree[0] == '\0'){
    cout<<"\nRoot is already NULL";
}
else
    tree[0] = '\0';
    cout<<"\nRoot is deleted!";
}

//Modifying left child node

void mod_left(int p_index, char mod){
    if(tree[(p_index * 2) + 1] == '\0'){
        cout<<"\nLeft Child node is NULL!";
        tree[(p_index * 2) + 1] = mod;
        cout<<"\nNew Left Child node inserted!";
    }
    else
        tree[(p_index * 2) + 1] = mod;
        cout<<"\nModification Successful!";

}

//Modifying right child node

void mod_right(int p_index, char mod){
    if(tree[(p_index * 2) + 2] == '\0'){
        cout<<"\nRight Child node is NULL!";
        tree[(p_index * 2) + 1] = mod;
        cout<<"\nNew Right Child node inserted!";
    }
     else
        tree[(p_index * 2) + 2] = mod;
        cout<<"\nModification Successful!";

}


void mod_root(char mod){
    if(tree[0] == '\0'){
        cout<<"\nRoot node is NULL!";
        tree[0] = mod;
        cout<<"\nNew Root node inserted!";
    }
     else
        tree[0] = mod;
        cout<<"\nModification Successful!";

}


//main function

int main(){

    root('A');

    ins_left(0,'B');
    ins_right(0,'C');
    ins_left(1,'D');
    ins_right(1,'E');
    ins_left(2,'F');
    ins_right(2,'G');

    display_tree();

    //                   A[0]
    //            B[1]          C[2]
    //         D[3]  E[4]    F[5]  G[6]


    del_left(0);
    del_right(2);

    display_tree();
    //                   A[0]
    //             -\-          C[2]
    //          D[3]  E[4]   F[5]  -\-

    mod_right(0,'B');
    mod_left(2,'G');
    mod_root('Z');

    display_tree();
    //                   Z[0]
    //             -\-          B[2]
    //          D[3]  E[4]   G[5]  -\-
return 0;}
