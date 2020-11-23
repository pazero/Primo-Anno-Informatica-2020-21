#include "library.h"

int main(){
    const int L=300;
    int a[L];
    int j;
    crea_rand_array(a, L, 10);
    stampa_array(a, L, true);
    for (int n=0; n<10; n++){
        j=0;
        for (int i=0; i<L; i++){
            if (a[i]==n) j++;
        }
        cout<<endl;
        cout<<n<<" ("<<j<<")\t";
        for (j; j>0; j--){
            cout<<"X";
        }
    }
    cout<<endl;
    return 0;
}