#include <stdio.h>
#include <string.h>


/**/
void limpar_buffer(void) {
	int c;
//getchar() lê um caractere de stdin e descarta
	while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
	char nome[100];

	printf("Coloque o seu nome inteiro: \n");
	fgets(nome, sizeof(nome), stdin);

/*strchr procura '\n' em "nome"*/

	if (strchr(nome, '\n') == NULL) {
		limpar_buffer();	

}

	nome[strcspn(nome, "\n")] = '\0';

	printf("Seu nome é: %s\n", nome);

	printf("%lu\n", sizeof(nome));

	return 0;
}
