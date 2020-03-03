#include "dx.h"
void SYA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V12=0,J=0,V14=0,I=0,V15=0,C=0,V1=0,HH=0,V9=0,V8=0,V7=0,V11=0,V4=0,V18=0,V28=0,V27=0,V21=0,V22=0,V25=0,V24=0;
int H;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
HH=incon;
V13=H+1;
V12=V13+1;
J=V12;
V14=J+1;
I=V14;
V15=bh[v[1]][J];
C=V15;
x[jvj+1]=1392 ;z[jvj+1]=1392;
pile[v[22]]=130; pile[WZ1]=77; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,77,HH)*/
HH=pile[WZ2]; 
l1:pile[v[22]]=226; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(226,jvj+1,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
if(HH!=incon) goto l13;
l11:v[0]=jvj; v[22]-=2; v[102]=1;return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(162,jvj+3,V1)*/
V1=pile[WZ2]; 
if((V1!=C)) goto l4;
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
V8=bh[v[1]][I];
if((V8==96)) goto l6;
if(HH!=incon) goto l9;
goto l11;
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l5:pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+4,V9)*/
V9=pile[WZ2]; 
l9:if(V8==96||V8==94) goto l11;
V4=I+1;
pile[v[22]]=jvj+4; pile[WZ1]=V4; pile[WZ2]=J; pile[WZ3]=V8; pile[WZ4]=HH; pile[WZ5]=R; 
(*f[540])( );if(v[102]) goto l11;     /*SYA1(jvj+4,V4,J,V8,HH,R)*/
l10:pile[v[22]]=163; pile[WZ1]=R; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,R,V18)*/
V18=pile[WZ2]; 
if((V18!=HH)) goto l12;
pile[v[22]]=77; pile[WZ1]=130; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(77,130,(-1))*/
l12:v[0]=jvj; v[22]-=2; v[102]=0;return;
l6:pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+4,V7)*/
V7=pile[WZ2]; 
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
if(HH!=incon) goto l10;
goto l12;
l7:if(HH!=incon) goto l5;
goto l11;
l8:V11=I-J;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
pile[v[22]]=94; pile[WZ1]=jvj+4; pile[WZ2]=V11; pile[WZ3]=HH; 
(*f[542])( );     /*SMD1(94,jvj+4,V11,HH)*/
goto l10;
l13:V28=C;
V27=I;
x[jvj+5]=x[jvj+1] ;z[jvj+5]=z[jvj+1];
l14:if((V28==96)) goto l15;
pile[v[22]]=153; pile[WZ1]=jvj+5; pile[WZ2]=162; pile[WZ3]=V28; pile[WZ4]=jvj+6; 
(*f[272])( );     /*QUADRI9(153,jvj+5,162,V28,jvj+6)*/
V21=V27+1;
V22=bh[v[1]][V27];
pile[v[22]]=jvj+5; pile[WZ1]=226; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+5,226,jvj+6)*/
x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
V27=V21;
V28=V22;
goto l14;
l15:V25=V27-J;
V24=V25-1;
x[R]=x[jvj+5] ;z[R]=z[jvj+5];
pile[v[22]]=94; pile[WZ1]=jvj+5; pile[WZ2]=V24; pile[WZ3]=HH; 
(*f[542])( );     /*SMD1(94,jvj+5,V24,HH)*/
goto l10;
}
