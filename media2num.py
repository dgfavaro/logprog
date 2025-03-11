primeiraNota=int(input("\nInsira a primeira nota: ")) #bloco entrada 1

segundaNota=int(input("\nInsira a segunda nota: ")) #bloco entrada 2

media=(primeiraNota+segundaNota)/2 #bloco atribuição
print('')
print('Sua média é: ',media)

if media>=6: #bloco condicional 1
    print('\nAprovado') #bloco de saída 1
    if  media==10:  #bloco condicional 2
        print('\nParabéns') #bloco de saída 2
    
