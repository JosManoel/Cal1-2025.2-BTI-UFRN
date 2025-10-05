#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){

  FILE *in;
  char input_file[] = "dados_reta.txt";
  
  // checking if file exists
  in = fopen(input_file,"r");
  if (in == NULL){
        printf("File does not exist\n");
        exit(EXIT_FAILURE);
        }
        
  char c;
  int n=0;
// n = Linecount
  while ((c = fgetc(in)) != EOF) {
    if (c == '\n') {
      n++;
    }
  }
  fclose(in);
  in = fopen(input_file,"r");// refreshing file pointer

  float x,y;
  float Sx=0,Sy=0,Sxx=0,Sxy=0;
  
  for(int i=1;i<=n;i++){
     fscanf(in,"%f %f\n",&x,&y);
     Sx += ;
     Sy += ;
     Sxx += ;
     Sxy += ;
  }
  float a,b;
  // f(x) = ax + b
  a = ;
  b = ;

  printf("f(x) = %f*x + %f\n",a,b);

  fclose(in);
  
  return 0;
}
