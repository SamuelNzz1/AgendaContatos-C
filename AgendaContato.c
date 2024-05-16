//Aluno: Samuel Novais de Oliveira 18/06;


struct agenda{
	
	char nome[50], numero[13];
	
};

#include<string.h>
#define meio 50
#define lim 101
#include<stdio.h>
#include<conio.c>
#include<windows.h> 
#include<locale.h>
#include<conio.h>
  int main(){
  	setlocale(LC_ALL, "portuguese");
  	struct agenda contatos[lim];
  	int  ct3 = 0, ct2 = 0, ct = 0, i = 1,auxI = 0,  escoU = 0, escoU3 = 0,c = 1, ctrRE[lim] = {0, 0, 0, 0, 0, 0}, c2 = 1;
  	char procur[50], escoU2[5] = "";	
		
		  do{
		  	system("cls");
  			system("color 07");
		gotoxy(50,1);
  		printf("Digite o que deseja fazer: ");	
  		gotoxy(50,2);
  		printf("\n(1) Adicionar Contato.");
  		gotoxy(50,3);
		printf("\n(2) Checar contato / Alterar.");	
  		gotoxy(50,4);
		printf("\n(3) Listar contatos.");
		gotoxy(50,5);
		printf("\n(4) Remover contato.");
		gotoxy(50,6);
		printf("\n(5) Sair.");
		
		fflush(stdin);
		gotoxy(76,1);
		scanf("%d", &escoU);	
		system("cls");	
		
		if(escoU != 5 && escoU > 0){  //fast :)
		switch(escoU){
			case 1:{
				if(i > 5){
					clrscr();
					system("color 07");
					gotoxy(45,1);
					printf("Agenda cheia, apague algum contato antes!\n\n");
					system("pause");
					system("cls");
					break;
				}
				system("color 07");
				gotoxy(40, 1);
				printf("Adicione as informações do contato:");			
				gotoxy(40, 3);	
				textcolor(15);		
				printf("Nome:");
				textbackground(15);
				printf("                 ");
				gotoxy(45, 3);
				
				textcolor(0);
				fflush(stdin);
				gets(contatos[i].nome);
				
				gotoxy(38, 4);
				
				textcolor(15);
				textbackground(0);
				printf("Numero:");
			    textbackground(15);
				printf("                 ");
					
				gotoxy(45, 4);
				//fflush(stdin);
				textcolor(0);
				gets(contatos[i].numero);
				
			
				
				if(i > 1){
				for(ct = 1; ct < i; ct++){
					for(ct2=ct+1; ct2 <= i; ct2++){
						if( strcmp(contatos[ct].nome, contatos[ct2].nome) == 0 || strcmp(contatos[ct].numero, contatos[ct2].numero) == 0 ){
							if( strcmp(contatos[ct].nome, contatos[ct2].nome) == 0) strcpy(contatos[ct2].nome, "");
							if( strcmp(contatos[ct].numero, contatos[ct2].numero) == 0) strcpy(contatos[ct2].numero, "");
							
							
						clrscr();
						system("color 07");
						gotoxy(40,1);
						printf("Contato Já existente, por favor tentar novamente.");
						Sleep(3500);
						i--;
						
						
						}
					}
				}
				
				
				}
					i++;
			//	system("cls");
				
				
					break;
			
			}
			case 2:{
				system("color 07");
				gotoxy(1, 1);
				printf("Procurar contato");
				gotoxy(1, 3);
				printf("(Por número ou telefone):");
				
				textbackground(15);
				printf("             ");
				fflush(stdin);
				textcolor(0);
				gotoxy(26, 3);
				gets(procur);
				for(ct = 1; ct < i; ct++){
					if(strcmp(procur, contatos[ct].nome) == 0 || strcmp(procur, contatos[ct].numero) == 0){
						clrscr();
						system("color 07");
						gotoxy(1,1);
						printf("Nome: %s\nNumero: %s", contatos[ct].nome, contatos[ct].numero);
						gotoxy(1,3);
						printf("Você deseja alterar este contato?:\n(Sim)    (Não)");
						
						gotoxy(6,5);
						textbackground(15);
						printf("   ");
						textcolor(0);
						gotoxy(6,5);
						gets(escoU2);
						
						if( strcmp( strupr(escoU2), "SIM")==0 ){
						clrscr();
						system("color 07");
						gotoxy(1,1);
						printf("Alterar Número-(1)");
						gotoxy(1,2);
						printf("Alterar Nome-(2)");
						gotoxy(1,3);
						printf(":"); textbackground(15); printf("  "); fflush(stdin);
						textcolor(0); 
						gotoxy(2,3);
						scanf("%d", &escoU3);
							switch(escoU3){
								case 1:{
									
									clrscr();
									system("color 07");
									gotoxy(1,1);
									printf("Novo Numero:"); textbackground(15); printf("            ");
									fflush(stdin);
									gotoxy(13, 1);
									textcolor(0);
									gets(contatos[ct].numero);
									
									break;
								}
								case 2:{
									clrscr();
									system("color 07");
									gotoxy(1,1);
									printf("Novo nome:"); textbackground(15); printf("            ");
									fflush(stdin);
									textcolor(0);
									gotoxy(11, 1);
									gets(contatos[ct].nome);
									
									break;
								}
							}
							
				        }
					
					break;}
					}
					
					if(strcmp(escoU2, "")==0){
						clrscr();
						system("color 07");
						gotoxy(1,1);
						printf("Contato não encontrado, favor, tentar novamente.");
						printf("\n\n");
						system("pause");
						
					}
					strcpy(escoU2, "");
					
					 
				 
			
				//clrscr();
				break;
			}
			case 3:{
				system("color 07");
				//c2 = 1;
				gotoxy(1,1);
				if(i == 1){
					clrscr();
					system("color 07");
					gotoxy(1,1);
					printf("Agenda ainda vazia...");
					printf("\n\n");		
					system("pause");
					clrscr();
					break;		
				}
				for (ct = 1; ct < i; ct++){
					
					
						printf("Nome: %s\nNumero: %s", contatos[ct].nome, contatos[ct].numero);
						printf("\n\n");
					
					
					
				
				
				}
				
				
				
				getch();
			//	clrscr();
				break;
			}
			case 4:{
				system("color 07");
				gotoxy(1, 1);
				printf("Procurar contato para a exclusão.");
				gotoxy(1, 3);
				printf("(Por número ou telefone):"); textbackground(15); printf("              ");
				fflush(stdin);
				gotoxy(26, 3);
				textcolor(0);
				gets(procur);
				clrscr();
				auxI = i;
				for(ct = 1; ct < i; ct++){
						if(strcmp(procur, contatos[ct].nome) == 0 || strcmp(procur, contatos[ct].numero) == 0){
					 		if(ct == i) i--;	
								else{
									for(ct3 = ct+1; ct3 < i; ct3++){
										strcpy(contatos[ct].nome, contatos[ct3].nome);
										strcpy(contatos[ct].numero, contatos[ct3].numero);	
									}
								i--;
								}
							
						}  
							
										
				}if(auxI == i){
					clrscr();
					system("color 07");
					gotoxy(1, 1);
					printf("Numero não encontrado, favor, tentar novamente.\n\n");
					system("pause");
					
					clrscr();
				}
				
					
					
				
				
			//	clrscr();
			break;}
			case 5:{
				return 0;
			
			} 
			
			default:{
				
				gotoxy(1,1);
				printf("Digite uma opção valida!.\n\n");
				
				system("pause");
				//1clrscr();
			}
			
			
		}
		}
		
		
		
		
		
		}while(escoU != 5);	
  		
  
  
  
  
  return 0;
  }
