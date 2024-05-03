def main():
    nome_vendedor = input()
    salario_fixo = float(input())
    total_vendas = float(input())

    salario_total = salario_fixo + (total_vendas * 0.15)

    print("TOTAL = R$ {:.2f}".format(salario_total))

main()