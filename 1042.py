import copy

def insertion_sort(entrada):
    for i in range(1, len(entrada)):
        key = entrada[i]
        j = i - 1

        while(j >= 0 and entrada[j] > key):
            entrada[j + 1] = entrada[j]
            j -= 1
        
        entrada[j + 1] = key

def main():
    entrada = list(map(int,input().split()))

    copia = copy.deepcopy(entrada)

    insertion_sort(entrada)

    #print(f"{entrada[0]}\n{entrada[1]}\n{entrada[2]}")

    for i in range(0, len(entrada)):
        print(f"{entrada[i]}")
    
    print("")

    #printar uma lista de trás pra frente
    #for i in range(len(entrada) - 1, - 1, - 1):
    #    print(f"{entrada[i]}")

    for i in range(0, len(copia)):
        print(f"{copia[i]}")

main()