def main():
    item = float(input())

    if(item >= 0 and item <= 25):
        print("Intervalo [0,25]")
        
    elif(item > 25 and item <= 50):
        print("Intervalo (25,50]")

    elif(item > 50 and item <= 75):
        print("Intervalo (50, 75]")

    elif(item > 75 and item <= 100):
        print("Intervalo (75,100]")

    else:
        print("Fora de intervalo")
main()