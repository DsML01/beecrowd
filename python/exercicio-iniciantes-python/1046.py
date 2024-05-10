def main():
    hora = list(map(int, input().split()))

    if(hora[0] > hora[1]):
        print(f"O JOGO DUROU {(24 - hora[0]) + hora[1]} HORA(S)")

    elif(hora[0] < hora[1]):
        print(f"O JOGO DUROU {hora[1] - hora[0]} HORA(S)")
    else:
        print(f"O JOGO DUROU 24 HORA(S)")
main()