def main():
    dinheiro = float(input())

    notas = int(dinheiro)

    moedas = dinheiro - notas

    #print("{:.2f}".format(moedas))

    print("NOTAS:")
    
    cedulas100 = int(dinheiro/100)
    
    print(f"{cedulas100} nota(s) de R$ 100.00")

    if(cedulas100 > 0):
        dinheiro %= 100
    
    cedulas50 = int(dinheiro/50)
    print(f"{cedulas50} nota(s) de R$ 50.00")
    
    if(cedulas50 > 0):
        dinheiro %= 50
    
    cedulas20 = int(dinheiro/20)
    print(f"{cedulas20} nota(s) de R$ 20.00")

    if(cedulas20 > 0):
        dinheiro %= 20
    
    cedulas10 = int(dinheiro/10)
    print(f"{cedulas10} nota(s) de R$ 10.00")

    if(cedulas10 > 0):
        dinheiro %= 10
    
    cedulas5 = int(dinheiro/5)
    print(f"{cedulas5} nota(s) de R$ 5.00")

    if(cedulas5 > 0):
        dinheiro %= 5
    
    cedulas2 = int(dinheiro/2)
    print(f"{cedulas2} nota(s) de R$ 2.00")

    if(cedulas2 > 0):
        dinheiro %= 2

    print("MOEDAS:")

    moedas1 = int(dinheiro/1)

    if(moedas1 > 0):
        dinheiro %= 1

    print(f"{moedas1} moeda(s) de R$ 1.00")

    dinheiro *= 100

    moedas50 = int(dinheiro/50)
    print(f"{moedas50} moeda(s) de R$ 0.50")
    
    if(moedas50 > 0):
        dinheiro %= 50
    
    moedas25 = int(dinheiro/25)
    print(f"{moedas25} moeda(s) de R$ 0.25")

    if(moedas25 > 0):
        dinheiro %= 25
    
    moedas10 = int(dinheiro/10)
    print(f"{moedas10} moeda(s) de R$ 0.10")

    if(moedas10 > 0):
        dinheiro %= 10
    
    moedas5 = int(dinheiro/5)
    print(f"{moedas5} moeda(s) de R$ 0.05")

    if(moedas5 > 0):
        dinheiro %= 5

    moedas01 = int((dinheiro+0.1)/1)

    if(moedas01 > 0):
        dinheiro %= 1

    print(f"{moedas01} moeda(s) de R$ 0.01")



main()