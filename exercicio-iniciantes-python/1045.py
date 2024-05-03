
#save in decrescent order
def bubble_sort(entrada):
    n = len(entrada)

    for i in range(n):
        for j in range(0, n - i - 1):
            #in order to save in crescent order you need to change the signal to ">"
            if(entrada[j] < entrada[j + 1]):
                aux = entrada[j]
                entrada[j] = entrada[j + 1]
                entrada[j + 1] = aux
    return

def main():
    entrada = list(map(float,input().split()))

    bubble_sort(entrada)

    '''
    for i in range(len(entrada)):
        print(entrada[i], end = " ")
    print("")
    '''

    if (entrada[0] >= entrada[1] + entrada[2]):
        print("NAO FORMA TRIANGULO")
        return
    
    if(entrada[0]**2 == (entrada[1]**2 + entrada[2]**2)):
        print("TRIANGULO RETANGULO")
    
    if(entrada[0]**2 > (entrada[1]**2 + entrada[2]**2)):
        print("TRANGULO OBTUSANGULO")
    
    if(entrada[0]**2 < (entrada[1]**2 + entrada[2]**2)):
        print("TRANGULO ACUTANGULO")

    if(entrada[0] == entrada[1] == entrada[2]):
        print("TRIANGULO EQUILATERO")
    
    if((entrada[0] == entrada[1] and entrada[0] != entrada[2]) or (entrada[0] == entrada[2] and entrada[0] != entrada[1]) or (entrada[2] == entrada[1] and entrada[2] != entrada[0])):
        print("TRIANGULO ISOCELES")
    
    return

main()