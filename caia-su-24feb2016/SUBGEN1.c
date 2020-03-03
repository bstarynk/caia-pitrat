#include "dx.h"
void SUBGEN1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VB=0,V10=0,V13=0,V24=0,V23=0;
int R,BT,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; BT=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,X,VB)*/
VB=pile[WZ2]; 
pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(258,21,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l3;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V10)*/
V10=pile[WZ2]; 
if((V10!=VB)) goto l2;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+2,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=639; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,639,jvj+9)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+10,jvj+12)*/
if((V24=w[x[BT]][1])==incon) goto l2;
if((V24!=23)) goto l11;
V23=x[X];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V23; 
(*f[134])( );     /*OTA0(BT,R,V23)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+12)*/
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l3:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,X,jvj+3)*/
x[jvj+13]=w[x[jvj+3]][9];
l4:if((x[jvj+13]>0)) goto l5;
x[jvj+14]=w[x[jvj+3]][8];
l7:if((x[jvj+14]<=0)) goto l10;
x[jvj+6]=s[x[jvj+14]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+14];
pile[v[22]]=jvj+6; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,X,jvj+7)*/
x[jvj+15]=x[jvj+7] ;z[jvj+15]=z[jvj+7];
l8:if((x[jvj+15]>0)) goto l9;
x[jvj+14]=t[x[jvj+14]];
goto l7;
l5:x[jvj+4]=s[x[jvj+13]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+13];
pile[v[22]]=jvj+4; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+4,X,jvj+5)*/
pile[v[22]]=X; pile[WZ1]=jvj+4; 
(*f[1096])( );     /*SUBGEN1(X,jvj+4,jvj+5)*/
l6:x[jvj+13]=t[x[jvj+13]];
goto l4;
l9:x[jvj+8]=s[x[jvj+15]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+15];
pile[v[22]]=X; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[1096])( );     /*SUBGEN1(X,jvj+6,jvj+8)*/
x[jvj+15]=t[x[jvj+15]];
goto l8;
l10:v[0]=jvj; v[22]-=3; return;
l11:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(R,BT,jvj+12)*/
goto l2;
}
