#include "dx.h"
void CHERCHATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V3=0,V16=0,V2=0,V28=0,V19=0,V20=0,V21=0,V22=0,V24=0,V25=0,V26=0,V27=0,V33=0;
int BL,Y,M,N,UR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; Y=pile[v[22]+1]; M=pile[v[22]+2]; N=pile[v[22]+3]; UR=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[M] ;z[jvj+3]=z[M];
x[jvj+1]=x[Y] ;z[jvj+1]=z[Y];
l8:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+1,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[BL])) goto l12;
x[jvj+5]=incon;
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,jvj+1,jvj+2)*/
x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
l9:pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+3,jvj+13)*/
V28=x[jvj+1];
if((x[jvj+5]==250)) goto l3;
pile[v[22]]=120; pile[WZ1]=jvj+1; 
(*f[71])( );     /*ENLV0(120,jvj+1)*/
l3:if((UR!=69)) goto l10;
pile[v[22]]=246; pile[WZ1]=jvj+1; 
(*f[71])( );     /*ENLV0(246,jvj+1)*/
l10:pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=46; 
(*f[41])( );     /*SRB0(5,0,46,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V19,(-740),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V20,40,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=N; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V21,N,41,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V22,44,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=jvj+13; 
(*f[98])( );     /*SRA3(135,V24,jvj+13,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V25,41,V3)*/
V3=pile[WZ2]; 
V2=incon;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+4)*/
if((x[jvj+4]!=0)) goto l2;
V2=V3;
l15:V26=0;
V33=V2;
if((V33<0)) goto l11;
pile[v[22]]=V33; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V33,3)*/
l11:pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V28,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
if((x[jvj+5]==250)) goto l12;
pile[v[22]]=jvj+1; pile[WZ1]=120; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+1,120,jvj+5)*/
l12:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,jvj+1,jvj+14)*/
pile[v[22]]=BL; pile[WZ1]=jvj+14; pile[WZ2]=jvj+3; pile[WZ3]=N; pile[WZ4]=UR; 
(*f[152])( );     /*CHERCHATOME0(BL,jvj+14,jvj+3,N,UR)*/
l13:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+1,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+15,jvj+16)*/
if(x[jvj+16]!=433&&x[jvj+16]!=918) goto l14;
pile[v[22]]=366; pile[WZ1]=jvj+1; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(366,jvj+1,jvj+17)*/
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+3,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=158; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+18,158,jvj+7)*/
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+6)*/
l4:if((x[jvj+6]>0)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+9)*/
l6:if((x[jvj+9]>0)) goto l7;
x[jvj+1]=x[jvj+17] ;z[jvj+1]=z[jvj+17];
x[jvj+3]=x[jvj+7] ;z[jvj+3]=z[jvj+7];
goto l8;
l1:x[jvj+5]=250 ;z[jvj+5]=250;
goto l9;
l2:V18=x[jvj+4];
pile[v[22]]=135; pile[WZ1]=V3; pile[WZ2]=455; 
(*f[42])( );     /*SRA1(135,V3,455,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V18; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(23,V18,V16,V2)*/
V2=pile[WZ3]; 
goto l15;
l5:x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+8)*/
x[jvj+6]=t[x[jvj+6]];
goto l4;
l7:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+10)*/
x[jvj+9]=t[x[jvj+9]];
goto l6;
l14:v[0]=jvj; v[22]-=5; return;
}
