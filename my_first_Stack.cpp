#include "library.h"
const int length=100;
int a[length];
int dim=0;

bool iss_empty() {
    return (dim==0);
}

void push(int elem) {
    if (dim==length) cout<<"overflow\n\n";
    else {
        a[dim]=elem;
        dim++;
    }
}

void pop() {
    if (!iss_empty()) dim--;
}

int main(){
    int numeretto=1;
    char choice='o';
    while (choice!='x'){
        cout<<"Cosa vuoi fare?\n x: esci\n u: push\n p: pop\n c: check empty\n\n";
        cin>>choice;
        cout<<"\n";
        if (choice=='u'){
            cout<<"Unskilled programmer, dimmi il valore da inserire: ";
            cin>>numeretto;
            push(numeretto);
            cout<<"\n";
        }
        else if (choice=='p'){
            if (iss_empty()) cout<<"La coda e' gia' vuota\n\n";
            else{
                pop();
                cout<<"Elemento rimosso!!!\n\n";
            }
        }
        else if (choice=='c'){
            cout<<iss_empty()<<"\n\n";
        }

    }
}
