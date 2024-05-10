def main():
    entrada = int(input())

    horas = int(entrada/3600)

    if horas > 0:
        entrada %= 3600
    
    minutos = int(entrada/60)

    if minutos > 0:
        entrada %= 60

    segundos = int(entrada)

    print(f"{horas}:{minutos}:{segundos}")

main()