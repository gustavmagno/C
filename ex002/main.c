#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

	printf("O tamanho total do array é: %lu\n", sizeof(nome));
	printf("Seu nome tem %lu caracteres\n", strlen(nome));

	return 0;
}
