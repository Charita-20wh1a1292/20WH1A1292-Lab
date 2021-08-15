#include<stdio.h>
#include<string.h>
main(){
   int i,j,n;
   char name[100][100],temp[100];
   printf("Enter number of names :\n");
   scanf("%d",&n);
   printf("Enter names in any order:\n");
   for(i=0;i<n;i++){
      scanf("%s",name[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(name[i],name[j])>0){
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",name[i]);
   }
}
