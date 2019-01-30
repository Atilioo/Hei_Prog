#ifndef SINTOMAS_H
#define SINTOMAS_H

typedef struct{
    char nomeSintoma[30];
    struct sintoma *proximoSintoma;
}sintoma;



#endif // SINTOMAS_H
