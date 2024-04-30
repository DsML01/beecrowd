def printar(anos, meses, dias):
    print(f"{anos} ano(s)\n{meses} mes(es)\n{dias} dia(s)")

def main():
    idade = int(input())

    anos = int(idade/365)

    if anos > 0:
        idade %= 365

    meses = int(idade/30)

    if meses > 0:
        idade %= 30
    
    dias = int(idade)

    printar(anos, meses, dias)

main()