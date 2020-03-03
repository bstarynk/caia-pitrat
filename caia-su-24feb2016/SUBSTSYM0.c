#include "dx.h"
void SUBSTSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V12=0,V26=0;
int R,S;
int T;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; S=pile[v[22]+1]; T=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,R,jvj+1)*/
if((x[jvj+1]!=484)) goto l15;
pile[v[22]]=102; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,R,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+2,jvj+3)*/
if(x[jvj+3]!=96&&x[jvj+3]!=89&&x[jvj+3]!=41&&x[jvj+3]!=20&&x[jvj+3]!=128&&x[jvj+3]!=570&&x[jvj+3]!=1317) goto l15;
pile[v[22]]=1179; pile[WZ1]=S; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1179,S,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l4;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=447; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(447,jvj+5,jvj+6)*/
pile[v[22]]=R; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[760])( );     /*MEMEX0(R,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l3;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:pile[v[22]]=459; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(459,jvj+5,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=T; 
(*f[255])( );     /*COPEXP0(jvj+8,T)*/
l14:v[0]=jvj; v[22]-=3; v[102]=0;return;
l4:pile[v[22]]=R; pile[WZ1]=T; 
(*f[255])( );     /*COPEXP0(R,T)*/
goto l14;
l7:x[jvj+12]=s[x[jvj+19]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+19];
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=S; pile[WZ2]=jvj+14; 
(*f[1578])( );if(v[102]) goto l8;     /*SUBSTSYM0(jvj+13,S,jvj+14)*/
pile[v[22]]=T; pile[WZ1]=jvj+12; 
(*f[35])( );     /*CHGC1(T,jvj+12,jvj+14)*/
l8:x[jvj+19]=t[x[jvj+19]];
l6:if((x[jvj+19]>0)) goto l7;
x[jvj+20]=w[x[jvj+9]][8];
l9:if((x[jvj+20]<=0)) goto l14;
x[jvj+15]=s[x[jvj+20]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+20];
pile[v[22]]=jvj+15; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+15,R,jvj+16)*/
x[jvj+21]=x[jvj+16] ;z[jvj+21]=z[jvj+16];
l10:if((x[jvj+21]>0)) goto l11;
x[jvj+20]=t[x[jvj+20]];
goto l9;
l11:x[jvj+17]=s[x[jvj+21]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+21];
pile[v[22]]=jvj+17; pile[WZ1]=S; pile[WZ2]=jvj+18; 
(*f[1578])( );if(v[102]) goto l12;     /*SUBSTSYM0(jvj+17,S,jvj+18)*/
pile[v[22]]=T; pile[WZ1]=jvj+15; 
(*f[36])( );     /*PLUSC0(T,jvj+15,jvj+18)*/
l12:x[jvj+21]=t[x[jvj+21]];
goto l10;
l13:v[0]=jvj; v[22]-=3; v[102]=1;return;
l15:pile[v[22]]=jvj+1; pile[WZ1]=100; pile[WZ2]=T; 
(*f[54])( );     /*TRI1(jvj+1,100,T)*/
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,R,jvj+9)*/
if((x[jvj+10]=w[x[jvj+9]][3])==incon) goto l5;
pile[v[22]]=R; pile[WZ1]=jvj+10; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(R,jvj+10,V24,jvj+11)*/
V24=pile[WZ2]; 
V12=V24;
V26=V12;
pile[v[22]]=T; pile[WZ2]=V26; 
(*f[43])( );     /*CHGC2(T,jvj+10,V26)*/
l5:x[jvj+19]=w[x[jvj+9]][9];
goto l6;
}
