nome = str(input('Digite uma Frase:')).strip()
print('A letra A aparece {} vezes na frase.'.format(nome.lower().count('a')))
print('A primeira letra A apareceu na posicao {}'.format(nome.lower().find('a')+1))
print('A ultima letra A apareceu na posiçao {}'.format(nome.lower().rfind('a')))



