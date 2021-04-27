// Nome: João Victor Álvares
// Matrícula: UC21106304
// Curso: Engenharia de software

#include <stdio.h> 		// biblioteca principal em linguagem c, contém funções de entrada e saída
#include <locale.h> 		// biblioteca para usar a língua portuguesa
#include <stdlib.h> 		// biblioteca para mudar a cor do sistema
#include <string.h> 		// biblioteca para reconhecer o comando strlen
#include <ctype.h> 		// biblioteca para reconhecer o comando tolower

int main () { //ínicio do código
    setlocale(LC_ALL, "Portuguese");		// reconhecimento da língua portuguesa
    system("color 02"); 		// mudança de cor no sistema 
    
    int sessoes, idade, espectadores, i, maiorDeIdadeM=0, maiorDeIdadeF=0, crianca=0, adolescente=0, adulto=0, idoso=0, homem=0, mulher=0; 		// declarações de inteiro
    char filme[40], sexo, pessoas; 		// declarações de char
    
    printf("Seja bem vindo ao Cinemark!\n"); 		// boas vindas ao usuário
    printf("Quantas sessões de filme você deseja?"); 		// perguntar quantas sessões o usuário deseja
    scanf("%d", &sessoes); 		// reconhecer a pergunta acima e associar a sessões
    
    while(sessoes != 2) { 		// ínicio do while, aceitar exatamente 2
        printf("Quantas sessões de filme você deseja?"); 		// perguntar quantas sessões o usuário deseja novamente
        scanf("%d", &sessoes); 		// reconhecer a pergunta acima e associar a sessões
    } // final do while
    system("cls"); 		// limpar a tela no sistema
    fflush(stdin); 		// limpar o buffer de memória
    
    printf("Qual o filme?"); 		// perguntar o filme para o usuário
    fgets(filme,40,stdin); 		// reconhecer a pergunta acima, o fgets é necessário caso o filme tenha mais de uma palavra
    
	while(strlen(filme) <= 2) { 		// início do while, se o char filme tiver 2 ou menos caracteres deve perguntar o filme novamente ao usuário
        printf("Digite o nome do filme!\n"); 		// alertar o usúario
        printf("Qual o filme?"); 		// digite o nome do filme
        fgets(filme,40,stdin); 		// reconhecer a pergunta acima, o fgets é necessário caso o filme tenha mais de uma palavra
        } // final do while
        
        fflush(stdin); 		//limpar o buffer de memória
        system("cls"); 		// limpar a tela no sistema
    
    printf("Quantas pessoas assistirão ao filme? (Mínimo 10 pessoas)"); 		// perguntar o número de pessoas que verão o filme
    scanf("%d", &espectadores); 		// reconhecer a pergunta acima e associar a espectadores
    
    while(espectadores <= 9) { 		// ínicio do while, definindo que não pode abaixo de 10 pessoas
        printf("Mínimo 10 pessoas\n"); 		// alertando o usuário sobre o mínimo de pessoas
        printf("Quantas pessoas assistirão ao filme? (Mínimo 10 pessoas)"); 		// perguntando novamente ao usuário quantas pessoas assistirão ao filme 
        scanf("%d", &espectadores); 		// reconhecer a pergunta acima e associar a espectadores
    } // final do while
    system("cls"); 		// limpar a tela no sistema
      
        for(i = 1; i <= espectadores; i++) { 		// ínicio do for, o 'i' vai aumentando em uma unidade até chegar ao número de espectadores
            do { // ínicio do do while
                printf("Qual o sexo?"); 		// perguntar ao usuário qual o sexo, depende do número de espectadores
                fflush(stdin); 		// limpar o buffer de memória
                scanf("%c", &sexo); 		// reconhecer a pergunta acima e associar a sexo
                sexo = tolower(sexo); 		// reconhecer a resposta da pergunta sempre como 'm' ou 'f' MÍNUSCULO
            } while(sexo != 'm' && sexo != 'f'); 		// final do do while, enquanto for diferente de 'm' e 'f' vai perguntar eternamente
            if(sexo == 'm') { 		// ínicio do if, se sexo for masculino o sistema repete os homens
				homem++; 		// repetição de homens de acordo com o número de espectadores		
			}if(sexo == 'f') { 		// ínicio do if, se sexo for feminino o sistema repete as mulheres
				mulher++; 		//  repetição de mulheres de acordo com o número de espectadores
			} // final do if
			do { 		// ínicio do do while
                printf("Qual a idade?"); 		// perguntar ao usuário a idade, depende do número de espectadores
                scanf("%d", &idade); 		// reconhecer a pergunta acima e associar a idade
            } while(idade < 3 || idade > 100); 		// final do do while, se a idade não estiver entre 3 e 100 irá perguntar eternamente              
            if(idade >= 3 && idade <= 13) { 		// ínicio do if, se a idade for entre 3 e 13
                printf("Criança\n", crianca); 		// aparece crinça no sistema
                crianca++; 		// repetição de crianças de acordo com o número de espectadores
            } else if(idade >= 14 && idade <= 17) { 		// se a idade for entre 14 e 17
                printf("Adolescente\n", adolescente);		 // aparece adolescente no sistema
                adolescente++; 		// repetição de adolescentes de acordo com o número de espectadores
            } else if(idade >= 18 && idade <= 64) { 		// se a idade for entre 18 e 64
                printf("Adulto\n", adulto); 		// aparece adulto no sistema
                adulto++; 		// repetição de adultos de acordo com o número de espectadores
            } else if(idade >= 65 && idade <= 100) {		// se a idade for entre 65 e 100 
            	printf("Idoso\n", idoso); 		// aparece idoso no sistema
            	idoso++; 		// repetição de idosos de acordo com o número de espectadores
        	} 
		if(idade >= 18 && sexo == 'm') { 		// início do if, se a idade for igual ou maior de 18 e o sexo for 'm' o sistema repete o número de homens maiores de idade
			maiorDeIdadeM++; 		// repetição dos homens maiores de idade de acordo com o número de espectadores
		} // final do if 							
		if(idade >= 18 && sexo == 'f') {  		// ínicio do if, se a idade for igual ou maior de 18 e o sexo for 'f' o sistema repete o número de mulheres maiores de idade
			maiorDeIdadeF++; 		// repetição das mulheres maiores de idade de acordo com o número de espectadores 
		} // final do if		  	 
		} // final do for
					 
	fflush(stdin); 		// limpar o buffer
	system("cls"); 		// limpar a tela no sistema
		
		// tabela final	
		system("cls"); 		//limpar a tela
		printf("====================================\n"); 		// design da tabela
		printf("Seus dados:\n"); 		// aparecer 'Seus dados' e pular uma linha, no sistema
		printf("Filme: %s", filme); 		//mostrar o nome do filme
		printf("Pessoas que assistiram o filme: %d\n", espectadores); 		// número de pessoas que assistiram o filme
		printf("Número de crianças: %d\n", crianca); 		// indicar o número de crianças
		printf("Número de adolescentes: %d\n", adolescente); 		// indicar o número de adolescentes
		printf("Número de adultos: %d\n", adulto); 		// indicar o número de adultos
		printf("Número de idosos: %d\n", idoso); 		// indicar o número de idosos     
		printf("Número de homens: %d\n", homem); 		// indicar o número de homens
		printf("Número de mulheres: %d\n", mulher); 		// indicar o número de mulheres
		fflush(stdin); 		// limpar o buffer
		printf("Homens maiores de idade: %i\n", maiorDeIdadeM); 		// indicar o número de homens maiores de idade
		printf("Mulheres maiores de idade: %i\n", maiorDeIdadeF); 		// indicar o número de mulheres maiores de idade	
		printf("Muito obrigado pela presença, volte sempre!\n"); 		// mensagem de despedida
		printf("===================================="); 		// design da tabela	
// conforme descrito no livro código limpo, eu acredito que meu código possui uma boa escolha de nomes. 

return 0; 		// serve para informar ao compilador que ocorreu tudo certo com a função main()
} // final do código
