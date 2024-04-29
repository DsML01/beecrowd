def main():
    #distancia eh medida em km
    distancia_total = int(input())
    #combustivel gasto eh medido em litros
    total_combustivel = float(input())

    print("{:.3f} km/l".format(distancia_total/total_combustivel))

main()