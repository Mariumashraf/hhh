#include <iostream>
#include <cstdlib>
using namespace std;
struct patient {
int number ;
int age ;
string name ;
string drugs ;
patient *left ;
patient *right ;

};
class BST{
public:
    void InsertItem (int number) ;
    void DeleteItem (int number) ;
    void SearchItem (int number) ;
    void Inorder (int number) ;
    void display (int number) ;
     BST(){
   int root = NULL ;
    }
private:
    int inQue;



};
int main()
{
   int number ;
   int age ;
   string name ;
   string drugs ;
    patient*root ;
    int choice ;

    cout << "Enter the operation of BST"<<endl;
    cout<<"1) Insert patient"<<endl;
    cout<< "2) delete patient"<<endl;
    cout<<"3) search patient"<<endl;
    cout<<"4) print all patients"<<endl;
    cin>> choice;
    switch(choice)
    {
    case 1:

        cout<<"enter patient number "<<endl;
        cin>> number;
        cout<<" enter patient name"<<endl;
        cin>>name;
        cout<<" enter patient age"<<endl;
        cin>>age;
        cout<<" enter patient drugs"<<endl;
        cin>>drugs;
        BST().InsertItem(int);

break;
    case 2:
            cout<<"Enter the number to be deleted : ";

            cin>>number;

            BST().DeleteItem(int) ;

            break;

  case 3:

            cout<<"Inorder Traversal of BST:"<<endl;



            break;

 case 4:
            cout<<"enter the number of patient to search about "<<endl;
           cin>>number;
            break;


        default:

            cout<<"Wrong choice"<<endl;


    }
    return 0;
}

//function to insert

void Insert(patient*& root, int number)
{
if (root == NULL)
{// Insertion place found.
root = new patient ;
root->right = NULL;
root->left = NULL;
root->number = number;
}
else if (number< root->number)
    Insert(root->left, number); // Insert in left subtree.
else
Insert(root->right, number); // Insert in right subtree.
}
//function to delete

void DeleteItem(patient*& root, int number)
// Deletes item from tree.
// Post: item is not in tree.
{
if (number < root->number)
 DeleteItem(root->left, number); // Look in left subtree.
else if (number > root->number)
DeleteItem(root->right, number); // Look in right subtree.
else
 DeleteItem(root , number); // Node found; call DeleteNode.
}
//function of inorder
void InOrder(patient* root, int number)
{
    if (root == NULL){
        cout<<"Tree is empty"<<endl;
        return;
    }

if (root != NULL)
{
InOrder(root->left, number);

InOrder(root->right, number);
}
}

//To search an element in BST, returns true if element is found
bool Search(patient* root,int number) {
	if(root == NULL) {
		return false;
	}
	else if(root->number == number) {
		return true;
	}
	else if(number <= root->number) {
		return Search(root->left,number);
	}
	else {
		return Search(root->right,number);
	}
}

