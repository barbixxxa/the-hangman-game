#ifndef FUNCOESJF_H
	#define FUNCOESJF_H

linhah(n,x){
    int i;
    if ( n == "Jogo da Forca"){
	printf("\t\t\t");
	}
	for (i=0; i<strlen(n); i++){
		printf("%c",x);
	}
	printf("\n");
}

jogo(){
	// det palavra
	char palavra[10], a;
	int sorte;
	srand(time(NULL));
	sorte = rand() % 2
	if (sorte == 0) {
		strcpy(palavra, "Livro");
		}
	else if (sorte == 1) {
		strcpy(palavra, "Computador");
		}
	else {
		strcpy(palavra, "Monitor");
		}

	puts("A palavra ja foi escolhida. Diga uma letra qualquer.");
	a = getche();
	for(i=0; i<strlen(palavra); i++)

	}

}

config(comando){

	// Titulo
	printf("\n");
	linhah("Jogo da Forca",'-');
	puts("\t\t\tJogo da Forca");
	linhah("Jogo da Forca",'-');

	//subtitulo
	printf("\n\n");
	linhah("Configuracoes",'-');
	puts("Configuracoes");
	linhah("Configuracoes",'-');

	// menu
	printf("\n\n\n");
	puts("\t\t\t1 - Opcao1\n");
	puts("\t\t\t2 - Opcao2\n");
	puts("\t\t\t3 - Opcao3\n");
	puts("\t\t\t4 - Retornar ao menu");
	//

	//escolha
	printf("\n\n\n\n\n\n\n");
	printf("Digite o comando: ");
	comando = getche();
	if (comando == '1'){
		jogo();
	}
	else if(comando == '2'){
		config();
	}
	else if(comando == '3'){
		score();
	}
	else if(comando == '4'){
		printf("\n");
		mainmenu();
	}
	else{
		printf("\n\t\t\tComando Invalido.\n");
		return 0;
	}

}

score(){

	// Titulo
	printf("\n");
	linhah("Jogo da Forca",'-');
	puts("\t\t\tJogo da Forca");
	linhah("Jogo da Forca",'-');

	//subtitulo
	printf("\n\n");
	linhah("Scoreboard",'-');
	puts("Scoreboard");
	linhah("Scoreboard",'-');

	// menu
	char lugar[0][10];
	printf("\n\n\n");
	printf("\t\t\t1 - %s\n", lugar[0]);
	printf("\t\t\t2 - %s\n", lugar[1]);
	printf("\t\t\t3 - %s\n", lugar[2]);
	printf("\t\t\t4 - %s\n", lugar[3]);
	printf("\t\t\t5 - %s\n", lugar[4]);					// <<<< VER DEPOIS COMO FAZER
	printf("\t\t\t6 - %s\n", lugar[5]);
	printf("\t\t\t7 - %s\n", lugar[6]);
	printf("\t\t\t8 - %s\n", lugar[7]);
	printf("\t\t\t9 - %s\n", lugar[8]);
	printf("\t\t\t10 - %s\n", lugar[9]);
	//

	printf("\n\n\n\n");
	printf("Digite qualquer tecla para retornar ao menu.\n");
	getch();
	mainmenu();

}
mainmenu(comando) {


	//titulo

	linhah("Jogo da Forca",'-');
	puts("\t\t\tJogo da Forca");
	linhah("Jogo da Forca",'-');
	//

	// menu
	printf("\n\n\n\n\n");
	puts("\t\t\t1 - Jogar\n");
	puts("\t\t\t2 - Configuracoes\n");
	puts("\t\t\t3 - Scoreboard\n");
	puts("\t\t\t4 - Sair");
	printf("\n\n\n\n\n\n\n");
	//

	// escolhas
	printf("Digite o comando: ");
	comando = getche();
	if (comando == '1'){
		jogo();
	}
	else if(comando == '2'){
		config();
	}
	else if(comando == '3'){
		score();
	}
	else if(comando == '4'){
		return 0;
	}
	else{
		printf("\n\t\t\tComando Invalido.\n");
		return 0;
	}
}

#endif
