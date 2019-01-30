#include"funcaoSintoma.h"

sintoma* criarSintoma(char* qualSintoma){
    sintoma* sintomaCriado = malloc(sizeof(sintoma));
    strcpy(sintomaCriado->nomeSintoma,qualSintoma);
    sintomaCriado->proximoSintoma = NULL;
    return sintomaCriado;
}
int adicionarSintomaAoPaciente(paciente* p1){

    char decisao='s';
    char sintomaPaciente[50];
    sintoma* novo;
    sintoma* proximo;

    do{
    printf("\nsintoma do %s: ",p1->nome);
    fflush(stdin);
    gets(sintomaPaciente);

    if(p1->qtdsintoma==0){
        p1->sintoma = criarSintoma(sintomaPaciente);
        proximo = p1->sintoma;
    }else{
        novo = criarSintoma(sintomaPaciente);
        proximo->proximoSintoma = novo;
        proximo = novo;
    }

    p1->qtdsintoma++;
    printf("deseja adicionar novo sintoma? (s/n): ");
    fflush(stdin);
    decisao = getchar();

    }while(decisao == 's');



}
int printarSintomas(paciente* p1){
    sintoma* proximo;
    proximo = p1->sintoma;
    while(proximo != NULL){
        printf("_%s_ ",proximo->nomeSintoma);
        proximo = proximo->proximoSintoma;
    }
}


int finalizar(paciente* p1){
    sintoma* sintomap = p1->sintoma;
    sintoma* prox = sintomap->proximoSintoma;

    while(sintomap != NULL){
        free(sintomap);

        sintomap = prox;
        if(sintomap != NULL)
            prox = prox->proximoSintoma;

    }


}


