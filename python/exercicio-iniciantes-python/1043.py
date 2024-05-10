def main():
    lado = list(map(float,input().split()))

    if(lado[0] + lado[1] > lado[2] and lado[1] + lado[2] > lado[0] and lado[0] + lado[2] > lado[1]):
        print(f"Perimetro = {lado[0] + lado[1] + lado[2]}")

    else:
        print(f"Area = {((lado[0] + lado[1])*lado[2])/2}")

main()
    