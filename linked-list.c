#include <stdio.h>
#include <stdlib.h>

typedef struct _Train
{
    int seats;
    struct _Train *next;
} Train;

int main(void)
{
    Train *head = NULL;
    Train *tail = NULL;
    int i;
    for(i=0; i<5;i++){
        if(head==NULL){
            head = (Train *)malloc(sizeof(Train));
            tail = (Train *)malloc(sizeof(Train));
        }
        else{
            tail->next = (Train *)malloc(sizeof(Train));
            tail = tail->next;
        }
    }
}