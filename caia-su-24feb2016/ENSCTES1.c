#include "dx.h"
void ENSCTES1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y=0,V8=0,V15=0,V18=0,V19=0,I=0;
int A,R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
V15=incon;
if((I==0)) goto l2;
if((I==1)) goto l2;
if((I==2)) goto l3;
V15=500;
l5:x[jvj+3]=d[149];z[jvj+3]=0;
pile[v[22]]=117; pile[WZ1]=I; pile[WZ2]=1410; pile[WZ3]=V15; pile[WZ4]=jvj+4; 
(*f[391])( );     /*QUADRI10(117,I,1410,V15,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=R; 
(*f[196])( );     /*PLUF0(jvj+3,jvj+4,R)*/
l6:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,A,jvj+5)*/
if((x[jvj+5]==22)) goto l7;
if((x[jvj+5]!=43)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,A,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+9,jvj+2)*/
V19=incon;
pile[v[22]]=1410; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1410,jvj+2,V18)*/
V18=pile[WZ2]; 
V19=V18;
l9:x[jvj+10]=d[150];z[jvj+10]=0;
pile[v[22]]=176; pile[WZ1]=jvj+2; pile[WZ2]=1410; pile[WZ3]=V19; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(176,jvj+2,1410,V19,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=R; 
(*f[196])( );     /*PLUF0(jvj+10,jvj+11,R)*/
l10:x[jvj+17]=w[x[jvj+5]][9];
l11:if((x[jvj+17]>0)) goto l12;
x[jvj+18]=w[x[jvj+5]][8];
l14:if((x[jvj+18]<=0)) goto l17;
x[jvj+14]=s[x[jvj+18]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+18];
pile[v[22]]=jvj+14; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,A,jvj+15)*/
x[jvj+19]=x[jvj+15] ;z[jvj+19]=z[jvj+15];
l15:if((x[jvj+19]>0)) goto l16;
x[jvj+18]=t[x[jvj+18]];
goto l14;
l1:V8=150;
l8:x[jvj+7]=d[150];z[jvj+7]=0;
pile[v[22]]=176; pile[WZ1]=jvj+1; pile[WZ2]=1410; pile[WZ3]=V8; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(176,jvj+1,1410,V8,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=R; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+8,R)*/
goto l10;
l2:V15=100;
goto l5;
l3:V15=200;
goto l5;
l4:V19=200;
goto l9;
l7:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,A,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+6,jvj+1)*/
V8=incon;
pile[v[22]]=1410; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1410,jvj+1,Y)*/
Y=pile[WZ2]; 
V8=Y;
goto l8;
l12:x[jvj+12]=s[x[jvj+17]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+17];
pile[v[22]]=jvj+12; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+12,A,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; 
(*f[1913])( );     /*ENSCTES1(jvj+13,R)*/
l13:x[jvj+17]=t[x[jvj+17]];
goto l11;
l16:x[jvj+16]=s[x[jvj+19]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+19];
pile[v[22]]=jvj+16; pile[WZ1]=R; 
(*f[1913])( );     /*ENSCTES1(jvj+16,R)*/
x[jvj+19]=t[x[jvj+19]];
goto l15;
l17:v[0]=jvj; v[22]-=2; return;
}
