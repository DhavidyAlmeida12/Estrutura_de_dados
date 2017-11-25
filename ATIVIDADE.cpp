#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define m 10

struct Pilha {
int topo;
float nota[m];
}; 
struct Pilha P;

void iniciaPilha(struct Pilha *P){
P->topo= -1;
}

void empilhar(struct Pilha *P, float x){
if (P->topo == m-1)
printf("Pilha Cheia");
else{
P->topo++;
P->nota[P->topo]=x;
}
}
void exibir (struct Pilha *P){
	int x;
	if (P->nota==0)
	printf("LISTA VAZIA !\n");
	else 
	
	for (x=0;x<P->topo;x++){
		printf ("nota %0.1f\n",P->nota[x]);
	
}
	printf ("nota %0.1f\n",P->nota[x]);
 }
 
	void localvalor (struct Pilha *P){
	int x, y, j;

	printf("LOCALIZAR NÓ PELO VALOR: ");
	scanf("%d", &j);
	y = 0;
	for (x=0;x<m;x++){
		if (P->topo == 0){
			printf("\n\tERRO - LISTA VAZIA!\n\n");
			break;
		}
		else if (y[P->nota] == j){
			printf("\nNÓ: %d\n\n", y);
			break;
		}
		else if (y == m-1){
			printf("\n\tERRO - NÃO ACHEI ESSE VALOR!\n\n");
		}
		y++;
	}
}
	void ValordoNo (struct Pilha *P){
	int x, y, con;
	printf("MOSTRAR O VALOR DO SEGUINTE NÓ: ");
	scanf("%d", &con);
	y = 0;
	for (x=0;x<m;x++){
		if (P->topo == 0){
			printf("\n\tERRO - LISTA VAZIA!\n\n");
			break;
		}
		else if (con == y){
			printf("\tNOTA\t:  %.1f\n\n", y[P->nota]);
			break;
		}
		else if (y > P->topo){
			printf("\nNÃO ACHEI!\n\n");
		}
		y++;
	}
}
	
	
	
void desempilha(struct Pilha *P){
if (P->topo ==-1)
printf("Pilha Vazia");
else{
printf("\tItem Excluido!\n\n");
system("pause");
system("cls");
P->topo--;
}
}
void menorMaior (struct Pilha *P){
	int x=0,menor;
	int y,maior, aux;
	if (P->topo == 0)
		printf("\t\t  ERRO - LISTA VAZIA!\n\n");
	menor = x[P->nota];
	maior = x[P->nota];
    for (x=0;x<=P->topo;x++){
    	if (x[P->nota] < menor){
    		menor = x[P->nota];
		}
	} printf("Menor valor : %d\n",menor);
	
       for (y=0;y<=P->topo;y++){
		if (y[P->nota] > maior){
			maior = y[P->nota];
	    
		}
	 } printf("Maior valor : %d\n",maior); 
	

}

int topo(struct Pilha *P){
int x;
if (P->topo ==-1)
printf("Pilha Vazia\n");
else{
x = P->nota[P->topo];
printf("Topo = %d\n",x);
return(x);
}
}

void valorespar( struct Pilha *P){
	int x;
	if (P->topo ==-1) {
  printf("Pilha Vazia\n");
}
	for (x=0;x<=P->topo;x++){
		if (x%2==0){
			printf("X: %d\n", x);
			printf("Nota: %.1f\n", P->nota[x]);
		}
	}
}


void ordem (struct Pilha *P){
	int  i, j, aux;
	int x;
	if (P->topo == 0){
		printf("\t\tERRO - LISTA VAZIA!\n\n");
	}
	else {
		for (i=0;i<=P->topo;i++){
			for(j=i;j<=P->topo;j++){
				if (P->nota[i]>P->nota[j]){
					aux = P->nota[i];
					P->nota[i] = P->nota[j];
					P->nota[j] = aux;
				}
			}
		}
			for (x=0;x<=P->topo;x++){
			printf("\t\t  NOTA   :%.1f\n", x[P->nota]);
		
		}
	}
}
int  menu() {
int r;
printf ("0 – SAIR\n");
printf ("1 – EMPILHAR\n");
printf ("2 – DESEMPILHAR\n");
printf ("3 – EXIBIR A PILHA\n");
printf ("4 – LOCALIZAR O NÓ QUE CONTÉM UM DETERMINADO VALOR\n");
printf ("5 – MOSTRA O VALOR DE UM DETERMINADO NÓ\n");
printf ("6 – MOSTRA O MAIOR E O MENOR VALOR DA PILHA\n");
printf ("7 – MOSTRA O ELEMENTO DO TOPO\n");
printf ("8 – MOSTRA OS ELEMENTOS PARES DA PILHA\n");
printf ("9 – ORDENAR PILHA DE FORMA CRESCENTE\n\n");

printf ("DIGITE SUA OPÇÃO: ");
scanf ("%d",&r);
return r;
}


int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
  
  int r, x;
  iniciaPilha(&P);
  
  while (r != 0){
  	if (r == 1 ){
  		system("cls");
  		printf("Empilhe : ");
  		scanf("%0.1f",&x);
  		 empilhar(&P,x);
  		system("cls");
	  } else if (r==2){
	  	system ("cls");
	    desempilha(&P);
	  }else if (r==3){
	  	system ("cls");
	  	exibir(&P);
	  	system ("pause");
	  	system ("cls");
	  }else if (r==4){
	  	system ("cls");
	  	localvalor(&P);
	  	system ("pause");
	  	system ("cls");
	  }else if (r==5){
	 	system ("cls");
	 ValordoNo (&P);
	  system ("pause");
	  }else if (r== 6){
	  	system("cls"); 
	  	menorMaior(&P);
	  	system("pause");
	  }
	   else if (r==7){
	  	system("cls");
	  	topo(&P);
	  	system("pause");
	  } 
	  else if (r==8){
	  	system ("cls");
	  	valorespar(&P);
	  	system ("pause");
	  }
	  else if (r = 9){
	  	system("cls");
	  	ordem(&P);
	}
	  r = menu();
  }	
	
	
	
	
}
