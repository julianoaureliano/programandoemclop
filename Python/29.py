velo = int(input('qual a velocidade do veículo em km/h:'))
if velo > 80:
    print('VOCE FOI MULTADO !!!')
    print('Multa no valor de R${}'.format((velo-80)*7))
else:
    print('Situaçao normal')