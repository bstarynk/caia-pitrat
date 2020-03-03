#include "dx.h"
void DECPREM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V13=0,V15=0,P=0,AA=0,V4=0,V23=0,V7=0,V12=0,I=0,V10=0,V9=0,V11=0,V14=0,V19=0,V24=0;
int A,RR,PP;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; RR=pile[v[22]+1]; PP=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V24=PP;
V23=A;
l8:if((V24==0)) goto l9;
if((V24<=0)) goto l19;
pile[v[22]]=30; pile[WZ1]=2; pile[WZ2]=V23; 
(*f[1005])( );if(v[102]) goto l19;     /*RACN0(30,2,V23,V7)*/
V7=pile[WZ3]; 
V12=V7/2;
I=V24;
l12:if((I>V12)) goto l19;
V10=2*I;
V9=V10+1;
V11=V23%V9;
if((V11==0)) goto l4;
I++;
goto l12;
l2:x[jvj+1]=s[x[jvj+7]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+1,V3)*/
V3=pile[WZ2]; 
if((V3!=2)) goto l3;
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
l11:V4=V23/2;
P=0;
AA=V4;
pile[v[22]]=jvj+3; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,510,1)*/
pile[v[22]]=RR; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(RR,jvj+3)*/
l17:if((AA==1)) goto l18;
if((AA<=1)) goto l21;
V23=AA;
V24=P;
goto l8;
l3:x[jvj+7]=t[x[jvj+7]];
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=2; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(2,117,jvj+3)*/
goto l11;
l4:x[jvj+4]=incon;
x[jvj+8]=x[RR] ;z[jvj+8]=z[RR];
l5:if((x[jvj+8]>0)) goto l6;
pile[v[22]]=V9; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(V9,117,jvj+4)*/
l13:V14=V23/V9;
AA=V14;
P=I;
pile[v[22]]=RR; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(RR,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,510,1)*/
goto l17;
l6:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+2,V13)*/
V13=pile[WZ2]; 
if((V13!=V9)) goto l7;
x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
goto l13;
l7:x[jvj+8]=t[x[jvj+8]];
goto l5;
l9:V15=V23%2;
if((V15!=0)) goto l10;
x[jvj+3]=incon;
x[jvj+7]=x[RR] ;z[jvj+7]=z[RR];
goto l1;
l10:P=1;
AA=V23;
goto l17;
l15:x[jvj+5]=s[x[jvj+9]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+5,V19)*/
V19=pile[WZ2]; 
if((V19!=V23)) goto l16;
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
l20:pile[v[22]]=RR; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(RR,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+6,510,1)*/
l18:x[R]=x[RR] ;z[R]=z[RR];
v[0]=jvj; v[22]-=4; v[102]=0;return;
l16:x[jvj+9]=t[x[jvj+9]];
l14:if((x[jvj+9]>0)) goto l15;
pile[v[22]]=V23; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(V23,117,jvj+6)*/
goto l20;
l19:if((V23<=1)) goto l21;
x[jvj+6]=incon;
x[jvj+9]=x[RR] ;z[jvj+9]=z[RR];
goto l14;
l21:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
