#ifndef ESTRUTURA_H
#define ESTRUTURA_H

typedef struct{
    char nomeSintoma[30];
    struct sintoma *proximoSintoma;
}sintoma;

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


#endif // ESTRUTURA
