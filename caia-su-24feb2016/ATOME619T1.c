#include "dx.h"
void ATOME619T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V24=0,V1=0,V34=0,V2=0,V35=0,V3=0,V36=0,V4=0,V37=0;
int NNNM;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20619;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3928&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
NNNM=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=NNNM; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,NNNM,jvj+3)*/
if((x[jvj+3]!=22)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,NNNM,jvj+4)*/
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=486)) goto l9;
pile[v[22]]=103; pile[WZ1]=NNNM; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,NNNM,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+10)*/
for(i=x[jvj+10],V12=0;i>0;i=t[i],V12++)  ;
if((V12!=2)) goto l9;
pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+11)*/
for(i=x[jvj+11],V24=0;i>0;i=t[i],V24++)  ;
if((V24!=2)) goto l9;
pile[v[22]]=111; pile[WZ1]=NNNM; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,NNNM,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+12,jvj+13)*/
V34=x[jvj+10];
l1:if((V34<=0)) goto l9;
V1=s[V34];
V35=x[jvj+10];
l2:if((V35>0)) goto l3;
V34=t[V34];
goto l1;
l3:V2=s[V35];
if((V1==V2)) goto l4;
V36=x[jvj+11];
l5:if((V36<=0)) goto l4;
V3=s[V36];
V37=x[jvj+11];
l6:if((V37>0)) goto l7;
V36=t[V36];
goto l5;
l4:V35=t[V35];
goto l2;
l7:V4=s[V37];
if((V3==V4)) goto l8;
pile[v[22]]=101; pile[WZ1]=NNNM; pile[WZ2]=110; pile[WZ3]=(-11752); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,NNNM,110,(-11752),jvj+19)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(206,715,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3927; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3927,246,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=20619; pile[WZ2]=218; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,20619,218,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ2]=jvj+18; pile[WZ3]=159; pile[WZ4]=jvj+20; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+18,159,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+20,289,158,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[481])( );     /*STOCKER0(jvj+14)*/
l8:V37=t[V37];
goto l6;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
