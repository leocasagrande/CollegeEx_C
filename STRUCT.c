#include <stdio.h>
#include <string.h>

#define FICHAS 10


int main(){
	
	struct Endereco{
    int numero, cep;
};
	
	struct Veiculo{
     char placa[20], modelo[50], cor[50];
     int ano;
};
	
	struct Pessoa{
    struct Endereco endereco;
    struct Veiculo veiculo[10];
    int idade;
    char nome[50];
};
		
    	struct Pessoa pessoa[FICHAS];
    			
		int i=0, n_carros[FICHAS], n_pessoas=0,j=0, menor=0, maior=0, ind_maior, ind_menor;
    	
        do{
        	printf("---INFORMACOES PESSOAIS---\n");
        	fflush(stdin);
            printf("Nome Social: ");
            scanf("%[^\n]s", &pessoa[i].nome);
            fflush(stdin);
            printf("Idade: ");
            scanf("%d",&pessoa[i].idade);
            fflush(stdin);
            printf("\n---ENDERECO---\n");
			printf("CEP: ");
			scanf("%d",&pessoa[i].endereco.cep);
			fflush(stdin);

    		printf("\nInforme a quantidade de carros deseja resgistrar: ");
    		scanf("%d", &n_carros[i]);
    		
    		for (j = 0; j<n_carros[i]; j++)
			{
        		printf("---VEICULO %d---\n", j+1);
        		fflush(stdin);
        		printf("Placa: ");
        		scanf("%s", &pessoa[i].veiculo[j].placa);
        		fflush(stdin);
        		printf("Modelo: ");
        		scanf("%[^\n]s", &pessoa[i].veiculo[j].modelo);
        		fflush(stdin);
        		printf("Cor: ");
        		scanf("%s", &pessoa[i].veiculo[j].cor);
        		fflush(stdin);
    		}			
			system("cls");
			n_pessoas++;
        	i++; 
        }
		while(i<FICHAS);

        for(i=0;i<n_pessoas;i++){
                        if(i==0){
                        menor=pessoa[i].idade;
                        maior=pessoa[i].idade;
                        }
                        if(pessoa[i].idade>maior){
                            maior=pessoa[i].idade;
                            ind_maior=i;
                        }
                        else if(pessoa[i].idade<menor){
                            menor=pessoa[i].idade;
                            ind_menor=i;
                        }
                    }
			
            printf("---PESSOA COM A MENOR IDADE---\n");
			printf("\nNome: %s\n",pessoa[ind_menor].nome);
			printf("\nCEP: %d\n",pessoa[ind_menor].endereco.cep);

                for(j=0;j<n_carros[ind_menor];j++){
                    printf("\n---VEICULO %d---\n", j+1);
                    printf("\nPlaca: %s\n", pessoa[ind_menor].veiculo[j].placa);
                    printf("\nModelo: %s\n", pessoa[ind_menor].veiculo[j].modelo);
                    printf("\nCor: %s\n", pessoa[ind_menor].veiculo[j].cor);

                }
			
            printf("\n---PESSOA COM A MAIOR IDADE---\n");
			printf("\nNome: %s\n",pessoa[ind_maior].nome);
			printf("\nCEP: %d\n",pessoa[ind_maior].endereco.cep);

                for(j=0;j<n_carros[ind_maior];j++){
                    printf("\n---VEICULO %d---\n", j+1);
                    printf("\nPlaca: %s\n", pessoa[ind_maior].veiculo[j].placa);
                    printf("\nModelo: %s\n", pessoa[ind_maior].veiculo[j].modelo);
                    printf("\nCor: %s\n", pessoa[ind_maior].veiculo[j].cor);

                }

	    return 0;
	}
