#include<locale.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int opcao,wesley=0,wpor,douglas=0,dpor,luciano=0,lpor,nulo=0,nulopor,branco=0,brancopor,total=0;
	
	do
	{
	
		printf("#################################\n");
	    printf("## TRIBUNAL SUPERIOR ELEITORAL ##\n");
	    printf("#################################\n\n");
	
	    printf("Olá cidadão, selecione seu voto:\n\n 1)Candidato Wesley Martins\n 2)Candidato Douglas Sant Anna\n 3)Candidato Luciano Donizeti\n 4)Nulo\n 5)Branco\n 6)Estatísticas Gerais\n 0)Sair\n\nVoto: ");
	    scanf("%d",&opcao);
	    
	    switch(opcao)
	    {
	    	case 0:
	    		printf("\n OBRIGADO PELO SEU VOTO\n\n");
	    		break;
			
			case 1:
	    		printf("\n VOTO PARA WESLEY MARTINS\n\n");
	    		wesley=wesley+1;
	    		total++;
				system("pause");
	    		system("cls");
	    		break;
	    	
			case 2:
				printf("\n VOTO PARA DOUGLAS SANT ANNA\n\n");
	    		douglas++;
	    		total++;
				system("pause");
	    		system("cls");
	    		break;
	    		
	    	case 3:
				printf("\n VOTO PARA LUCIANO DONIZETI\n\n");
	    		luciano++;
	    		total++;
				system("pause");
	    		system("cls");
	    		break;
	    		
	    	case 4:
				printf("\n VOTO NULO\n\n");
	    		nulo++;
	    		total++;
				system("pause");
	    		system("cls");
	    		break;
	    		
	    	case 5:
				printf("\n VOTO BRANCO\n\n");
	    		branco++;
	    		total++;
				system("pause");
	    		system("cls");
	    		break;
	    		
	    	case 6:
				
				wpor=(wesley*100)/total;
				dpor=(douglas*100)/total;
				lpor=(luciano*100)/total;
				nulopor=(nulo*100)/total;
				brancopor=branco*100/total;
				printf("\n a)Votos de cada candidato:\n WESLEY MARTINS: %d\n DOUGLAS SANT ANNA: %d\n LUCIANO DONIZETI: %d\n",wesley,douglas,luciano);
				printf("\n\n b)Porcentagem de votos nulos: %d por cento",nulopor);
				printf("\n\n c)Porcentagem de votos branco: %d por cento",brancopor);
				if(wesley>luciano&&wesley>douglas)
				{
					printf("\n\n d)O Candidato vencedor é: WESLEY MARTINS\n\n");
				}
				else if(luciano>douglas&&luciano>wesley)
				{
					printf("\n\n d)O Candidato vencedor é: LUCIANO DONIZETI\n\n");
				}
				else if(douglas>luciano&&douglas>wesley)
				{
					printf("\n\n d)O Candidato vencedor é: DOUGLAS SANT ANNA\n\n");
				}
				else
				{
					printf("\n\n d)NÃO HOUVERAM VENCEDORES, HAVERÁ 2° TURNO\n\n");
				}
				system("pause");
				system("cls");
				break;
			
			default:
				printf("\n OPÇÃO INEXISTENTE\n\n");
				system("pause");
				system("cls");
		}
    }
    while(opcao!=0);
    
	return 0;
}
