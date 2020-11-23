#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std ;

struct list {
    char name[20];
    int durata;
    int riproduzioni;
    int ascoltatori;
    list *next;
};
typedef list *plist;

plist head_insert(plist lista, char tit[20], int dur, int rip, int asc){
    plist tmp_head = new list;
    strcpy(tmp_head->name, tit);
    tmp_head->durata = dur;
    tmp_head->riproduzioni = rip;
    tmp_head->ascoltatori = asc;
    tmp_head->next = lista;
    lista = tmp_head ;
    return lista;
}

void print_playlist(plist lista){
    while (lista!=NULL){
        cout<<lista->name << "\t"<< lista->durata <<"s\t"<< lista->riproduzioni<<" riproduzioni\t"<< lista->ascoltatori<< " ascoltatori\n";
    lista=lista->next;
    }
}

void longest(plist lista){
    plist lunghe = NULL;
    while(lista!=NULL){
        if ((lista->durata)>180){
            lunghe = head_insert(lunghe,lista->name,lista->durata,lista->riproduzioni,lista->ascoltatori);
        }
        lista = lista->next;
    }
    print_playlist(lunghe);
    //return (lunghe);
}

int durata_totale(plist lista){
    int durata=0 ;
    while (lista!=NULL){
        durata += lista->durata;
        lista=lista->next;
    }
    return(durata);
}


int main(){
    plist p = NULL;
    //plist q = NULL ;

    char t1[20]="Ciao";
    char t2[20]="UEE";
    char t3[20]="trtrtr";
    p = head_insert(p,t1,24,54,4);
    p = head_insert(p,t2,56,21,13);
    p = head_insert(p,t3,182,33,7);
    print_playlist(p);
    cout<<"La durata totale e' " << durata_totale(p)<< endl;
    longest(p);    
    return 0;
}