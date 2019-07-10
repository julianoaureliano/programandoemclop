import datetime
atual = datetime.date.today().year
jog = int(input('Iforme a data de nascimento do jogador:'))
anos = atual - jog
print('O jogador tem {} anos'.format(anos))

if 0 >= anos <= 9 :
    print('A categoria do jogador é MIRIM')
elif anos <= 14 :
    print('A categoria do jogador é INFANTIL')
elif anos <= 19:
    print('A categoria do jogador é JUNIOR')
elif anos <= 25:
    print('A categoria do jogador é SENIOR  ')
elif anos > 25:
    print('A categoria é MASTER')
elif 0 < anos :
    print('Voce nao nasceu ainda')

