not1 = float(input('Digite a primeira nota:'))
not2 = float(input('Digite a segunda nota:'))
m = (not1 + not2)/2

if m < 5:
    print('sua media foi de {} , VOCE ESTA REPROVADO'.format(m))
elif m >= 5 and m < 7:
    print('sua media é {}, VC ESTA EM RECUPERAÇAO'.format(m))
elif m >= 7:
    print('Sua média é {} , APROVADO'.format(m))
