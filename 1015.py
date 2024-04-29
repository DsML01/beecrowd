from math import sqrt

def printar(distancia):
    print("{:.4f}".format(distancia))

def conta(x1, x2, y1, y2):
    distancia = sqrt((x2-x1)**2 + (y2-y1)**2)
    printar(distancia)

def ler():

    input1 = input().split()
    x1 = float(input1[0])
    y1 = float(input1[1])


    input2 = input().split()
    x2 = float(input2[0])
    y2 = float(input2[1])

    conta(x1,x2,y1,y2)

def main():
    ler()

main()