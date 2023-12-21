#include <stdio.h>

int main(){

int i,n,min,max,moy,som;

printf("Donner N : ");
scanf("%d",&n);

int Tab[n] = {0};

for(i = 0; i < n; i++){
    
    printf("Donner la valeur du %d élément : ",i+1);
    scanf("%d",&Tab[i]);
    som = som + Tab[i];

}

moy = som / n;
max  = 0;
min = 0;

 for(i = 1; i < n ; i++){
    
    if(Tab[max] < Tab[i]){

        max = i;

    }else if(Tab[min] > Tab[i]){

        min = i;

    }
        }
        
printf("La moyenne = %d\n",moy);
printf("La max = %d\n",Tab[max]);
printf("La min = %d\n",Tab[min]);

    return 0;
}                                                                                
