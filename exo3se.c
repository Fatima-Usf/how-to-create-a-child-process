#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

void executerQuelqueChose (void){
#define NB_ITERS 5
int i;
for (i = 0; i<NB_ITERS; i++){
printf("i = %d\n", i);
sleep(rand()%4);
}}

int main (){
    pid_t p;
	p=fork();
if (p>0){
printf("pid de pére p= %d\n", getpid());
sleep(30);

exit(0);}


else if (p==0){
printf("pid fils p= %d\n", getpid());
executerQuelqueChose ();
printf("p= %d\n", p);
exit(0);
}
else {
printf("echec");
exit(0);}

return 0;
}
