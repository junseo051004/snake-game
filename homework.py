# 숙제: 구구단 2단~9단까지 출력하는 코드 작성(중첩 for문 사용)
#  - 반복1: 구구단 2단 ~ 9단
#  - 반복2: 단, 1~9 곱셈

for i in range (2, 10):
    for j in range (2, 10):
        print(f"{i} X {j} = {i*j}")

# 숙제: for문으로 작성한 구구단2단을 while문으로 작성해보세요

i = 1
while i < 10:
    print(f"2X{i} = {2*i}")
    i += 1
# 숙제
a = 10
b = 50
# 코드 작성
temp = a
a = b
b = temp
# 또다른 코드
a = b 

print(a) #50 출력
print(b) #10 출력