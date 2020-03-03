#include "dx.h"
void SYB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V15=0,V13=0,V10=0,V20=0,V7=0,V23=0,V24=0,V4=0,V12=0,V27=0,V3=0,V29=0,V11=0,V43=0,V42=0,V38=0,V32=0,V46=0,V31=0,V34=0,V35=0,V40=0,V39=0,V37=0,V48=0;
int Z,I,J,C,HH,ZA;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11464;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==347&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
Z=pile[v[22]]; I=pile[v[22]+1]; J=pile[v[22]+2]; C=pile[v[22]+3]; HH=pile[v[22]+4]; ZA=pile[v[22]+5]; R=pile[v[22]+6]; v[22]+=7; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V24=C;
V23=I;
x[jvj+3]=x[Z] ;z[jvj+3]=z[Z];
l1:pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
V43=V24;
V42=V23;
x[jvj+7]=x[jvj+3] ;z[jvj+7]=z[jvj+3];
l25:if((V43<48)) goto l41;
if((V43>57)) goto l41;
V38=135;
l26:if((V38==134)) goto l40;
l27:if((V43<48)) goto l34;
if((V43>57)) goto l34;
V32=135;
l28:if((V32==135)) goto l31;
V46=V43;
if((V46>=97)) goto l33;
if((V46<65)) goto l29;
if((V46<=90)) goto l32;
l29:V31=134;
l30:if((V31==135)) goto l31;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; v[102]=1;return;
l3:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=162; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(162,jvj+5,V1)*/
V1=pile[WZ2]; 
if((V1!=V24)) goto l4;
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
V13=bh[v[1]][V23];
if((V13<48)) goto l17;
if((V13>57)) goto l17;
V12=135;
l8:if((V12==134)) goto l21;
l15:if((V13<48)) goto l16;
if((V13>57)) goto l16;
V4=135;
l6:if((V4==135)) goto l12;
V27=V13;
if((V27>=97)) goto l20;
if((V27<65)) goto l18;
if((V27<=90)) goto l19;
l18:V3=134;
l5:if((V3==135)) goto l12;
goto l13;
l4:x[jvj+4]=t[x[jvj+4]];
goto l2;
l7:pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+6,V15)*/
V15=pile[WZ2]; 
goto l15;
l10:pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+6,V10)*/
V10=pile[WZ2]; 
x[R]=x[jvj+6] ;z[R]=z[jvj+6];
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; v[102]=0;return;
l11:V20=V23-J;
x[R]=x[jvj+6] ;z[R]=z[jvj+6];
pile[v[22]]=jvj+6; pile[WZ1]=V20; pile[WZ2]=HH; pile[WZ3]=ZA; 
(*f[349])( );     /*SMD0(jvj+6,V20,HH,ZA)*/
goto l14;
l12:V7=V23+1;
x[jvj+3]=x[jvj+6] ;z[jvj+3]=z[jvj+6];
V23=V7;
V24=V13;
goto l1;
l16:V4=134;
goto l6;
l17:V12=134;
goto l8;
l19:V3=135;
goto l5;
l20:if((V27<=122)) goto l19;
goto l18;
l21:V29=V13;
if((V29>=97)) goto l24;
if((V29<65)) goto l22;
if((V29<=90)) goto l23;
l22:V11=134;
l9:if((V11==134)) goto l10;
goto l15;
l23:V11=135;
goto l9;
l24:if((V29<=122)) goto l23;
goto l22;
l31:pile[v[22]]=153; pile[WZ1]=jvj+7; pile[WZ2]=162; pile[WZ3]=V43; pile[WZ4]=jvj+8; 
(*f[272])( );     /*QUADRI9(153,jvj+7,162,V43,jvj+8)*/
V34=V42+1;
V35=bh[v[1]][V42];
pile[v[22]]=jvj+7; pile[WZ1]=226; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+7,226,jvj+8)*/
x[jvj+7]=x[jvj+8] ;z[jvj+7]=z[jvj+8];
V42=V34;
V43=V35;
goto l25;
l32:V31=135;
goto l30;
l33:if((V46<=122)) goto l32;
goto l29;
l34:V32=134;
goto l28;
l36:V40=V42-J;
V39=V40-1;
x[R]=x[jvj+7] ;z[R]=z[jvj+7];
pile[v[22]]=jvj+7; pile[WZ1]=V39; pile[WZ2]=HH; pile[WZ3]=ZA; 
(*f[349])( );     /*SMD0(jvj+7,V39,HH,ZA)*/
goto l14;
l37:V37=135;
l35:if((V37==134)) goto l36;
goto l27;
l38:if((V48<=122)) goto l37;
l39:V37=134;
goto l35;
l40:V48=V43;
if((V48>=97)) goto l38;
if((V48<65)) goto l39;
if((V48<=90)) goto l37;
goto l39;
l41:V38=134;
goto l26;
}
