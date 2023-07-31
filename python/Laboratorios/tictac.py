import random

def display_board(board):
    for row in board:
        print(' | '.join(row))
        print('---------')

def enter_move(board):
    while True:
        move = input("Ingresa el número del cuadro donde deseas colocar tu 'O' (1-9): ")
        if move.isdigit() and 1 <= int(move) <= 9:
            row = (int(move) - 1) // 3
            col = (int(move) - 1) % 3
            if board[row][col].isdigit():
                board[row][col] = 'O'
                break
        print("Movimiento inválido. Intenta nuevamente.")

def make_list_of_free_fields(board):
    free_fields = []
    for row in range(3):
        for col in range(3):
            if board[row][col].isdigit():
                free_fields.append((row, col))
    return free_fields

def victory_for(board, sign):
    # Verificar filas
    for row in board:
        if all(cell == sign for cell in row):
            return True

    # Verificar columnas
    for col in range(3):
        if all(board[row][col] == sign for row in range(3)):
            return True

    # Verificar diagonales
    if board[0][0] == board[1][1] == board[2][2] == sign:
        return True
    if board[0][2] == board[1][1] == board[2][0] == sign:
        return True

    return False

def draw_move(board):
    free_fields = make_list_of_free_fields(board)
    if free_fields:
        row, col = random.choice(free_fields)
        board[row][col] = 'X'

def play_game():
    board = [['1', '2', '3'],
             ['4', 'X', '6'],
             ['7', '8', '9']]
    display_board(board)

    while True:
        enter_move(board)
        display_board(board)
        if victory_for(board, 'O'):
            print("¡Ganaste!")
            break
        if len(make_list_of_free_fields(board)) == 0:
            print("El juego terminó en empate.")
            break

        draw_move(board)
        display_board(board)
        if victory_for(board, 'X'):
            print("La máquina ganó.")
            break
        if len(make_list_of_free_fields(board)) == 0:
            print("El juego terminó en empate.")
            break

# Iniciar el juego
play_game()