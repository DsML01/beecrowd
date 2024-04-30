from math import sqrt

def main():
    entrada = input().split()

    a = float(entrada[0])
    b = float(entrada[1])
    c = float(entrada[2])

    delta = (b**2-4*a*c)

    if(delta >= 0):
        r1 = (-b + sqrt(delta))/(2*a)
        r2 = (-b - sqrt(delta))/(2*a)

        print(f"R1 = {r1:.5f}")
        print(f"R2 = {r2:.5f}")

    else:
        print("Impossivel calcular")
main()