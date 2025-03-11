print('BEM VINDO AO CAMPEONATO DE CICLISMO DE CUNHA\n')

idade=int(input("Por favor, insira sua idade: "))
genero=input("Por favor, insira seu genero, h ou m: ")

if idade>=19:
    if genero=='h':
        print('\nPode participar da categoria INDIV MASC')
    else:
        print('\nPode participar da categoria INDIV FEM')
    if idade>29:
        if idade>40:
            print('Pode participar da categoria INDIV 4')
        else:
            print('Pode participar da categoria INDIV 2')
    else:
        print('Pode participar da categoria INDIV 1')
    
    participarCategoriaMista=input('\nDeseja participar da categoria mista? s ou n: ')
    if participarCategoriaMista=='s':
        generoDupla=input('Qual o gênero de sua dupla? h ou m: ')
        idadeDupla=int(input('Qual a idade de sua dupla?: '))
        if generoDupla==genero:
            print('Dupla não pode participar da categoria: DUPLAS MISTAS\n')
        else:
            if idadeDupla>=19:
                print('Dupla pode participar da categoria: DUPLAS MISTAS\n')
            else:
                 print('Dupla não pode participar da categoria: DUPLAS MISTAS\n')
    
else:
    print('\nIdade Insuficiente\n')
    print('Não pode participar do campeonato\n')
    
print('Obrigado\n')

