#include "dx.h"
void SUBGEN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VB=0,V10=0,V13=0,V26=0,V25=0;
int S;
int Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; Y=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=S; pile[WZ1]=jvj+1; 
(*f[378])( );     /*CPI0(S,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=102; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+1,102,jvj+10)*/
x[jvj+15]=102 ;z[jvj+15]=102;
pile[v[22]]=140; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+1,VB)*/
VB=pile[WZ2]; 
pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(258,21,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V10!=VB)) goto l2;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+3,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=639; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,639,jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+12,jvj+14)*/
if((V26=w[x[jvj+15]][1])==incon) goto l2;
if((V26!=23)) goto l12;
V25=x[jvj+1];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+10; pile[WZ2]=V25; 
(*f[134])( );     /*OTA0(jvj+15,jvj+10,V25)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+15; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+10,jvj+15,jvj+14)*/
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l3:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+1,jvj+4)*/
x[jvj+16]=w[x[jvj+4]][9];
l4:if((x[jvj+16]>0)) goto l5;
x[jvj+17]=w[x[jvj+4]][8];
l7:if((x[jvj+17]<=0)) goto l10;
x[jvj+7]=s[x[jvj+17]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+17];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,jvj+1,jvj+8)*/
x[jvj+18]=x[jvj+8] ;z[jvj+18]=z[jvj+8];
l8:if((x[jvj+18]>0)) goto l9;
x[jvj+17]=t[x[jvj+17]];
goto l7;
l5:x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+5,jvj+1,jvj+6)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+5; 
(*f[1096])( );     /*SUBGEN1(jvj+1,jvj+5,jvj+6)*/
l6:x[jvj+16]=t[x[jvj+16]];
goto l4;
l9:x[jvj+9]=s[x[jvj+18]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+18];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[1096])( );     /*SUBGEN1(jvj+1,jvj+7,jvj+9)*/
x[jvj+18]=t[x[jvj+18]];
goto l8;
l10:pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=Y; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+10,Y)*/
v[0]=jvj; v[22]-=2; v[102]=0;return;
l11:v[0]=jvj; v[22]-=2; v[102]=1;return;
l12:pile[v[22]]=jvj+10; pile[WZ1]=jvj+15; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+10,jvj+15,jvj+14)*/
goto l2;
}
