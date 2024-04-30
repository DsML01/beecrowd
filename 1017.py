def main():
    tempo_viagem = float(input())
    velocidade_media = float(input())
    combustivel_por_km = 12

    distancia = tempo_viagem * velocidade_media
    combustivel_gasto = distancia/combustivel_por_km

    print("{:.3f}".format(combustivel_gasto))

main()