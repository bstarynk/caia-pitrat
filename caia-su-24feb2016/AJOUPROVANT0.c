#include "dx.h"
void AJOUPROVANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0;
int N,U,ND,V,TY,UT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11546;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==919&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; U=pile[v[22]+1]; ND=pile[v[22]+2]; V=pile[v[22]+3]; TY=pile[v[22]+4]; UT=pile[v[22]+5]; v[22]+=6; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1538,N,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=683; pile[WZ1]=ND; pile[WZ2]=934; pile[WZ3]=U; pile[WZ4]=jvj+6; 
(*f[567])( );     /*QUADRI11(683,ND,934,U,jvj+6)*/
pile[v[22]]=N; pile[WZ1]=1538; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(N,1538,jvj+6)*/
l4:pile[v[22]]=159; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(159,jvj+6,jvj+7)*/
l5:if((x[jvj+7]>0)) goto l6;
pile[v[22]]=110; pile[WZ1]=V; pile[WZ2]=288; pile[WZ3]=TY; pile[WZ4]=jvj+10; 
(*f[692])( );     /*QUADRI13(110,V,288,TY,jvj+10)*/
pile[v[22]]=jvj+6; pile[WZ1]=159; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+6,159,jvj+10)*/
l8:pile[v[22]]=jvj+10; pile[WZ1]=337; pile[WZ2]=UT; 
(*f[35])( );     /*CHGC1(jvj+10,337,UT)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+4,V2)*/
V2=pile[WZ2]; 
if((V2!=ND)) goto l3;
pile[v[22]]=934; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(934,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[U])) goto l3;
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l6:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=110; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(110,jvj+8,V5)*/
V5=pile[WZ2]; 
if((V5!=V)) goto l7;
pile[v[22]]=288; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(288,jvj+8,jvj+9)*/
if((x[jvj+9]!=x[TY])) goto l7;
x[jvj+10]=x[jvj+8] ;z[jvj+10]=z[jvj+8];
goto l8;
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
}
