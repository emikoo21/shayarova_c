#include <stdio.h>
#include <stdlib.h>

int main(){
    int *list = NULL;
    int size = 0;
    int choice, new, index, nsize;
    int *tmp = NULL;
    
    do{
        printf("\n Menu \n");
        printf("1. Adding\n");
        printf("2. Delete\n");
        printf("3. List output\n");
        printf("4. Changing the size\n");
        printf("0. Exit\n");
        printf("Select an action: ");
        scanf("%d", &choice);
        
        if (choice == 1){
            printf("Enter to add: ");
            scanf("%d", &new);
            size++;
            tmp = (int*)realloc(list, size * sizeof(int));
            if (tmp != NULL){
                list = tmp;
                list[size - 1] = new;
                printf("Has been added\n");
            } else {
                printf("Error realloc\n");
                size--;
            }

        } else if (choice == 2){
            if (size == 0){
                printf("Empty\n");
            } else {
                printf("Enter to delete: ", size - 1);
                scanf("%d", &index);
                if ((index >= 0) && (index < size)){
                    for (int i = index; i < size - 1; i++){
                        list[i] = list[i + 1];
                    }
                    size--;
                    tmp = (int*)realloc(list, size * sizeof(int));
                    if (tmp != NULL){
                        list = tmp;
                    }
                    printf("Has been deleted\n");
                } else {
                    printf("Invalid index\n");
                }
            }

        } else if (choice == 3){
            if (size == 0){
                printf("Empty\n");
            } else {
                printf("List: ");
                for (int i = 0; i < size; i++){
                    printf("%d ", list[i]);
                }
                printf("\n");
            }

        } else if (choice == 4){
            printf("Enter size: ");
            scanf("%d", &nsize);
            tmp = (int*)realloc(list, nsize * sizeof(int));
            if (tmp != NULL){
                list = tmp;
                size = nsize;
                printf("Changed to %d\n", size);
            } else {
                printf("Error realloc\n");
            }
        }
        
    } while (choice != 0);
    
    free(list);
    list = NULL;
    
    return 0;
}