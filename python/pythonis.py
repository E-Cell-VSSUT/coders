p1l = 1
p1r = 1
p2l = 1
p2r = 1
print("Current status")
print("Player1:", p1l, p1r)
print("Player2:", p2l, p2r)
ct = 1
while ct > 0:
    move_1 = input("Enter your move for player1: ")
    if move_1 == 'A':
        comb_1 = input("Enter the combination: ")
        if comb_1 == 'LR':
            p2r = p2r + p1l
            if p2r >= 5:
                p2r = 0
        elif comb_1 == 'RL':
            p2l = p2l + p1r
            if p2l >= 5:
                p2l = 0
        elif comb_1 == 'LL':
            p2l = p2l + p1l
            if p2l >= 5:
                p2l = 0
        elif comb_1 == 'RR':
            p2r = p2r + p1r
            if p2r >= 5:
                p2r = 0
    elif move_1 == 'S':
        comb_s1 = input("Enter the combination")
        p1l = comb_s1[1]
        plr = comb_s1[2]
    print("Player1:", p1l, p1r)
    print("Player2:", p2l, p2r)
    if (p1l == 0 and p1r == 0) or (p2l == 0 and p2r == 0):
        ct = 0
        if p1l == 0 and p1r == 0:
            print("Player2 is winner")
            break
        else:
            print("Player1 is winner")
            break

    move_2 = input("Enter your move for player2: ")
    if move_2 == 'A':
        comb_2 = input("Enter the combination: ")
        if comb_2 == 'LR':
            p1r = p1r + p2l
            if p1r >= 5:
                p1r = 0
        elif comb_2 == 'RL':
            p1l = p1l + p2r
            if p1l >= 5:
                p1l = 0
        elif comb_2 == 'LL':
            p1l = p1l + p2l
            if p1l >= 5:
                p1l = 0
        elif comb_2 == 'RR':
            p1r = p1r + p2r
            if p1r >= 5:
                p1r = 0
    elif move_2 == 's':
        comb_s2 = input("Enter the combinaton: ")
        p2l = comb_s2[1]
        p2r = comb_s2[2]
    print("Player1:", p1l, p1r)
    print("Player2:", p2l, p2r)
    if (p1l == 0 and p1r == 0) or (p2l == 0 and p2r == 0):
        ct = 0
        if p1l == 0 and p1r == 0:
            print("Player2 is winner")
        else:
            print("Player1 is winner")
print("Game Ends!!!")









