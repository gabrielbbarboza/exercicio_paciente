#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "paciente.h"

void alocacao_paciente(paciente_t *paciente, char *nome, short idade) {
    snprintf(paciente->nome, sizeof(paciente->nome), "%s", nome);
    paciente->idade = idade;

    int andar = (rand() % 5) + 1;        
    int leito_no_andar = (rand() % 10) + 1; 
    paciente->leito = (andar * 100) + leito_no_andar;

    printf("Paciente alocado: %s, Idade: %d, Leito: %d\n", paciente->nome, paciente->idade, paciente->leito);
}

int main() {
    srand(time(NULL));

    paciente_t paciente;

    alocacao_paciente(&paciente, "Jo�o da Silva", 45);

    return 0;
}
