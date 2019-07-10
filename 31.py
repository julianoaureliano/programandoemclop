km = int(input('Distancia da sua viagem em km:'))
if km <200:
    print('o preço da sua passagem é R${}'.format(km*0.5))
else:
    print('O preço da sua passagem é R${}'.format(km*0.45))
