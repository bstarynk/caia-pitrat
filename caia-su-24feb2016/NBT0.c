#include "dx.h"
void NBT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V38=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(216,158,jvj+3)*/
x[jvj+12]=68 ;z[jvj+12]=68;
V38=incon;
if(x[jvj+12]==228||x[jvj+12]==278) goto l2;
V38=1;
l3:pile[v[22]]=jvj+3; pile[WZ1]=130; pile[WZ2]=V38; 
(*f[186])( );     /*BTC0(jvj+3,130,V38)*/
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,A,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==228)) goto l4;
if((x[jvj+5]!=278)) goto l5;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,A,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=278; pile[WZ2]=jvj+3; 
(*f[682])( );     /*NBT1(jvj+7,278,jvj+3)*/
l5:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,A,jvj+8)*/
x[jvj+15]=w[x[jvj+8]][8];
l6:if((x[jvj+15]>0)) goto l7;
x[jvj+17]=w[x[jvj+8]][9];
l10:if((x[jvj+17]<=0)) goto l13;
x[jvj+13]=s[x[jvj+17]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+17];
if((x[jvj+8]!=22)) goto l12;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+1,jvj+2)*/
F=x[jvj+2];
if((F!=278)) goto l1;
if((x[jvj+13]==103)) goto l11;
l1:if(F==295||F==585||F==137||F==149||F==139||F==138||F==141||F==432||F==228||F==647||F==1382) goto l11;
l12:pile[v[22]]=jvj+13; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+13,A,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+12; pile[WZ2]=jvj+3; 
(*f[682])( );     /*NBT1(jvj+14,jvj+12,jvj+3)*/
l11:x[jvj+17]=t[x[jvj+17]];
goto l10;
l2:V38=3;
goto l3;
l4:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,A,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=228; pile[WZ2]=jvj+3; 
(*f[682])( );     /*NBT1(jvj+6,228,jvj+3)*/
goto l5;
l7:x[jvj+9]=s[x[jvj+15]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+15];
pile[v[22]]=jvj+9; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,A,jvj+10)*/
x[jvj+16]=x[jvj+10] ;z[jvj+16]=z[jvj+10];
l8:if((x[jvj+16]>0)) goto l9;
x[jvj+15]=t[x[jvj+15]];
goto l6;
l9:x[jvj+11]=s[x[jvj+16]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+16];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=jvj+3; 
(*f[682])( );     /*NBT1(jvj+11,jvj+12,jvj+3)*/
x[jvj+16]=t[x[jvj+16]];
goto l8;
l13:pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+3,R)*/
R=pile[WZ2]; 
v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l14:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
