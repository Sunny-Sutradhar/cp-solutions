#include<stdio.h>
#include<string.h>



void no(){
  printf("NO\n");
}
void yes(){
  printf("YES\n");
}

int main(){

  int n,i,j,k;
  scanf("%d",&n);

  for(i=0;i<n;i++){
        char p[100],h[100],temp[100];
    scanf("%s %s",p,h);
    int  h_lenght = strlen(h);
     int p_lenght = strlen(p);

     if(p_lenght>h_lenght)no();

    else{
            int stop =p_lenght,start=0,value=0;
        while(1){
             strcpy(temp,h);
             int mark =0;
            for(j =0;j<p_lenght;j++){
                    value = 0;
                for(k= start;k<stop;k++){
                    if(p[j]==temp[k]){
                        temp[k]='A';
                        value =0;
                        break;
                    }
                    else{
                        value = -1;
                    }
                }
               if(value == -1){
                    start++;
                    stop++;
                   break;
               }
               else mark++;
            }
            if(mark==p_lenght){
                yes();
                break;
            }
            if(stop>h_lenght){
                no();
                break;
            }
        }
     }

  }

return 0;}
