#include "dx.h"
void POSITIF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V16=0,I=0,V4=0,V20=0,V19=0,V21=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=27;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
if((I>0)) goto l12;
l13:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,A,jvj+11)*/
if((x[jvj+11]!=484)) goto l14;
pile[v[22]]=A; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(A,jvj+12)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(280,jvj+12,V4)*/
V4=pile[WZ2]; 
if((V4>0)) goto l12;
l14:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,A,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==52)) goto l15;
if((x[jvj+14]==596)) goto l16;
if((x[jvj+14]==486)) goto l20;
if((x[jvj+14]!=485)) goto l21;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,A,jvj+25)*/
x[jvj+26]=x[jvj+25] ;z[jvj+26]=z[jvj+25];
l1:if((x[jvj+26]<=0)) goto l3;
x[jvj+1]=s[x[jvj+26]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+26];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1353])( );     /*POSOUNUL0(jvj+1,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
l21:x[R]=134 ;z[R]=134;
l22:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+26]=t[x[jvj+26]];
goto l1;
l5:x[jvj+5]=s[x[jvj+27]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+27];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1352])( );     /*POSITIF0(jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l7;
l6:x[jvj+27]=t[x[jvj+27]];
l4:if((x[jvj+27]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+7,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,117,jvj+10)*/
l8:if((x[jvj+24]>0)) goto l9;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+10,V16)*/
V16=pile[WZ2]; 
V19=V13+V16;
if((V19!=V20)) goto l21;
V21=V16%2;
if((V21==0)) goto l12;
goto l21;
l7:pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+7,117,1)*/
goto l6;
l9:x[jvj+8]=s[x[jvj+24]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+24];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[1585])( );     /*NEGATIF0(jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l11;
l10:x[jvj+24]=t[x[jvj+24]];
goto l8;
l11:pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,117,1)*/
goto l10;
l12:x[R]=135 ;z[R]=135;
goto l22;
l15:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,A,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1585])( );     /*NEGATIF0(jvj+15,jvj+16)*/
if((x[jvj+16]==135)) goto l12;
goto l21;
l16:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,A,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[1585])( );     /*NEGATIF0(jvj+17,jvj+18)*/
if((x[jvj+18]==135)) goto l17;
l18:pile[v[22]]=jvj+17; pile[WZ1]=jvj+21; 
(*f[1352])( );     /*POSITIF0(jvj+17,jvj+21)*/
if((x[jvj+21]==135)) goto l19;
goto l21;
l17:pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,A,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[996])( );if(v[102]) goto l18;     /*PAIR0(jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l12;
goto l18;
l19:pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,A,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1353])( );     /*POSOUNUL0(jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l12;
goto l21;
l20:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,A,jvj+24)*/
for(i=x[jvj+24],V20=0;i>0;i=t[i],V20++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
x[jvj+27]=x[jvj+24] ;z[jvj+27]=z[jvj+24];
goto l4;
l3:if((x[jvj+25]<=0)) goto l21;
x[jvj+3]=s[x[jvj+25]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+25];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1352])( );     /*POSITIF0(jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l12;
x[jvj+25]=t[x[jvj+25]];
goto l3;
}
