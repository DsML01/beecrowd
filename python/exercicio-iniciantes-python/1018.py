def main():
    dinheiro = int(input())

    print(dinheiro)
    
    cedulas100 = int(dinheiro/100)
    
    print(f"{cedulas100} nota(s) de R$ 100,00")

    if(cedulas100 > 0):
        dinheiro %= 100
    
    cedulas50 = int(dinheiro/50)
    print(f"{cedulas50} nota(s) de R$ 50,00")
    
    if(cedulas50 > 0):
        dinheiro %= 50
    
    cedulas20 = int(dinheiro/20)
    print(f"{cedulas20} nota(s) de R$ 20,00")

    if(cedulas20 > 0):
        dinheiro %= 20
    
    cedulas10 = int(dinheiro/10)
    print(f"{cedulas10} nota(s) de R$ 10,00")

    if(cedulas10 > 0):
        dinheiro %= 10
    
    cedulas5 = int(dinheiro/5)
    print(f"{cedulas5} nota(s) de R$ 5,00")

    if(cedulas5 > 0):
        dinheiro %= 5
    
    cedulas2 = int(dinheiro/2)
    print(f"{cedulas2} nota(s) de R$ 2,00")

    if(cedulas2 > 0):
        dinheiro %= 2

    print(f"{dinheiro} nota(s) de R$ 1,00")

main()