#include <stdio.h>

int mood (int x , int y) {
        
        int h = x % y;
        return h;
}


int main(void) {
        
        int N,M,C,Y;
        int u,i,j,z;
        
        scanf ("%i", &M);
  
        for (int u = M; u > 0; u--){
        
                scanf ("%i",&C); 
                scanf ("%i",&N);
                int matt[C][N];
        
                for (int i = 0 ;i < C ; i++){
            
                        for (int j = 0; j < N; j++){
                
                                matt[i][j] = 0;
                        }
                }

                for (int i = N; i > 0; i--){ 
            
                scanf ("%i",&Y);
                int h = mood (Y, C);
                z = 0;
            
                while (matt[h][z] != 0){
                        z++;
                }

                matt[h][z] = Y;

                }

                for (int i = 0;i < C; i++){
                        printf ("%d ->", i);
            
                for (int j = 0; j < N; j++){

                        if (matt[i][j] == 0 ){
                                
                                printf ("\\");
                                break;
                        }
                        
                printf("%d -> ", matt[i][j]);
                        
                }
                
                printf ("\n");
            
                }
	
        
        }
	
}		
