salario = float(input('Digite o salario do funcionario:'))
if salario > 1250:
    aumento = salario + (salario * 10)/100
    print('seu novo salario é R${:2f}'.format(aumento))
else:
    naumento = salario + (salario * 15)/100
    print('seu novo salrio é R${:2f}'.format(naumento))
