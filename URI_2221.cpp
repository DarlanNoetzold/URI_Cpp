vezes = int(input())
golpe = 0
golpe1 = 0

for i in range(vezes):
  bonus = int(input())
  ataque, defesa, level = map(int, input().split())
  ataque1, defesa1, level1 = map(int, input().split())

  if level % 2 == 0:
    golpe = ((ataque + defesa)/2) + bonus

  else:
    golpe = ((ataque + defesa)/2)

  if level1 % 2 == 0:
    golpe1 = ((ataque1 + defesa1)/2) + bonus

  else:
    golpe1 = ((ataque1 + defesa1)/2)

  if golpe < golpe1:
    print("Guarte")

  elif golpe > golpe1:
    print("Dabriel")

  elif golpe1 == golpe:
    print("Empate")
