frase = 'Curso em Vídeo Python'
print(frase.count('o'))
print(frase.upper().count('O'))
print(len(frase.strip()))
print(frase.replace('Python', 'Android'))

troca = 'Curso em Vídeo Python'
troca = troca.replace('Python', 'Android')
print(troca)

print('Curso'in frase)
print(frase.find('Vídeo'))
print(frase.find('vídeo'))
print(frase.lower().find('vídeo'))

print(frase.split())
dividido = frase.split()
print(dividido[0])
print(dividido[0][3])







