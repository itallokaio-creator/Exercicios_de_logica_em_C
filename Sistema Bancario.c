#include<stdio.h>
int main(){
	
	float saldoContaA=1000,saldoContaB=1000,entrada,saida,transferido;
	int op1,op2,op3;

	printf("\n-----------------------------------------------------------");
	do{
		printf("\n\nSISTEMA BANCARIO");
		printf("\n\nSelecione\n\n1 - Consultar saldos\n2 - Realizar deposito\n3 - Realizar saque\n4 - Realizar transferencia\n5 - Sair\n\n= ");
		scanf("%d",&op1);
		switch(op1){
			case 1:
				printf("\n------------------------------------------------------------");
				printf("\n\nCONSULTAR SALDO");
				printf("\n\nSelecione uma conta: \n\n1- Conta A\n2- Conta B\n\n= ");
				scanf("%d",&op2);
				switch(op2){
					case 1:
						printf("\nConta A\n\nSaldo: R$ %.2f\n",saldoContaA);
						printf("\n------------------------------------------------------------");
					break;
					case 2:
					printf("\nConta B\n\nSaldo: R$ %.2f\n",saldoContaB);
					printf("\n------------------------------------------------------------");
					break;
					default:
						printf("\nConta inexistente\n\nOperacao cancelada.\n");
						printf("\n------------------------------------------------------------");
					break;
				}
			break;
			case 2:
				printf("\n------------------------------------------------------------");
				printf("\n\nREALIZAR DEPOSITO");
				printf("\n\nSelecione uma conta: \n\n1- Conta A\n2- Conta B\n\n= ");
				scanf("%d",&op2);
				switch(op2){
					case 1:
						printf("\nConta A");
						printf("\n\nValor a ser depositado: R$ ");
						scanf("%f",&entrada);
						if(entrada<=0){
							printf("\n\nOperacao invalida.\n");
							printf("\n------------------------------------------------------------");			
						}else{
							saldoContaA=saldoContaA+entrada;
							printf("\nR$ %.2f depositados com sucesso.\n",entrada);
							printf("\n------------------------------------------------------------");
						}
					break;
					case 2:
					printf("\n\nConta B");
					printf("\n\nValor a ser depositado: R$ ");
						scanf("%f",&entrada);
						if(entrada<=0){
							printf("\n\nOperacao invalida.\n");
							printf("\n------------------------------------------------------------");
						}else{
							saldoContaB=saldoContaB+entrada;
							printf("\nR$ %.2f depositados com sucesso.\n",entrada);
							printf("\n------------------------------------------------------------");
						}
					break;
					default:
						printf("\nConta inexistente\n\nOperacao cancelada.");
						printf("\n------------------------------------------------------------");
					break;
				}
			break;
			case 3:
				printf("\n------------------------------------------------------------");
				printf("\n\nREALIZAR SAQUE");
				printf("\n\nSelecione uma conta: \n\n1- Conta A\n2- Conta B\n\n= ");
				scanf("%d",&op2);
				switch(op2){
					case 1:
						printf("\nSAQUE");
						printf("\n\nValor a ser sacado: R$ ");
						scanf("%f",&saida);
						if(saida<=0){
							printf("\nOperacao invalida.\n");
							printf("\n------------------------------------------------------------");
						}else if(saida>saldoContaA){
							printf("\nSaldo insuficiente\n");
							printf("\n------------------------------------------------------------");
						}else{
							saldoContaA=saldoContaA-saida;
							printf("\nR$ %.2f Sacado com sucesso.\n",saida);
							printf("\n------------------------------------------------------------");
						}
					break;
					case 2:
						printf("\nSAQUE");
						printf("\n\nValor a ser sacado: R$ ");
						scanf("%f",&saida);
						if(saida<=0){
							printf("\nOperacao invalida.\n");
							printf("\n------------------------------------------------------------");
						}else if(saida>saldoContaB){
							printf("\nSaldo insuficiente.\n");
							printf("\n------------------------------------------------------------");
						}else{
							saldoContaA=saldoContaB-saida;
							printf("\nR$ %.2f Sacado com sucesso.\n",saida);
							printf("\n------------------------------------------------------------");
						} 
					break;
					default:
						printf("\nConta inexistente\n\nOperacao cancelada.\n");
						printf("\n------------------------------------------------------------");
					break;
				}
			break;
			case 4:
				printf("\n------------------------------------------------------------");
				printf("\n\nREALIZAR TRANSFERENCIA");
				printf("\n\nSelecione uma conta: \n\n1- Conta A\n2- Conta B\n\n= ");
				scanf("%d",&op2);
				switch(op2){
					case 1:
					printf("\nSelecione a conta para transferencia: \n\n1- Conta B\n\n= ");
					scanf("%d",&op3);
					switch(op3){
						case 1:
							printf("\nValor a ser transferido: R$ ");
							scanf("%f",&transferido);
							if(transferido>saldoContaA){
								printf("\nSaldo insuficiente");
								printf("\n------------------------------------------------------------");
							}else if(transferido<=0){
								printf("\nOperacao invalida");
								printf("\n------------------------------------------------------------");
							}else{
								printf("\n\nTransferencia realizada com sucesso");
								printf("\n------------------------------------------------------------");
							saldoContaA=saldoContaA-transferido;
							saldoContaB=saldoContaB-transferido;
							}
						break;
						default:
							printf("\nOperacao invalida\n");
							printf("\n------------------------------------------------------------");
						break;
					}
					break;
					case 2:
					printf("\nSelecione a conta para transferencia: \n\n1- Conta A\n\n= ");
					scanf("%d",&op3);
					switch(op3){
						case 1:
							printf("\nValor a ser transferido: R$ ");
							scanf("%f",&transferido);
							if(transferido>saldoContaA){
								printf("\nSaldo insuficiente");
								printf("\n------------------------------------------------------------");
							}else if(transferido<=0){
								printf("\nOperacao invalida");
								printf("\n------------------------------------------------------------");
							}else{
								printf("\n\nTransferencia realizada com sucesso");
								printf("\n------------------------------------------------------------");
							saldoContaA=saldoContaA-transferido;
							saldoContaB=saldoContaB-transferido;
							}
						break;
						default:
							printf("\nOperacao invalida\n");
							printf("\n------------------------------------------------------------");
						break;
					}
					break;
					default:
						printf("\nOperacao invalida\n");
						printf("\n------------------------------------------------------------");
					break;
				}
			break;
			case 5:
				printf("\n------------------------------------------------------------");
				printf("\n\nSALDOS FINAIS\n\nConta A : %.2f\n\nConta B: %.2f",saldoContaA,saldoContaB);
				printf("\n\nSaindo...\n");
			break;
			default:
				printf("\nOperacao invalida\n");
				printf("\n------------------------------------------------------------");
			break;
		}
	}while(op1!=5);
	return 0;
}
