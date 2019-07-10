import datetime
atual = datetime.date.today().year
jog = int(input('Iforme a data de nascimento do jogador:'))
ano = atual - jog
print('O jogador tem {} ano'.format(ano))

if 0 >= idade <= 9 :
    print('A categoria do jogador é MIRIM')
elif idade <= 14 :
    print('A categoria do jogador é INFANTIL')
elif idade <= 19:
    print('A categoria do jogador é JUNIOR')
elif idade <= 25:
    print('A categoria do jogador é SENIOR  ')
elif idade > 25:
    print('A categoria é MASTER')
elif 0 < idade :
    print('Voce nao nasceu ainda')
    print('ta tudo errado')
print('O jogador tem {} anos'.format(idade))
