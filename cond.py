import random
num = int(input('escolha um numero entre 0 e 5: '))
pc =random.randint(0,5)
print('O computador escolheu {}'.format(pc))

if pc == num:
    print('voce acertou parabens!!')
else:
    print('voce errou!!')


