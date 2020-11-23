/*
struct list {
    char titolo[50] ;
    double prezzo ;
    int num_copie ;
    list *next ;
} ;

typedef list* plist ;

plist head_insert(plist lista,){
    ptr_lista tmp_head;
    tmp_head=new lista;
    tmp_head->val=num;
    tmp_head->next=p1;
    p1 = tmp_head;
    return(tmp_head);
}

void new_libro (libro->titolo) {
    
}

int main() {
    list libro1 ;
    strcpy(libro1->titolo, "Harry Potter") ;


    new_libro()
}
*/

struct list{
    char name[20];
    double price;
    int num;
    list *next;
};
typedef list *plist;

plist head_insert(plist lista, char titolo[20], double prezzo, int val){
    plist tmp_head = new list;
    strcpy(tmp_head->name, titolo);
    tmp_head->price = prezzo;
    tmp_head->num = val;
    tmp_head->next = lista;
    lista = tmp_head ;
    return lista;
}
void print_list(plist p){
    while(p != NULL){
        cout << p->name << " " << p->price << " " << p->num << endl;
        p = p->next;
    }
}

plist buy_book(char titolo[20], plist p){
    plist p_init = p;
    plist p_prev = p;
    bool trovato = false;
    while(p!=NULL && !trovato){
        if(strcmp(p->name,titolo)==0){
            p->num = p->num-1;
            trovato = true;
            if(p == p_init && p->num==0){
                p = p->next ;
                delete p_init ;
                p_init = p ;
                p_prev = p ;
            }else if (p != p_init && p->num==0 ){
                p_prev->next = p->next ;
                delete p ;
                p = p_prev->next ;
            }
        }
        else{
            p_prev = p ;
            p = p->next ;
        }
    }
    return(p_init) ;
}

double media_val(plist lista){
    int i=0 ;
    double media=0 ;
    while (lista != NULL) {
        media += lista->price ;
        lista = lista->next ;
        i++;
    }
    if (i==0) media=0 ;
    else {
        media = media/i ;
    }
    return(media) ;
}

plist expensive(plist lista, char res[20]) {
    double Max=0 ;
    while (lista != NULL) {
        if ((lista->price) > Max){
            Max = lista->price ;
            strcpy(res, lista->name) ;
        }
        lista = lista->next ;
    }
}

int main(){
    plist libreria ;
    libreria = NULL ;
    libreria=head_insert(libreria, "Narnia", 13.4 , 3) ;
    libreria=head_insert(libreria, "Harry Potter", 21.3 , 1) ;
    libreria=head_insert(libreria, "La Pimpa", 6.8 , 2) ;
    cout<< media_val(libreria);
    return 0;
}