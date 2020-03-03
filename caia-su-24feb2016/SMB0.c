#include "dx.h"
void SMB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V13=0,V11=0,V10=0,V15=0,V7=0,DXX=0,V4=0,V20=0,V3=0,V22=0,V25=0,V23=0,V9=0,V40=0,V39=0,V44=0,V47=0,V45=0,V34=0,V28=0,V42=0,V27=0,V30=0,V31=0,V36=0,V35=0,V37=0,V17=0;
int Z,I,J,KK,C,N,HH;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; I=pile[v[22]+1]; J=pile[v[22]+2]; KK=pile[v[22]+3]; C=pile[v[22]+4]; N=pile[v[22]+5]; HH=pile[v[22]+6]; R=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=226; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(226,Z,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
if((x[N]!=397)) goto l11;
V40=C;
V39=I;
x[jvj+4]=x[Z] ;z[jvj+4]=z[Z];
l25:if((V40<48)) goto l41;
if((V40>57)) goto l41;
V44=135;
l26:if((V44==135)) goto l38;
V47=V40;
if((V47>=97)) goto l40;
if((V47<65)) goto l27;
if((V47<=90)) goto l39;
l27:V45=134;
l28:if((V45==135)) goto l38;
V34=135;
l29:if((V34==135)) goto l37;
if((V40<48)) goto l36;
if((V40>57)) goto l36;
V28=135;
l30:if((V28==135)) goto l33;
V42=V40;
if((V42>=97)) goto l35;
if((V42<65)) goto l31;
if((V42<=90)) goto l34;
l31:V27=134;
l32:if((V27==135)) goto l33;
l11:v[0]=jvj; v[22]-=8; v[102]=1;return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1!=C)) goto l3;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
V11=bh[v[1]][I];
if((V11<48)) goto l24;
if((V11>57)) goto l24;
V22=135;
l18:if((V22==135)) goto l21;
V25=V11;
if((V25>=97)) goto l23;
if((V25<65)) goto l19;
if((V25<=90)) goto l22;
l19:V23=134;
l20:if((V23==135)) goto l21;
V9=135;
l6:if((V9==135)) goto l7;
l13:if((V11<48)) goto l14;
if((V11>57)) goto l14;
V4=135;
l5:if((V4==135)) goto l10;
V20=V11;
if((V20>=97)) goto l17;
if((V20<65)) goto l15;
if((V20<=90)) goto l16;
l15:V3=134;
l4:if((V3==135)) goto l10;
goto l11;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l7:pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+3,V10)*/
V10=pile[WZ2]; 
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
l12:v[0]=jvj; v[22]-=8; v[102]=0;return;
l8:if((x[N]!=397)) goto l13;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+3,V13)*/
V13=pile[WZ2]; 
goto l13;
l9:V15=I-J;
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
pile[v[22]]=KK; pile[WZ1]=jvj+3; pile[WZ2]=V15; pile[WZ3]=HH; 
(*f[542])( );     /*SMD1(KK,jvj+3,V15,HH)*/
goto l12;
l10:V7=I+1;
pile[v[22]]=jvj+3; pile[WZ1]=V7; pile[WZ2]=J; pile[WZ3]=KK; pile[WZ4]=V11; pile[WZ5]=N; pile[v[22]+6]=HH; pile[v[22]+7]=R; 
(*f[410])( );if(v[102]) goto l11;     /*SMB1(jvj+3,V7,J,KK,V11,N,HH,R,DXX)*/
DXX=pile[v[22]+8]; 
goto l12;
l14:V4=134;
goto l5;
l16:V3=135;
goto l4;
l17:if((V20<=122)) goto l16;
goto l15;
l21:V9=134;
goto l6;
l22:V23=135;
goto l20;
l23:if((V25<=122)) goto l22;
goto l19;
l24:V22=134;
goto l18;
l33:pile[v[22]]=153; pile[WZ1]=jvj+4; pile[WZ2]=162; pile[WZ3]=V40; pile[WZ4]=jvj+5; 
(*f[272])( );     /*QUADRI9(153,jvj+4,162,V40,jvj+5)*/
V30=V39+1;
V31=bh[v[1]][V39];
pile[v[22]]=jvj+4; pile[WZ1]=226; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+4,226,jvj+5)*/
x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
V39=V30;
V40=V31;
goto l25;
l34:V27=135;
goto l32;
l35:if((V42<=122)) goto l34;
goto l31;
l36:V28=134;
goto l30;
l37:V36=V39-J;
V35=V36-1;
V37=V39-1;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
pile[v[22]]=KK; pile[WZ1]=jvj+4; pile[WZ2]=V35; pile[WZ3]=HH; 
(*f[542])( );     /*SMD1(KK,jvj+4,V35,HH)*/
V17=V37;
goto l12;
l38:V34=134;
goto l29;
l39:V45=135;
goto l28;
l40:if((V47<=122)) goto l39;
goto l27;
l41:V44=134;
goto l26;
}
