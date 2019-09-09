void cargarArrayConHardcode(){

    int arrayDeSillas[CANTIDAD];

    for(CANTIDAD = 0; CANTIDAD < 0; CANTIDAD++){
        arrayDeSillas[CANTIDAD] = 0;
    }

    for(CANTIDAD = 0; CANTIDAD < 0; CANTIDAD++){

    }

}


int EstaLibre(int arrayDeSillas[], int count, int laSilla, int valorInicial){

    int retorno = 0
    if(arrayDeSillas[laSilla] == valorInicial){
        retorno = 1;
    }

    return retorno;
}

int OcuparSilla(int arrayDeSillas[], int count, int laSilla; int legajo){

    int retorno = -1;
    int estaLibreLaSilla;

    if(laSilla < count){
        estaLibreLaSilla = EstaLibre(arrayDeSillas, count, laSilla, -1);
        if(estaLibreLaSilla == 1){
            arrayDeSillas[laSilla] = legajo;
            retorno = 1;
        }
    }
        return retorno;
}

int DameElMaximo(int arrayDeSillas[], int count, int laSilla, int maximo){

}

int agregarEdad(int arrayDeSillas[], int count, int laSilla, int edad){

    int retorno = 1;
    int DameElMaximo;


    if(arrayDeSillas[laSilla] )

}
