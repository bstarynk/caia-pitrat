#include "dx.h"
void SYB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,J=0,V22=0,I=0,V23=0,C=0,V1=0,V13=0,V10=0,HH=0,V15=0,V8=0,V7=0,V20=0,V27=0,V12=0,V4=0,V17=0,V32=0,V11=0,V34=0,V3=0,V36=0,V16=0,V50=0,V49=0,V45=0,V39=0,V53=0,V38=0,V41=0,V42=0,V47=0,V46=0,V44=0,V55=0;
int H;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11464;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==118&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[R]=x[jvj+3]=x[jvj+7]=HH=incon;
V21=H+1;
J=V21;
V22=J+1;
I=V22;
V23=bh[v[1]][J];
C=V23;
x[jvj+10]=incon;
if((C==36)) goto l1;
if((C==38)) goto l2;
if((C==34)) goto l3;
if((C==(-80))) goto l4;
if((C==35)) goto l5;
if((C!=64)) goto l12;
x[jvj+10]=1389 ;z[jvj+10]=1389;
l6:x[jvj+3]=x[jvj+10] ;z[jvj+3]=z[jvj+10];
x[jvj+7]=x[jvj+10] ;z[jvj+7]=z[jvj+10];
pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+4)*/
l7:if((x[jvj+4]<=0)) goto l12;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=162; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l8;     /*FNDC2(162,jvj+5,V1)*/
V1=pile[WZ2]; 
if((V1!=C)) goto l8;
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
V13=bh[v[1]][I];
if((V13<48)) goto l32;
if((V13>57)) goto l32;
V12=135;
l9:if((V12==134)) goto l36;
l12:pile[v[22]]=130; pile[WZ1]=77; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,77,HH)*/
HH=pile[WZ2]; 
l16:if(x[jvj+6]==incon) goto l17;
if(x[R]==incon) goto l21;
l28:if(HH!=incon) goto l29;
l31:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:x[jvj+10]=1387 ;z[jvj+10]=1387;
goto l6;
l2:x[jvj+10]=1388 ;z[jvj+10]=1388;
goto l6;
l3:x[jvj+10]=1390 ;z[jvj+10]=1390;
goto l6;
l4:x[jvj+10]=1391 ;z[jvj+10]=1391;
goto l6;
l5:x[jvj+10]=1691 ;z[jvj+10]=1691;
goto l6;
l8:x[jvj+4]=t[x[jvj+4]];
goto l7;
l11:pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+6,V10)*/
V10=pile[WZ2]; 
x[R]=x[jvj+6] ;z[R]=z[jvj+6];
goto l12;
l15:pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(163,jvj+6,V15)*/
V15=pile[WZ2]; 
l30:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l17:if(x[R]==incon) goto l18;
goto l28;
l18:if(x[jvj+3]!=incon) goto l19;
goto l30;
l19:if(x[jvj+7]!=incon) goto l20;
goto l30;
l20:if(HH!=incon) goto l47;
goto l30;
l21:if(x[jvj+7]!=incon) goto l22;
goto l30;
l22:if(HH!=incon) goto l23;
goto l30;
l23:V8=bh[v[1]][I];
if((V8<48)) goto l33;
if((V8>57)) goto l33;
V4=135;
l14:if((V4==135)) goto l24;
V34=V8;
if((V34>=97)) goto l42;
if((V34<65)) goto l40;
if((V34<=90)) goto l41;
l40:V3=134;
l13:if((V3==135)) goto l24;
l34:if((V8<48)) goto l35;
if((V8>57)) goto l35;
V17=135;
l25:if((V17==134)) goto l43;
goto l30;
l24:V7=I+1;
pile[v[22]]=jvj+6; pile[WZ1]=V7; pile[WZ2]=J; pile[WZ3]=V8; pile[WZ4]=HH; pile[WZ5]=jvj+7; pile[v[22]+6]=R; 
(*f[347])( );if(v[102]) goto l34;     /*SYB1(jvj+6,V7,J,V8,HH,jvj+7,R)*/
l29:pile[v[22]]=163; pile[WZ1]=R; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(163,R,V27)*/
V27=pile[WZ2]; 
if((V27!=HH)) goto l31;
pile[v[22]]=77; pile[WZ1]=130; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(77,130,(-1))*/
goto l31;
l27:V20=I-J;
x[R]=x[jvj+6] ;z[R]=z[jvj+6];
pile[v[22]]=jvj+6; pile[WZ1]=V20; pile[WZ2]=HH; pile[WZ3]=jvj+7; 
(*f[349])( );     /*SMD0(jvj+6,V20,HH,jvj+7)*/
goto l29;
l32:V12=134;
goto l9;
l33:V4=134;
goto l14;
l35:V17=134;
goto l25;
l36:V32=V13;
if((V32>=97)) goto l39;
if((V32<65)) goto l37;
if((V32<=90)) goto l38;
l37:V11=134;
l10:if((V11==134)) goto l11;
goto l12;
l38:V11=135;
goto l10;
l39:if((V32<=122)) goto l38;
goto l37;
l41:V3=135;
goto l13;
l42:if((V34<=122)) goto l41;
goto l40;
l43:V36=V8;
if((V36>=97)) goto l46;
if((V36<65)) goto l44;
if((V36<=90)) goto l45;
l44:V16=134;
l26:if((V16==134)) goto l15;
goto l30;
l45:V16=135;
goto l26;
l46:if((V36<=122)) goto l45;
goto l44;
l47:V50=C;
V49=I;
x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
l48:if((V50<48)) goto l64;
if((V50>57)) goto l64;
V45=135;
l49:if((V45==134)) goto l63;
l50:if((V50<48)) goto l57;
if((V50>57)) goto l57;
V39=135;
l51:if((V39==135)) goto l54;
V53=V50;
if((V53>=97)) goto l56;
if((V53<65)) goto l52;
if((V53<=90)) goto l55;
l52:V38=134;
l53:if((V38==135)) goto l54;
goto l30;
l54:pile[v[22]]=153; pile[WZ1]=jvj+8; pile[WZ2]=162; pile[WZ3]=V50; pile[WZ4]=jvj+9; 
(*f[272])( );     /*QUADRI9(153,jvj+8,162,V50,jvj+9)*/
V41=V49+1;
V42=bh[v[1]][V49];
pile[v[22]]=jvj+8; pile[WZ1]=226; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+8,226,jvj+9)*/
x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
V49=V41;
V50=V42;
goto l48;
l55:V38=135;
goto l53;
l56:if((V53<=122)) goto l55;
goto l52;
l57:V39=134;
goto l51;
l59:V47=V49-J;
V46=V47-1;
x[R]=x[jvj+8] ;z[R]=z[jvj+8];
pile[v[22]]=jvj+8; pile[WZ1]=V46; pile[WZ2]=HH; pile[WZ3]=jvj+7; 
(*f[349])( );     /*SMD0(jvj+8,V46,HH,jvj+7)*/
goto l29;
l60:V44=135;
l58:if((V44==134)) goto l59;
goto l50;
l61:if((V55<=122)) goto l60;
l62:V44=134;
goto l58;
l63:V55=V50;
if((V55>=97)) goto l61;
if((V55<65)) goto l62;
if((V55<=90)) goto l60;
goto l62;
l64:V45=134;
goto l49;
}
