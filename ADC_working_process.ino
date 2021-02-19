int a[]={0,1,2,3,4,5,6,7};
int valu[]={0,0,0,0,0,0,0,0};
void setup(){
  for(int i=0;i<<8;i++){
    pinMode(a[i],INPUT);
    }
    pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(11,OUTPUT);
  }
void loop(){
  for(int x=0;x<8;x++){
    valu[x]=digitalRead(a[x]);
    }
 if(valu[0]==1 && valu[1]==0 && valu[2]==0 && valu[3]==0 && valu[4]==0 && valu[5]==0 && valu[6]==0 && valu[7]==0){
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    }
 else if(valu[0]==1 && valu[1]==1 && valu[2]==0 && valu[3]==0 && valu[4]==0 && valu[5]==0 && valu[6]==0 && valu[7]==0){
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
    }
 else if(valu[0]==1 && valu[1]==1 && valu[2]==1 && valu[3]==0 && valu[4]==0 && valu[5]==0 && valu[6]==0 && valu[7]==0){
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,0);
    }
 else if(valu[0]==1 && valu[1]==1 && valu[2]==1 && valu[3]==1 && valu[4]==0 && valu[5]==0 && valu[6]==0 && valu[7]==0){
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,0);
    }
 else if(valu[0]==1 && valu[1]==1 && valu[2]==1 && valu[3]==1 && valu[4]==1 && valu[5]==0 && valu[6]==0 && valu[7]==0){
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,1);
    }
 else if(valu[0]==1 && valu[1]==1 && valu[2]==1 && valu[3]==1 && valu[4]==1 && valu[5]==1 && valu[6]==0 && valu[7]==0){
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,1);
    }
 else if(valu[0]==1 && valu[1]==1 && valu[2]==1 && valu[3]==1 && valu[4]==1 && valu[5]==1 && valu[6]==1 && valu[7]==0){
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,1);
    }
 else if(valu[0]==1 && valu[1]==1 && valu[2]==1 && valu[3]==1 && valu[4]==1 && valu[5]==1 && valu[6]==1 && valu[7]==1){
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,1);
    }
  
  }
