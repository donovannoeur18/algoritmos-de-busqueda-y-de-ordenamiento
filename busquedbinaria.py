def busqueda_binaria(lista_ordenada, objetivo):
    
    bajo = 0
    alto = len(lista_ordenada) - 1

    while bajo <= alto:
        medio = (bajo + alto) // 2 

        if lista_ordenada[medio] == objetivo:
            return medio  
        elif objetivo < lista_ordenada[medio]:
            alto = medio - 1 
        else: 
            bajo = medio + 1  

    return -1 
