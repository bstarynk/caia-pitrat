#include "dx.h"
void FMATRICE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V10=0,V15=0,V12=0;
int C,B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=vo[16];z[jvj+1]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(128,jvj+1,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l5;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3!=A)) goto l2;
pile[v[22]]=128; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(128,jvj+3,jvj+4)*/
l3:if((x[jvj+4]<=0)) goto l5;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+5,V5)*/
V5=pile[WZ2]; 
if((V5!=B)) goto l4;
pile[v[22]]=355; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(355,jvj+5,jvj+6)*/
V10=1;
x[jvj+8]=x[jvj+6] ;z[jvj+8]=z[jvj+6];
V15=V10;
l6:if((V15!=C)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+8,jvj+7)*/
pile[v[22]]=162; pile[WZ1]=jvj+7; 
(*f[219])( );if(v[102]) goto l5;     /*FNDC2(162,jvj+7,R)*/
R=pile[WZ2]; 
v[0]=jvj; v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+4]=t[x[jvj+4]];
goto l3;
l5:v[0]=jvj; v[22]-=4; v[102]=1;return;
l7:if((V15>=C)) goto l5;
pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+8,jvj+9)*/
V12=V15+1;
V15=V12;
x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
goto l6;
}
