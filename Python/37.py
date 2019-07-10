num = int(input('Digite um numero inteiro:'))
print('''Escolha uma das bases para conversao:
[1] coverter para BINARIO
[2] converter para OCTAL
[3] converter para HEXADECIMAL''')
opçao = int(input('Escolha sua opçao:'))

if opçao == 1:
    print('Seu numero em binário é {}'.format(bin(num)[2:]))
elif opçao == 2:
    print('Seu numero em OCTAL é {}'.format(oct(num)[2:]))
elif opçao == 3:
    print('Seu numero em HEXADECIMAL é {}'.format(hex(num)[2:]))

else:
    print('Escolha inválida')


