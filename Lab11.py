print("Программа для подсчета гласных в строке.  Введите строку:")
a=str(input())
b="ёуеэоаыяиюЁУЕЭОАЫЯИЮAIOUYEaeyuio"
c=0
for i in a:
    if i in b:
        c+=1
print(c)
