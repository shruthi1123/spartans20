#include<stdio.h>

int main() {
    int T,i;
    scanf("%d",&T);
    for( i=0;i<T;i++){
        int m,n;
        scanf("%d",&m);
        scanf("%d",&n);
        int j,k,flag;
        for(j=m;j<=n;j++){
          if(j==0 || j==1)
          flag=0;
          else{
          flag=1;
          for(k=2;k*k<=j;k++){
              if(j % k == 0){
              flag=0;
              break;
              }
          }
          }
          if(flag==1)
          printf("%d ",j);
        }
        printf("\n");
    }
	//code
	return 0;
}
