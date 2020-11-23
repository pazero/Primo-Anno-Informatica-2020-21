#include "library.h"
int const L=100;
int A[L];
int dim1=0;
int dim2=0;
bool iss_empty1() {
    return (dim1==0);
}

bool iss_empty2() {
    return (dim2==0);
}

void push1(int elem) {
    if ((dim1+dim2)==L) cout<<"overflow\n\n";
    else {
        A[dim1]=elem;
        dim1++;
    }
}
void push2(int elem) {
    if ((dim1+dim2)==L) cout<<"overflow\n\n";
    else {
        A[L-1-dim2]=elem;
        dim2++;
    }
}


void pop1() {
    if (!iss_empty1()) dim1--;
}
void pop2() {
    if (!iss_empty2()) dim2--;
}

int main(){
    int numeretto;
    int z;
    char choice='o';
    while (choice!='x'){
        cout<<"Su quale pila vuoi agire? 1 o 2?\n";
        cin>>z;
        if (z==1) {
            cout<<"Cosa vuoi fare alla pila 1?\n x: esci\n u: push\n p: pop\n c: check empty\n\n";
            cin>>choice;
            cout<<"\n";
            if (choice=='u'){
                cout<<"Stai agendo sulla pila 1\n";
                cout<<"Unskilled programmer, dimmi il valore da inserire: ";
                cin>>numeretto;
                push1(numeretto);
                cout<<"\n";
            }
            else if (choice=='p'){
                if (iss_empty1()) cout<<"La coda e' gia' vuota\n\n";
                else{
                    pop1();
                    cout<<"Elemento rimosso!!!\n\n";
                }
            }
            else if (choice=='c'){
                cout<<iss_empty1()<<"\n\n";
            }
        }
        else if (z==2){
            cout<<"Cosa vuoi fare alla pila 2?\n x: esci\n u: push\n p: pop\n c: check empty\n\n";
            cin>>choice;
            cout<<"\n";
            if (choice=='u'){
                cout<<"Stai agendo sulla pila 1\n";
                cout<<"Unskilled programmer, dimmi il valore da inserire: ";
                cin>>numeretto;
                push2(numeretto);
                cout<<"\n";
            }
            else if (choice=='p'){
                if (iss_empty2()) cout<<"La coda e' gia' vuota\n\n";
                else{
                    pop2();
                    cout<<"Elemento rimosso!!!\n\n";
                }
            }
            else if (choice=='c'){
                cout<<iss_empty2()<<"\n\n";
            }
        }
    }
}