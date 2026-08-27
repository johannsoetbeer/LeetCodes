class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        seen_rows = [set() for _ in range(9)]
        seen_cols = [set() for _ in range(9)]
        seen_box = [set() for _ in range(9)]

        for i in range(9):
            for j in range(9):
                curr = int(board[i][j]) if board[i][j] != "." else -1
                if curr != -1:
                    if curr in seen_rows[i] or curr in seen_cols[j] or curr in seen_box[(i // 3) * 3 + j // 3]:
                        return False
                seen_rows[i].add(curr)
                seen_cols[j].add(curr)
                seen_box[(i // 3) * 3 + j // 3].add(curr)


        return True                
