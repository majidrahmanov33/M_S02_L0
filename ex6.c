#include<stdio.h>
typedef struct students {
  char name[20];
  char surname[20];
  float grade;
}st;

void genavgStudents(ge[],size1,ch[],size2) {
	int ans;
	ans = ge[0].grade + ge[1].grade + ge[2].grade + ge[3].grade + ch[0].grade + ch[1].grade+ch[2].grade + ch[3].grade;
	ans =(float) ans/8;
	printf("The average grade of all students of all groups is %.3f\n");
}


void leastavgStudents(ge[],size1,ch[],size2,avg) {

	for ( i = 0 ; i < size1 ; i++ ) {
		if ( ge[i].grade > avg ) {
			printf("%s    %s",ge[i].name,ge[i],surname);
		}
	}

	for ( i = 0 ; i < size2 ; i++ ) {
		if ( ch[i].grade > avg ) {
			printf("%s    %s",ch[i].name,ch[i],surname);
		}
	}


}

int main(){
 
  st ge[4],ch[4];
  ge[0]=(st){"Samir","Aghayev",17.5};
  ge[1]=(st){"Fidan","Jafarova",16.2};
  ge[2]=(st){"Leyla","Gasimova",14.8};
  ge[3]=(st){"Shamil","Ahmadov",15.3};

  ch[0]=(st){"Gunel","Safaraliyeva",14.7};
  ch[1]=(st){"Aysu","Majidli",16.5};
  ch[2]=(st){"Emin","Muradov",12.8};
  ch[3]=(st){"Teymur","Kosayev",17.0};

  genavgStudents(ge,4,ch,4);
  leastavgStudents(ge,4,ch,4);


return 0;
}
