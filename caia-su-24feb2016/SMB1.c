#include "dx.h"
void SMB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V13=0,V11=0,V10=0,V15=0,V7=0,V20=0,V21=0,V4=0,V23=0,V3=0,V25=0,V28=0,V26=0,V9=0,V43=0,V42=0,V47=0,V50=0,V48=0,V37=0,V31=0,V45=0,V30=0,V33=0,V34=0,V39=0,V38=0,V40=0;
int Z,I,J,KK,C,N,HH;
int R,DX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; I=pile[v[22]+1]; J=pile[v[22]+2]; KK=pile[v[22]+3]; C=pile[v[22]+4]; N=pile[v[22]+5]; HH=pile[v[22]+6]; R=pile[v[22]+7]; v[22]+=9; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V21=C;
V20=I;
x[jvj+1]=x[Z] ;z[jvj+1]=z[Z];
l1:pile[v[22]]=226; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(226,jvj+1,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
if((x[N]!=397)) goto l13;
V43=V21;
V42=V20;
x[jvj+5]=x[jvj+1] ;z[jvj+5]=z[jvj+1];
l27:if((V43<48)) goto l43;
if((V43>57)) goto l43;
V47=135;
l28:if((V47==135)) goto l40;
V50=V43;
if((V50>=97)) goto l42;
if((V50<65)) goto l29;
if((V50<=90)) goto l41;
l29:V48=134;
l30:if((V48==135)) goto l40;
V37=135;
l31:if((V37==135)) goto l39;
if((V43<48)) goto l38;
if((V43>57)) goto l38;
V31=135;
l32:if((V31==135)) goto l35;
V45=V43;
if((V45>=97)) goto l37;
if((V45<65)) goto l33;
if((V45<=90)) goto l36;
l33:V30=134;
l34:if((V30==135)) goto l35;
l13:x[R]=DX=incon;
v[0]=jvj; v[22]-=9; v[102]=1;return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(162,jvj+3,V1)*/
V1=pile[WZ2]; 
if((V1!=V21)) goto l4;
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
V11=bh[v[1]][V20];
if((V11<48)) goto l26;
if((V11>57)) goto l26;
V25=135;
l20:if((V25==135)) goto l23;
V28=V11;
if((V28>=97)) goto l25;
if((V28<65)) goto l21;
if((V28<=90)) goto l24;
l21:V26=134;
l22:if((V26==135)) goto l23;
V9=135;
l7:if((V9==135)) goto l8;
l15:if((V11<48)) goto l16;
if((V11>57)) goto l16;
V4=135;
l6:if((V4==135)) goto l12;
V23=V11;
if((V23>=97)) goto l19;
if((V23<65)) goto l17;
if((V23<=90)) goto l18;
l17:V3=134;
l5:if((V3==135)) goto l12;
goto l13;
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l8:pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+4,V10)*/
V10=pile[WZ2]; 
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
l9:DX=V20;
l14:v[0]=jvj; v[22]-=9; pile[v[22]+8]=DX; v[102]=0;return;
l10:if((x[N]!=397)) goto l15;
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+4,V13)*/
V13=pile[WZ2]; 
goto l15;
l11:V15=V20-J;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
pile[v[22]]=KK; pile[WZ1]=jvj+4; pile[WZ2]=V15; pile[WZ3]=HH; 
(*f[542])( );     /*SMD1(KK,jvj+4,V15,HH)*/
goto l9;
l12:V7=V20+1;
x[jvj+1]=x[jvj+4] ;z[jvj+1]=z[jvj+4];
V20=V7;
V21=V11;
goto l1;
l16:V4=134;
goto l6;
l18:V3=135;
goto l5;
l19:if((V23<=122)) goto l18;
goto l17;
l23:V9=134;
goto l7;
l24:V26=135;
goto l22;
l25:if((V28<=122)) goto l24;
goto l21;
l26:V25=134;
goto l20;
l35:pile[v[22]]=153; pile[WZ1]=jvj+5; pile[WZ2]=162; pile[WZ3]=V43; pile[WZ4]=jvj+6; 
(*f[272])( );     /*QUADRI9(153,jvj+5,162,V43,jvj+6)*/
V33=V42+1;
V34=bh[v[1]][V42];
pile[v[22]]=jvj+5; pile[WZ1]=226; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+5,226,jvj+6)*/
x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
V42=V33;
V43=V34;
goto l27;
l36:V30=135;
goto l34;
l37:if((V45<=122)) goto l36;
goto l33;
l38:V31=134;
goto l32;
l39:V39=V42-J;
V38=V39-1;
V40=V42-1;
x[R]=x[jvj+5] ;z[R]=z[jvj+5];
pile[v[22]]=KK; pile[WZ1]=jvj+5; pile[WZ2]=V38; pile[WZ3]=HH; 
(*f[542])( );     /*SMD1(KK,jvj+5,V38,HH)*/
DX=V40;
goto l14;
l40:V37=134;
goto l31;
l41:V48=135;
goto l30;
l42:if((V50<=122)) goto l41;
goto l29;
l43:V47=134;
goto l28;
}
