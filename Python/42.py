peso = float(input('Qual o seu peso? (KG)'))
alt = float(input('Qual a sua altura? (M)'))
imc = peso / (alt ** 2)
print(imc)

if imc < 18.5:
    print('Voce está abaixo do peso')
elif 18.5 <= imc < 25:
    print('voce eta no peso ideal')
elif 25 <= imc < 30:
    print('voce esta com sobrepeso')
elif 30 <= imc < 40:
    print('voce esta obeso')
elif imc >= 40:
    print('voce esta com obesidade MORBIDA, VA AO MEDICO URGENTEMENTE')
