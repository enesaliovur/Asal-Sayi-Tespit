#include<stdio.h>
#include<stdlib.h>

struct node{
	
	struct node*next;
	int data;
	
};
  struct node*q=NULL;
  struct node*start=NULL;

void sonaEkle(int veri){
 	struct node*eklenecek=(struct node*)malloc(sizeof(struct node));
    eklenecek->data=veri;
	eklenecek->next=NULL;
	if(start==NULL){
		start=eklenecek;
	} 
	else{
	
	q=start;
	while(q->next!=NULL){
		q=q->next;
	}
	q->next=eklenecek;
 }
}

 void yazdir(){
 	q=start;
 	while(q->next!=NULL){
 		printf(" %d Asal sayidir\n",q->data);
 		q=q->next;
	 }
	 printf(" %d Asal Sayidir\n",q->data);
 } 
 

 asal_kontrol(){
 	int i,j,n,a;
    int asal[a];
    
    
   
	
	printf("Bir n tam sayisi giriniz:\n");
    scanf("%d",&n);
	
	
	 
	for(i=2;i<n;i++)
        
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                asal[a]++;
        }
            if(asal[a]==2)
        {
        
        	
           asal[a]=i;
         
	      sonaEkle(asal[a]);
           
        }
         	
	     
	      
            asal[a]=0;
         
        
    }
	   yazdir();
	 
}
 

 
int main()
{
	
    asal_kontrol();
    
}






