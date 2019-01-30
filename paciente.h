#ifndef PESSOA_H
#define PESSOA_H
#include "sintomas.h"

typedef enum{
    DESCONHECIDO = 0,
    BAIXORISCO = 1,
    MEDIORISCO = 2,
    ALTORISCO = 3,
}risco;
typedef struct{
    int idPaciente;
    int qtdsintoma;
    char nome[500];
    char endereco[1000];
    char cpf[15];
    risco classeRisco;
    sintoma* sintoma;

}paciente;

#endif // PESSOA_H

