def main():
    i = 2
    #float('-inf') == INT_MIN
    maior = float('-inf')

    entrada = input().split()

    while i >= 0:
        valor = int(entrada[i])
        if valor > maior:
            maior = valor
        i -= 1
    
    print(f"{maior} eh o maior")

main()
