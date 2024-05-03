class Peca:
    def __init__(self, cod, num_pecas, valor_unitario):
        self.cod = cod
        self.num_pecas = num_pecas
        self.valor_unitario = valor_unitario

    def leitura(self):
        entrada = input().split()

        self.cod = entrada[0]
        self.num_pecas = int(entrada[1])
        self.valor_unitario = float(entrada[2])

def main():
    peca = Peca("",0,0.0)
    
    soma = 0
    for i in range(2):
        peca.leitura()
        while peca.num_pecas > 0:
            soma += peca.valor_unitario
            peca.num_pecas -= 1
    
    print("VALOR A PAGAR: R$ {:.2f}".format(soma))

main()