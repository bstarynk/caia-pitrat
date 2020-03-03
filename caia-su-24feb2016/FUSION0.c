#include "dx.h"
void FUSION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V51=0,V47=0,V48=0,V49=0,V50=0,V26=0,V56=0,V52=0,V53=0,V54=0,V55=0,V34=0,V44=0,V24=0,I=0,V21=0,V46=0,V75=0,V79=0,R=0,V82=0,V84=0,V86=0,V88=0,V90=0,V92=0,V94=0,V96=0,V16=0;
int X,Y,V,VV;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Y=pile[v[22]+1]; V=pile[v[22]+2]; VV=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=763; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(763,X,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=763; pile[WZ1]=Y; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(763,Y,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=X; pile[WZ1]=763; pile[WZ2]=jvj+2; 
(*f[34])( );     /*CHGC0(X,763,jvj+2)*/
pile[v[22]]=258; pile[WZ1]=Y; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(258,Y,jvj+16)*/
pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(258,X,jvj+17)*/
x[jvj+47]=x[jvj+16] ;z[jvj+47]=z[jvj+16];
l14:if((x[jvj+47]<=0)) goto l21;
x[jvj+6]=s[x[jvj+47]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+47];
pile[v[22]]=1018; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1018,jvj+6,jvj+18)*/
pile[v[22]]=447; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(447,jvj+6,jvj+19)*/
x[jvj+33]=x[jvj+18] ;z[jvj+33]=z[jvj+18];
x[jvj+35]=x[jvj+19] ;z[jvj+35]=z[jvj+19];
x[jvj+48]=x[jvj+17] ;z[jvj+48]=z[jvj+17];
l16:if((x[jvj+48]<=0)) goto l18;
x[jvj+20]=s[x[jvj+48]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+48];
pile[v[22]]=1018; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1018,jvj+20,jvj+21)*/
if((x[jvj+21]!=x[jvj+33])) goto l17;
V75=x[jvj+42]=V79=x[jvj+44]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+6; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(145,jvj+6,jvj+41)*/
pile[v[22]]=447; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(447,jvj+6,jvj+42)*/
V75=x[jvj+41];
l26:pile[v[22]]=145; pile[WZ1]=jvj+20; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(145,jvj+20,jvj+43)*/
pile[v[22]]=447; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(447,jvj+20,jvj+44)*/
V79=x[jvj+43];
l27:if(V75!=incon) goto l37;
l28:R=51;
l5:if((R==51)) goto l6;
if((R!=580)) goto l17;
V51=x[jvj+33];
pile[v[22]]=23; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(23,0,126,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V47,V,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V48,VV,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V51; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(20,V51,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
l17:x[jvj+48]=t[x[jvj+48]];
goto l16;
l2:x[jvj+3]=s[x[jvj+1]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+1];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+3)*/
x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+5)*/
x[jvj+4]=t[x[jvj+4]];
goto l3;
l6:pile[v[22]]=145; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(145,jvj+6,jvj+7)*/
pile[v[22]]=jvj+33; pile[WZ1]=1018; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,1018,jvj+34)*/
pile[v[22]]=145; pile[WZ1]=jvj+7; pile[WZ2]=447; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(145,jvj+7,447,jvj+35,jvj+34,jvj+8)*/
pile[v[22]]=X; pile[WZ1]=258; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(X,258,jvj+8)*/
goto l17;
l8:V26=x[jvj+23];
pile[v[22]]=258; pile[WZ1]=X; pile[WZ2]=V26; 
(*f[134])( );     /*OTA0(258,X,V26)*/
pile[v[22]]=jvj+36; pile[WZ1]=1018; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,1018,jvj+37)*/
pile[v[22]]=117; pile[WZ1]=I; pile[WZ2]=145; pile[WZ3]=jvj+22; pile[WZ4]=jvj+37; pile[WZ5]=jvj+9; 
(*f[725])( );     /*QUADRI14(117,I,145,jvj+22,jvj+37,jvj+9)*/
pile[v[22]]=X; pile[WZ1]=258; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(X,258,jvj+9)*/
l20:x[jvj+49]=t[x[jvj+49]];
l19:if((x[jvj+49]<=0)) goto l15;
x[jvj+23]=s[x[jvj+49]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+49];
pile[v[22]]=1018; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1018,jvj+23,jvj+24)*/
if((x[jvj+24]!=x[jvj+36])) goto l20;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+23,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=145; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(145,jvj+23,jvj+25)*/
V82=incon;
if((x[jvj+22]==25)) goto l54;
if((x[jvj+22]==29)) goto l53;
if((x[jvj+22]==30)) goto l55;
V82=I;
V84=999999;
V86=67;
l38:V88=68;
l39:if((x[jvj+25]==25)) goto l51;
if((x[jvj+25]==29)) goto l50;
if((x[jvj+25]==30)) goto l52;
V90=V21;
V92=999999;
V94=67;
l40:V96=68;
l41:if((V84<V90)) goto l46;
if((V84!=V90)) goto l42;
if((V88==67)) goto l46;
if((V94==67)) goto l46;
l42:if((V82>V90)) goto l48;
if((V84<V92)) goto l48;
if(V82!=incon) goto l47;
l43:if(x[jvj+22]!=27&&x[jvj+22]!=28) goto l44;
if(x[jvj+25]==29||x[jvj+25]==30) goto l49;
l44:if(x[jvj+25]!=27&&x[jvj+25]!=28) goto l45;
if(x[jvj+22]==29||x[jvj+22]==30) goto l49;
l45:V16=333;
l7:if((V16==38)) goto l8;
if((V16!=580)) goto l20;
V56=x[jvj+36];
pile[v[22]]=23; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(23,0,126,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V52,V,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V53,VV,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,V56,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; 
(*f[40])( );     /*SLG0(V55)*/
goto l20;
l15:x[jvj+47]=t[x[jvj+47]];
goto l14;
l18:pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(117,jvj+6,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=145; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(145,jvj+6,jvj+22)*/
x[jvj+36]=x[jvj+18] ;z[jvj+36]=z[jvj+18];
I=V24;
x[jvj+49]=x[jvj+17] ;z[jvj+49]=z[jvj+17];
goto l19;
l22:x[jvj+26]=s[x[jvj+16]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+16];
pile[v[22]]=1018; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1018,jvj+26,jvj+27)*/
x[jvj+38]=x[jvj+27] ;z[jvj+38]=z[jvj+27];
if((V34=w[x[jvj+38]][1])==incon) goto l24;
if((V34==23)) goto l24;
pile[v[22]]=258; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(258,X,jvj+10)*/
x[jvj+45]=x[jvj+10] ;z[jvj+45]=z[jvj+10];
l9:if((x[jvj+45]<=0)) goto l24;
x[jvj+11]=s[x[jvj+45]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+45];
pile[v[22]]=1018; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1018,jvj+11,jvj+12)*/
if((x[jvj+12]==x[jvj+38])) goto l11;
l10:x[jvj+45]=t[x[jvj+45]];
goto l9;
l24:pile[v[22]]=145; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(145,jvj+26,jvj+28)*/
pile[v[22]]=447; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+26,jvj+29)*/
pile[v[22]]=jvj+38; pile[WZ1]=1018; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,1018,jvj+39)*/
pile[v[22]]=145; pile[WZ1]=jvj+28; pile[WZ2]=447; pile[WZ3]=jvj+29; pile[WZ4]=jvj+39; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(145,jvj+28,447,jvj+29,jvj+39,jvj+30)*/
pile[v[22]]=X; pile[WZ1]=258; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(X,258,jvj+30)*/
l11:if((V44=w[x[jvj+38]][1])==incon) goto l25;
if((V44==23)) goto l25;
pile[v[22]]=258; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(258,X,jvj+13)*/
x[jvj+46]=x[jvj+13] ;z[jvj+46]=z[jvj+13];
l12:if((x[jvj+46]<=0)) goto l25;
x[jvj+14]=s[x[jvj+46]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+46];
pile[v[22]]=1018; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1018,jvj+14,jvj+15)*/
if((x[jvj+15]==x[jvj+38])) goto l23;
l13:x[jvj+46]=t[x[jvj+46]];
goto l12;
l25:pile[v[22]]=117; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+26,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=145; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(145,jvj+26,jvj+31)*/
pile[v[22]]=jvj+38; pile[WZ1]=1018; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+38,1018,jvj+40)*/
pile[v[22]]=117; pile[WZ1]=V46; pile[WZ2]=145; pile[WZ3]=jvj+31; pile[WZ4]=jvj+40; pile[WZ5]=jvj+32; 
(*f[725])( );     /*QUADRI14(117,V46,145,jvj+31,jvj+40,jvj+32)*/
pile[v[22]]=X; pile[WZ1]=258; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(X,258,jvj+32)*/
l23:x[jvj+16]=t[x[jvj+16]];
l21:if((x[jvj+16]>0)) goto l22;
v[0]=jvj; v[22]-=4; return;
l29:R=333;
goto l5;
l30:if((x[jvj+42]==x[jvj+44])) goto l29;
l31:if((V75!=25)) goto l32;
if((V79==25)) goto l33;
l32:if(x[jvj+42]!=68&&x[jvj+42]!=67&&x[jvj+42]!=135&&x[jvj+42]!=134) goto l28;
if(x[jvj+44]!=68&&x[jvj+44]!=67&&x[jvj+44]!=135&&x[jvj+44]!=134) goto l28;
if((V75!=V79)) goto l29;
goto l28;
l33:R=580;
goto l5;
l34:if((V75==V79)) goto l30;
if((x[jvj+42]==x[jvj+44])) goto l33;
goto l31;
l35:if(x[jvj+44]!=incon) goto l34;
goto l28;
l36:if(V79!=incon) goto l35;
goto l28;
l37:if(x[jvj+42]!=incon) goto l36;
goto l28;
l46:V16=580;
goto l7;
l47:if((V82>V92)) goto l46;
if((V82!=V92)) goto l43;
if((V86==67)) goto l46;
if((V96==67)) goto l46;
goto l43;
l48:V16=38;
goto l7;
l49:V16=51;
goto l7;
l50:V90=(-999999);
V92=V21;
V94=68;
V96=67;
goto l41;
l51:V90=V21;
V92=V21;
V94=68;
goto l40;
l52:V90=(-999999);
V92=V21;
V94=68;
goto l40;
l53:V82=(-999999);
V84=I;
V86=68;
V88=67;
goto l39;
l54:V82=I;
V84=I;
V86=68;
goto l38;
l55:V82=(-999999);
V84=I;
V86=68;
goto l38;
}
