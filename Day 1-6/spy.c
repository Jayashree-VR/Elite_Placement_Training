#include <stdio.h>

#define MAX 10
int row, col, t,total_path=0;
int mat[MAX][MAX];
int visited[MAX][MAX];
int dr[] = {1, -1, 0, 0};  
int dc[] = {0, 0, 1, -1};


void dfs(int r, int c) {
    if (r == row-1 && c == col-1) { 
        total_path++;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if (nr>=0 && nr<row && nc>=0 && nc<col ) {
            if(!visited[nr][nc] && mat[nr][nc]>t){
                dfs(nr, nc);
                visited[nr][nc] = 0;
            }
            
        }
    }

}

int main() {
    scanf("%d", &t);
    scanf("%d %d", &row, &col);

    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            scanf("%d", &mat[i][j]);
            visited[i][j] = 0;
        }
    }

    if (mat[0][0] > t) {
        dfs(0, 0);
    }

    printf("%d\n", total_path);
    return 0;
}
