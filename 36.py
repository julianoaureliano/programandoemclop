casa = float(input('Digite o valor da Casa:'))
salario = float(input('Digite o valor do seu salário:'))
tempo = int(input('Em quantos anos voce vai querer pagar a casa:'))
porc = (salario * 30)/100
prest = casa / (tempo * 12)
if prest > porc:
    print('Para pagar uma case de R${:.2f} em {} anos será de R${:.2f}'.format(casa, tempo, prest))
    print('Emprestimo NEGADO')
else:
    print('Emprestimo aceito com parcela de R${:.2f}'.format(prest))

