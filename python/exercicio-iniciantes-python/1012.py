def main():
    entrada = input().split()
    a = float(entrada[0])
    b = float(entrada[1])
    c = float(entrada[2])

    pi = 3.14159

    print("TRIANGULO: {:.3f}".format((a*c)/2))
    print("CIRCULO: {:.3f}".format(pi*(c*c)))
    print("TRAPEZIO: {:.3f}".format(((a+b)*c)/2))
    print("QUADRADO: {:.3f}".format(b*b))
    print("RETANGULO: {:.3f}".format(a*b))

main()