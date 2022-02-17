#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>

float result=0.0;
void questions();
void main(){



printf("Welcome To corona Survey !! \n");
printf("-----------------------------\n");
printf("\n\n");
printf("Press Y For Answering Yes And N For Answering No\n\n");
printf("Survey Will be displayed and you can answer the questions \n\n");

questions();










}
void questions(){
int i =0;
char  ans[7];

printf("1) Do you feel a sore throat ?\n");
printf("2) do you feel cough and sputum production ? \n");
printf("3) do you feel short of breathe or diffuclty in breating ?\n");
printf("4) do you feel fever > 37.8 C ? \n");
printf("5) Have You Had any contact with someone that is infected or suspected to be ? \n");
printf("6) Have You Had fever for more than 3 days > 37.8 C ? \n");
printf("7) Do You Feel faitge ? \n");
for (i=0;i<7;i++){
  scanf("%c",&ans[i]);
  fflush(stdin);
  //printf("Hello\n");
}

for (i=0;i<7;i++){
  if (ans[i]=='y'||ans[i]=='Y'){
    result+=14.28;
  }
  else result=result;
}





printf("There is A Precentege Of %0.2f %% That You Might Be Infected With Covid_19 ",result);
sleep(3);

}
