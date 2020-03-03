#include "dx.h"
void SYA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V9=0,V8=0,V7=0,V11=0,V4=0,V13=0,V23=0,V22=0,V16=0,V17=0,V20=0,V19=0;
int Z,I,J,C,HH;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; I=pile[v[22]+1]; J=pile[v[22]+2]; C=pile[v[22]+3]; HH=pile[v[22]+4]; R=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=226; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(226,Z,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
V23=C;
V22=I;
x[jvj+4]=x[Z] ;z[jvj+4]=z[Z];
l10:if((V23==96)) goto l11;
pile[v[22]]=153; pile[WZ1]=jvj+4; pile[WZ2]=162; pile[WZ3]=V23; pile[WZ4]=jvj+5; 
(*f[272])( );     /*QUADRI9(153,jvj+4,162,V23,jvj+5)*/
V16=V22+1;
V17=bh[v[1]][V22];
pile[v[22]]=jvj+4; pile[WZ1]=226; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+4,226,jvj+5)*/
x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
V22=V16;
V23=V17;
goto l10;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1!=C)) goto l3;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
V8=bh[v[1]][I];
if((V8!=96)) goto l6;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+3,V7)*/
V7=pile[WZ2]; 
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
l7:pile[v[22]]=163; pile[WZ1]=R; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,R,V13)*/
V13=pile[WZ2]; 
if((V13!=HH)) goto l9;
pile[v[22]]=77; pile[WZ1]=130; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(77,130,(-1))*/
l9:v[0]=jvj; v[22]-=6; v[102]=0;return;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+3,V9)*/
V9=pile[WZ2]; 
l6:if(V8==96||V8==94) goto l8;
V4=I+1;
pile[v[22]]=jvj+3; pile[WZ1]=V4; pile[WZ2]=J; pile[WZ3]=V8; pile[WZ4]=HH; pile[WZ5]=R; 
(*f[540])( );if(v[102]) goto l8;     /*SYA1(jvj+3,V4,J,V8,HH,R)*/
goto l7;
l5:V11=I-J;
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
pile[v[22]]=94; pile[WZ1]=jvj+3; pile[WZ2]=V11; pile[WZ3]=HH; 
(*f[542])( );     /*SMD1(94,jvj+3,V11,HH)*/
goto l7;
l8:v[0]=jvj; v[22]-=6; v[102]=1;return;
l11:V20=V22-J;
V19=V20-1;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
pile[v[22]]=94; pile[WZ1]=jvj+4; pile[WZ2]=V19; pile[WZ3]=HH; 
(*f[542])( );     /*SMD1(94,jvj+4,V19,HH)*/
goto l7;
}
