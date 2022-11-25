/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

typedef char* string;



static int reader(const List *lista){//add an element into the list
    char *msj=NULL;//ask the element
    int i=0;//to add elements into the sting
    ListNode *nodea;//to save the string in the nodo
	
	printf("\n\t :");
    //stats the string
    msj=(char*)malloc(sizeof (char));
    //adding other letters
    if (msj!=NULL){
        while ((msj[i]=getchar())!= '.'){//end of the string
            msj=(char*)realloc (msj,sizeof(char)*strlen(msj));//making bigger the string
            if (msj!= NULL){
                i++;//change the position in the string
				fflush;
            }
            else{
                printf("something is wrong");
            }
        }
        
        //print the element
        fflush;
        printf("\n{\n\t%s \t}",msj);
        //aqui hay un error no imprime msj 3 lineas abajo
		//adding in the head of the list
        if (list_ins_next (lista, NULL, msj) != 0){
        	return 1;
		}
		printf("%s",msj);
        //something doesnt work here it has trash 
            			//what do we do with the pointer?
    }else{
        printf("something is wrong");
    }
    
    free(msj);//let it go 

    return ;
}

static void print_list (const List *list) {//print a lsit 
    ListNode *node;//used to move inside the list
    int  i=0;
    char *data;//pointer //doble ya que ocupamos que el puntero apunte a otro con un string
	
	while(1){
		data = list_data(node);
    	fprintf(stdout, "\n\n\t\tList size is %d\n", list_size(list));
		data=(char*)malloc(sizeof(data));//genero el lago de la cadena
		strcpy(data, node->data);
		fprintf(stdout,"\n\t%s ",data);
		strcpy(data, node->data);
		//como igualo las cadenas aqui? un for ay 
        printf("\n\t%s ",data);//imprime basura 3 chars 
        //se rope aqui
        //fprintf(stdout, "list.node[%03d]=%s, %p -> %p \n", i, *data, node, node->next);
    	printf("\n");
    	i++;

        if (list_is_tail(node))
            break;
        else
            node = list_next(node);
    	i++;
	}
	
	//}
   return;
}



/*
static void check_list (const List *lista,const List *listb ) { //it checks if all the elemnts ara diferent   ListNode *node;
    int  i;
    int *data;
    int *newdata;
    i = 0;
    node = list_head(list);
    newnode = list_head(list);
	
	while (1) {
		
		data = list_data(node);
		
	    while (1) {
	        newdata = list_data(node);
	
	        if(data==newdata){
	        	
	        	if (list_rem_next(&list, node, (void**)&data) != 0)
        		return 1;
			}
	
	        if (list_is_tail(node))
	            break;
	        else
	            node = list_next(node);
	    }
	    
		if (list_is_tail(node))
	            break;
	        else
	            node = list_next(node);
	}
   return;
}
*/

/*static void meet_list (const List *lista,const List *listb ) {
    List *listc;//new list to save meet
	ListNode *nodea,*nodeb,*nodec; //used to move nodes
	char **dataa, **datab, **datac; //data is a string
	// Initialize meet list
    list_init(&listc, free);
    //used to know where we?re
     nodec = list_head(listc);
     nodea = list_head(lista);
    do{
    	dataa = list_data(nodea);
    	nodeb = list_head(listb);
    	do{
    	datab = list_data(nodeb);
			if (dataa==datab){
				//como le hago para la sting?
				if ((datac = (int *)malloc(sizeof(int))) == NULL)
            	return 1;

        		*datac = *dataa;

       			if (list_ins_next(&listc, NULL, datac) != 0)
            	    return 1;
                nodeb = nodeb->next;
			}
		} while(nodeb != listb->tail);
		nodea = nodea->next;	
    	
	} while(nodea!=lista->tail);
	//save the element in file "Grups.txt"
        //grup=fopen("groups.txt","w");//open the file to save each element 
	    //fprintf (grup, "%s\n", msj);//saves the string in the file
        //fclose(grup);
    
}

static void join_list (const List *list) {
    ListNode *node;
    int  i;
    char *data;
}

static void potencia_list (const List *list) {
    ListNode *node;
    int  i;
    char *data;
}

static void diference_list (const List *list) {
    ListNode *node;
    int  i;
    char *data;
}



static void cartesiano_list (const List *list, const List *listx) {
    ListNode *node;
    int  i;
    char *data;
}*/


