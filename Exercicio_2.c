#include <stdio.h>
#include <string.h>

int main(){ // Inicio do codigo

	// Declaracao char e strings
    char nome_completo[100], endereco[50], complemento[50], bairro[50], estado[10],cidade[50], data_nasc[50], receber_boletos, email[100], data[20];
    // Declaracao inteiros
    int num_casa, cep, ddd1, ddd2, tel_res, tel_cel, cpf, cnpj, insc_estadual, insc_municipal, cnae, contato_resp, tel_com, quant_carros = 1, i;
	
	/* Receber as entradas */
	
    printf("Razao Social e Nome Completo: ");
    fflush(stdin);
    scanf("%[^\n]s", &nome_completo); // Recebe o nome
    printf("Endereco: ");
    fflush(stdin);
    scanf("%[^\n]s", &endereco); // Recebe o endereco
    printf("Numero: ");
    scanf("%d", &num_casa); // Recebe o numero
    printf("Complemento: ");
    fflush(stdin);
    scanf("%[^\n]s", &complemento); // Recebe o complemento
    printf("Bairro: ");
    fflush(stdin);
    scanf("%[^\n]s", &bairro); // Recebe o bairro
    printf("CEP: ");
    scanf("%d", &cep); // Recebe o CEP
    printf("Estado: "); 
    fflush(stdin);
    scanf("%[^\n]s", &estado); // Recebe o estado
    printf("Cidade: ");
    fflush(stdin);
    scanf("%[^\n]s", &cidade); // Recebe a cidade
    printf("--Telefone Residencial ou Comercial--\n");
    printf("DDD: ");
    scanf("%d", &ddd1); // Recebe DDD do telefone residencial
    printf("Telefone: ");
    scanf("%d", &tel_res); // Recebe o numero do telefone residencial
    printf("--Telefone Celular--\n");
    printf("DDD: ");
    scanf("%d", &ddd2); // Recebe o DDD do telefone celular
    printf("Telefone: ");
    scanf("%d", &tel_cel); // Recebe o numero do telefone celular
    printf("CPF: ");
    scanf("%d", &cpf); // Recebe o CPF
    printf("CNPJ: ");
    scanf("%d", &cnpj); // Recebe o CNPJ
    printf("Insc. Estadual: ");
    scanf("%d", &insc_estadual); // Recebe a inscricao estadual
    printf("Insc. Municipal: ");
    scanf("%d", &insc_municipal); // Recebe a inscricao municipal
    printf("CNAE: ");
    scanf("%d", &cnae); // Recebe o CNAE
    printf("Data de Nascimento: ");
    fflush(stdin);
    scanf("%s", &data_nasc); // Recebe a data de nascimento
    printf("Deseja receber os proximos boletos por e-mail? [s/n] ");
    fflush(stdin);
    scanf(" %c", &receber_boletos); // Recebe a resposta se o usuario deseja receber boletos por email
    printf("E-mail: ");
    fflush(stdin);
    scanf("%s", &email); // Recebe o e-mail
    printf("Contado do responsavel: ");
    scanf("%d", &contato_resp); // Recebe o contato do responsavel
    printf("Telefone comercial: ");
    scanf("%d", &tel_com); // Recebe o telefone comercial
    printf("Data: ");
    fflush(stdin);
    scanf("%s", &data); // Recebe a data
    printf("Quantos carros deseja cadastrar? [MAX.: 3]  ");
    scanf("%d", &quant_carros); // Recebe o numero de carros que o usuario deseja cadastrar 

	// Struct para cadastrar mais de um veiculo
    struct Carros {
        char placa[7], modelo[50], cor[50]; // Declaracao das strings
        int ano; // Declaracao do ano do tipo inteiro
    };

    struct Carros carro[quant_carros];
    
	// For que le as informacoes dos carros
    for (i = 0; i<quant_carros; i++){ // Roda de acordo com o numero de carros que o usuario declarou que vai cadastrar
        printf("---%do carro---\n", i+1);
        printf("Placa: ");
        fflush(stdin);
        scanf("%s", &carro[i].placa); // Recebe a placa do carro
        printf("Modelo: ");
        fflush(stdin);
        scanf("%[^\n]s", &carro[i].modelo); // Recebe o modelo do carro
        printf("Ano: ");
        scanf("%d", &carro[i].ano); // Recebe o ano do carro
        printf("Cor: ");
        fflush(stdin);
        scanf("%s", &carro[i].cor); // Recebe a cor do carro
    }


	system("cls"); // Limpa a tela

	// Layout do formulario com as informacoes
	
    printf("DADOS DO CREDENCIADO\n\n");
    printf("Razao Social e Nome Completo:\n");
    printf("%s\n\n", nome_completo);
    
    printf("Endereco:\n");
    printf("%s\n\n", endereco);

    printf("Numero:\t");
    printf("Complemento:\t");
    printf("Bairro:\n");
    printf("%d\t", num_casa);
    printf("%s\t", complemento);
    printf("%s\n\n", bairro);
    
    printf("CEP:\t\t");
    printf("Estado: \t");
    printf("Cidade:\n");
    printf("%d\t", cep);
    printf("%s\t\t", estado);
    printf("%s\n\n", cidade);

    printf("DDD\t");
    printf("Tel. Res. ou Com.\t");
    printf("DDD\t");
    printf("Tel. Celular\n");
    printf("%d\t", ddd1);
    printf("%d\t\t", tel_res);
    printf("%d\t", ddd2);
    printf("%d\n\n", tel_cel);

    printf("CPF:\t\t");
    printf("CNPJ:\n");
    printf("%d\t", cpf);
    printf("%d\n\n", cnpj);
    
    printf("Insc. Estadual:\t");
    printf("Insc. Municipal:\n");
    printf("%d\t", insc_estadual);
    printf("%d\n\n", insc_municipal);

    printf("CNAE:\t\t");
    printf("Data de Nasc.:\t");
    printf("Deseja receber os proximos boletos por e-mail?\n");
    printf("%d\t", cnae);
    printf("%s\t\t", data_nasc);
    if (receber_boletos == 's'){ // Se a resposta usuario a "receber boletos por email" for sim:
        printf("SIM [ X ]\tNAO [  ]\n\n"); // X marcado no SIM
    } else { 					// Se não
        printf("SIM [  ]\t NAO [ X ]\n\n"); // X marcado no nao
    }

    printf("E-mail:\n");
    printf("%s\n\n", email);

    printf("Contato do Responsavel:\t");
    printf("Telefone Comercial:\n");
    printf("%d\t\t", contato_resp);
    printf("%d\n\n", tel_com);

    printf("Data:\t\t");
    printf("____________________________\n");
    printf("%s\t", data);
    printf("Assinatura do Responsavel\n\n");
    
    printf("DADOS DOS VEICULOS\n\n");
    printf("Placa:\t\t");
    printf("Modelo:\t");
    printf("Ano:\t");
    printf("Cor:\n");
    
    for (i = 0; i<quant_carros; i++){ // for que imprime as informacoes de todos os carros cadastrados
        printf("%s\t\t", carro[i].placa);
        printf("%s\t", carro[i].modelo);
        printf("%d\t", carro[i].ano);
        printf("%s\n", carro[i].cor);
    } 

    return 0;
} // Fim do codigo
