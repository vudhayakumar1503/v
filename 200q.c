#include<stdio.h>
int main() 
{
  int l,i=1;
  char c;  
  FILE *fp=fopen("1q.c","r");
  if(fp==NULL) 
  {
    printf("Error opening file.\n");
    return 1;
  }
  printf("Enter the line number to delete: ");
  scanf("%d",&l);
  while(i<l&&(c=fgetc(fp))!=EOF) 
  {
    if(c=='\n') 
    {
      i++;
    }
  }
  while((c=fgetc(fp))!=EOF&&c!='\n') 
  {
  }
  while((c=fgetc(fp))!=EOF)
  {
    fputc(c,fp);
  }
  ftruncate(fileno(fp),ftell(fp));
  fclose(fp);
  return 0;
}
