class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        rows = len(board)
        cols = len(board[0])
        
        saveBox = {}
        saveRow = {}
        saveCol = {}
        
        shiftRow = 0
        shiftCol = 0
        subBox = 0
        
        for row in range(rows):
            if(row % 3) == 0:
                shiftRow = row             
            for col in range(cols):
                if(col % 3) == 0:
                    shiftCol = col
                subBox = shiftRow+int(shiftCol/3)
                
                if(subBox not in saveBox.keys()):
                    saveBox[subBox] = []
                if(row not in saveRow.keys()):
                    saveRow[row] = []
                if(col not in saveCol.keys()):
                    saveCol[col] = []
                if board[row][col] == ".":
                    continue
                    
                if board[row][col] in saveRow[row] or board[row][col] in saveCol[col] or board[row][col] in saveBox[subBox]:
                    return False
                else:
                    saveRow[row].append(board[row][col])
                    saveCol[col].append(board[row][col])
                    saveBox[subBox].append(board[row][col])
        return True
                
            
                
        
        
        return True
                    
        
        