player1 = [1,1]
player2 = [1,1]
player = [player1,player2]

def status():
    
 print("\nCurrent Status:-")
 print("Player1 -", player1[0],player1[1])
 print("Player2 -", player2[0],player2[1])

status()

d = {}
d['l'] = 0
d['r'] = 1

i=0
while player1 != [0,0] and player2 != [0,0] and i<2:
    
    move = input("\nEnter move for player{} (A or S)- ".format(1+i)).lower()

    if move == 'a':  
      attack = input("Enter the attack combination - ").lower().split()                                                 

      #player1,2 = player[0+i],[1-i]
      #d[attack[0]] = d['l/r'] = 0/1

      if player[0+i][d[attack[0]]] > 0:                                                                         
          if player[1-i][d[attack[1]]] > 0: 
                                                                               
             player[1-i][d[attack[1]]] = player[1-i][d[attack[1]]] + player[0+i][d[attack[0]]]
             if player[1-i][d[attack[1]]] >=5:
                 player[1-i][d[attack[1]]] = 0
             
             i=1+i
             if i >=2:
                 i=0
             status()

          else:
              print("Can't attack a dead hand")   
      
      else:
          print("Select your live hand")
    

    elif move == 's':
        splitter = input("Enter the split combination - ").lower().split()

        if int(splitter[1])+int(splitter[2]) == player[i][0]+player[i][1] and player[i][0] != int(splitter[2]):
            
            player[i][0] = int(splitter[1])
            player[i][1] = int(splitter[2])
            i=1+i
            if i >=2:
                i=0
            status()

        elif int(splitter[1])+int(splitter[2]) < player[i][0]+player[i][1]:
            print("Extra fingers left")

        elif int(splitter[1])+int(splitter[2]) > player[i][0]+player[i][1]:
            print("Insufficient fingers")

        elif player[i][0] == int(splitter[2]):
            print("Can't swap fingers")
        else:
            print("Error in input")

if player1 == [0,0]:
     print("\nPlayer2 won")
elif player2 == [0,0]:
    print("\nPlayer1 won")