/*int main (int argc, char **argv) {
	FILE *numeros;
    List lista;
    List listb;
    ListNode *node;
    int  i, e;
    int *data;
 
 // Initialize the linked list
    list_init(&lista, free);
 //fill_list(&lista); 
 	printf("\n\t\tNumber of elements in your group: ");
	 scanf("%d",&e); 
	 for(i=0;i<e;i++) {
	 	reader(&lista);
	 }
    
 // Fill the linked list   
    print_list(&lista);
     
    

    fprintf(stdout, "\nDestroying the list\n");
    list_destroy(&lista);
    list_destroy(&listb);

    return 0;
}

/*
static void Agregar(){
    FILE *archivo;
    ListNode node;
    int c=0;

    printf("\n\n\t\tIngresa todos los objetos que conformaran tu conjunto :) ");
    printf("\n\n\t\tEstos deben estar separados por comas y al finalizar presiona enter. ");

    archivo=fopen("conjuntos.bin", "ab");

    if (archivo==NULL){
        printf("\n\n            no pudimos abrir el archivo :( ");
    }else{

        

        c=fwrite(&node, sizeof(node), 1, archivo);
    }

	if (c<1){
		printf("\n\t\t El producto no se pudo guardar\n\n");
	}else{
		printf("\n\t\t El producto se guardo con exito \n\n");
	}

	fclose(archivo);
	system("pause");system("cls");

}
*/

	/*
    fprintf(stdout, "\nCreating a new list\n");
    
    fprintf(stdout, "\nPlease press 0 if youre done with the list\n");
    
    check=1;
    numeros=fopen("Numeros.bin","a");
    while(check!=0) {
    	
        if ((data = (int *)malloc(sizeof(int))) == NULL)
            return 1;
            
        fprintf(stdout, "\n :  ");
        fflush(stdin);
		scanf("%d", &i);
		scanf("%d", data);
		fwrite(&i, sizeof(i), 1, numeros);
		

        if (list_ins_next(&lista, NULL, data) != 0)
            return 1;
            
        check=1;   
        fprintf(stdout, "\nDone?:  ");
        scanf("%d",&check);   
    }
	fclose(numeros);
	numeros=fopen("Numeros.bin", "r");
	 print_list(&lista);
	 
	if (numeros==NULL){
             printf("\n\tNo se pudo abrir :( ");
    }else{
    	
        fread (&data, sizeof(int), 1, numeros );

		while( !feof(numeros) ){
				printf("\n\n\tDATO:\t\t%d", data);
                printf("\n------------------------------------\n");
		}
	}
	
	*/
	
	/*
		 
	// Initialize the linked list
    list_init(&listb, free);
    
     // Fill the linked list
    node = list_head(&listb);
	 
	fprintf(stdout, "\nCreating a new list\n");
    
    check=1;
	 while(check!=0) {
    
        if ((data = (int *)malloc(sizeof(int))) == NULL)
            return 1;
            
        fprintf(stdout, "\n :  ");
        fflush(stdin);
		scanf("%d", data);

        if (list_ins_next(&listb, NULL, data) != 0)
            return 1;
            
        check=1;   
        fprintf(stdout, "\nDone?:  ");
        scanf("%d",&check);
            
    }
    
    
    
    print_list(&listb);
    
    meet_list(&listb,&lista);
    
    fclose(numeros);

    // Destroying the list*/
