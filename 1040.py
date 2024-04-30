def main():
    entrada = input().split()
    n1 = float(entrada[0])
    n2 = float(entrada[1])
    n3 = float(entrada[2])
    n4 = float(entrada[3])

    peso1 = 2
    peso2 = 3
    peso3 = 4
    peso4 = 1
    
    pesototal = peso1 + peso2 + peso3 + peso4

    n1 *= peso1
    n2 *=  peso2
    n3 *= peso3
    n4 *= peso4

    media = (n1 + n2 + n3 + n4)/pesototal

    print(f"Media: {media:.1f}")

    if(media >= 7.0):
        print("Alunos aprovado.")
    
    elif(media < 5.0):
        print("Aluno reprovado.")
    
    else:
        print("Aluno em exame.")
        nreav = float(input())

        print(f"Nota do exame: {nreav:.1f}")

        media = (media + nreav)/2

        if(media >= 5):
            print("Aluno aprovado.")
            print(f"Media final: {media:.1f}")
        else:
            print("Aluno reprovado.")
            print(f"Media final: {media:.1f}")

main()