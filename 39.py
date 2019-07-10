import datetime
atual = datetime.date.today().year
nas = int(input('Digite o ano que voce nasceu:'))
anos = (atual - nas)
print(anos)

if anos < 18:
    print('falta {} anos para seu alistamento'.format((18 - anos)))
elif anos == 18:
    print('Voce deve se alistar IMEDIATAMENTE')
else:
    print('ja passou {} anos do seu alistamento'.format(anos - 18))

