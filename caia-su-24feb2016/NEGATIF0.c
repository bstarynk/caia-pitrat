#include "dx.h"
void NEGATIF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V9=0,I=0,V4=0,V13=0,V12=0,V14=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
if((I<0)) goto l12;
l13:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,A,jvj+11)*/
if((x[jvj+11]!=484)) goto l14;
pile[v[22]]=A; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(A,jvj+12)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(164,jvj+12,V4)*/
V4=pile[WZ2]; 
if((V4<0)) goto l12;
l14:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,A,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==52)) goto l15;
if((x[jvj+14]==486)) goto l16;
if((x[jvj+14]==596)) goto l17;
if((x[jvj+14]!=485)) goto l20;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,A,jvj+23)*/
x[jvj+25]=x[jvj+23] ;z[jvj+25]=z[jvj+23];
l9:if((x[jvj+25]<=0)) goto l11;
x[jvj+7]=s[x[jvj+25]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+25];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1586])( );     /*NEGOUNUL0(jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l10;
l20:x[R]=134 ;z[R]=134;
l21:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+1]=s[x[jvj+24]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+24];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1352])( );     /*POSITIF0(jvj+1,jvj+2)*/
if((x[jvj+2]==135)) goto l4;
l3:x[jvj+24]=t[x[jvj+24]];
l1:if((x[jvj+24]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+3,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,117,jvj+6)*/
l5:if((x[jvj+17]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+6,V9)*/
V9=pile[WZ2]; 
V12=V6+V9;
if((V12!=V13)) goto l20;
V14=V9%2;
if((V14!=0)) goto l12;
goto l20;
l4:pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
goto l3;
l6:x[jvj+4]=s[x[jvj+17]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+17];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1585])( );     /*NEGATIF0(jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l8;
l7:x[jvj+17]=t[x[jvj+17]];
goto l5;
l8:pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+6,117,1)*/
goto l7;
l10:x[jvj+25]=t[x[jvj+25]];
goto l9;
l12:x[R]=135 ;z[R]=135;
goto l21;
l15:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,A,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1352])( );     /*POSITIF0(jvj+15,jvj+16)*/
if((x[jvj+16]==135)) goto l12;
goto l20;
l16:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,A,jvj+17)*/
for(i=x[jvj+17],V13=0;i>0;i=t[i],V13++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
x[jvj+24]=x[jvj+17] ;z[jvj+24]=z[jvj+17];
goto l1;
l17:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,A,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[1585])( );     /*NEGATIF0(jvj+18,jvj+19)*/
if((x[jvj+19]==135)) goto l18;
goto l20;
l18:pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,A,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[997])( );if(v[102]) goto l20;     /*IMPAIR0(jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l19;
goto l20;
l19:pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; 
(*f[1352])( );     /*POSITIF0(jvj+20,jvj+22)*/
if((x[jvj+22]==135)) goto l12;
goto l20;
l11:if((x[jvj+23]<=0)) goto l20;
x[jvj+9]=s[x[jvj+23]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+23];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1585])( );     /*NEGATIF0(jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l12;
x[jvj+23]=t[x[jvj+23]];
goto l11;
}
