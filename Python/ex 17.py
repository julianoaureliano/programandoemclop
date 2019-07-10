import math
co = float(input('cateto oposto:'))
ca = float(input('cateto adjacente:'))
h = math.hypot(co, ca)
print('o comprimento da hipotenusa é {:.2f}'.format(h))
