#include "dx.h"
void VV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V23=0,V24=0,V29=0,V30=0,V64=0,V65=0,V58=0,V59=0,V70=0,V71=0;
int X,Y;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=52;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Y=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=109; pile[WZ1]=Y; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(109,Y,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[280])( );if(v[102]) goto l14;     /*TLDEBL2(jvj+1,jvj+2)*/
pile[v[22]]=708; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(708,jvj+1,jvj+3)*/
if(x[jvj+3]!=68&&x[jvj+3]!=729) goto l8;
pile[v[22]]=311; pile[WZ1]=Y; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(311,Y,jvj+4)*/
x[jvj+48]=x[jvj+2] ;z[jvj+48]=z[jvj+2];
l3:if((x[jvj+48]<=0)) goto l8;
x[jvj+5]=s[x[jvj+48]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+48];
pile[v[22]]=279; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(279,jvj+5,jvj+6)*/
x[jvj+49]=x[jvj+6] ;z[jvj+49]=z[jvj+6];
l4:if((x[jvj+49]>0)) goto l5;
x[jvj+48]=t[x[jvj+48]];
goto l3;
l1:if((x[jvj+1]!=10052)) goto l6;
l7:for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l6;
pile[v[22]]=708; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(708,jvj+9,jvj+10)*/
if(x[jvj+10]!=68&&x[jvj+10]!=729) goto l6;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(128,X,jvj+18)*/
l15:if((x[jvj+18]>0)) goto l17;
V23=x[jvj+9];
pile[v[22]]=jvj+9; pile[WZ1]=109; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+9,109,jvj+19)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+19)*/
pile[v[22]]=20; pile[WZ1]=V23; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V23,0,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; 
(*f[40])( );     /*SLG0(V24)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(324,311,jvj+9)*/
l21:pile[v[22]]=109; pile[WZ1]=jvj+19; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(109,jvj+19,jvj+25)*/
pile[v[22]]=Y; pile[WZ1]=311; 
(*f[36])( );     /*PLUSC0(Y,311,jvj+25)*/
pile[v[22]]=314; pile[WZ1]=Y; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(314,Y,jvj+26)*/
l22:if((x[jvj+26]<=0)) goto l35;
x[jvj+28]=s[x[jvj+26]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+26];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(128,X,jvj+27)*/
l23:if((x[jvj+27]>0)) goto l34;
V64=x[jvj+28];
pile[v[22]]=jvj+28; pile[WZ1]=109; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,109,jvj+29)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+29)*/
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V64,0,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(324,311,jvj+28)*/
l24:pile[v[22]]=311; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(311,jvj+29,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==x[jvj+25]) goto l26;
pile[v[22]]=109; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(109,jvj+29,jvj+31)*/
pile[v[22]]=311; pile[WZ1]=jvj+19; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(311,jvj+19,jvj+32)*/
x[jvj+52]=x[jvj+32] ;z[jvj+52]=z[jvj+32];
l25:if((x[jvj+52]>0)) goto l27;
pile[v[22]]=jvj+29; pile[WZ1]=311; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+29,311,jvj+25)*/
pile[v[22]]=jvj+19; pile[WZ1]=314; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+19,314,jvj+31)*/
l26:x[jvj+26]=t[x[jvj+26]];
goto l22;
l2:if((x[jvj+1]!=10791)) goto l6;
goto l7;
l5:x[jvj+7]=s[x[jvj+49]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+49];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+7,jvj+8)*/
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
V6=x[jvj+9];
if((V6>=sepbloc)) goto l6;
if((x[jvj+9]==10814)) goto l1;
if((x[jvj+9]==11061)) goto l2;
if((x[jvj+9]!=10889)) goto l7;
if((x[jvj+1]!=11061)) goto l6;
goto l7;
l6:x[jvj+49]=t[x[jvj+49]];
goto l4;
l8:pile[v[22]]=333; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(333,X,jvj+11)*/
x[jvj+50]=x[jvj+2] ;z[jvj+50]=z[jvj+2];
l9:if((x[jvj+50]<=0)) goto l14;
x[jvj+12]=s[x[jvj+50]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+50];
pile[v[22]]=279; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(279,jvj+12,jvj+13)*/
x[jvj+51]=x[jvj+13] ;z[jvj+51]=z[jvj+13];
l10:if((x[jvj+51]>0)) goto l11;
x[jvj+50]=t[x[jvj+50]];
goto l9;
l11:x[jvj+14]=s[x[jvj+51]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+51];
pile[v[22]]=109; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+14,jvj+15)*/
x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l12;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(128,X,jvj+22)*/
l18:if((x[jvj+22]>0)) goto l20;
V29=x[jvj+16];
pile[v[22]]=jvj+16; pile[WZ1]=109; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,109,jvj+17)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+17)*/
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V29,0,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(324,311,jvj+16)*/
l13:pile[v[22]]=X; pile[WZ1]=333; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(X,333,jvj+16)*/
pile[WZ1]=jvj+17; 
(*f[277])( );     /*VV0(X,jvj+17)*/
l12:x[jvj+51]=t[x[jvj+51]];
goto l10;
l14:v[0]=jvj; v[22]-=2; return;
l16:x[jvj+18]=t[x[jvj+18]];
goto l15;
l17:x[jvj+20]=s[x[jvj+18]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+18];
pile[v[22]]=109; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,jvj+20,jvj+21)*/
if((x[jvj+21]!=x[jvj+9])) goto l16;
x[jvj+19]=x[jvj+20] ;z[jvj+19]=z[jvj+20];
goto l21;
l19:x[jvj+22]=t[x[jvj+22]];
goto l18;
l20:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=109; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(109,jvj+23,jvj+24)*/
if((x[jvj+24]!=x[jvj+16])) goto l19;
x[jvj+17]=x[jvj+23] ;z[jvj+17]=z[jvj+23];
goto l13;
l27:x[jvj+34]=s[x[jvj+52]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+52];
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==x[jvj+34]) goto l30;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(128,X,jvj+33)*/
l28:if((x[jvj+33]>0)) goto l32;
V58=x[jvj+34];
pile[v[22]]=jvj+34; pile[WZ1]=109; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,109,jvj+35)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+35)*/
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V58,0,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(324,311,jvj+34)*/
l29:pile[v[22]]=jvj+29; pile[WZ1]=311; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+29,311,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=314; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+35,314,jvj+28)*/
l30:x[jvj+52]=t[x[jvj+52]];
goto l25;
l31:x[jvj+33]=t[x[jvj+33]];
goto l28;
l32:x[jvj+36]=s[x[jvj+33]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+33];
pile[v[22]]=109; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(109,jvj+36,jvj+37)*/
if((x[jvj+37]!=x[jvj+34])) goto l31;
x[jvj+35]=x[jvj+36] ;z[jvj+35]=z[jvj+36];
goto l29;
l33:x[jvj+27]=t[x[jvj+27]];
goto l23;
l34:x[jvj+38]=s[x[jvj+27]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+27];
pile[v[22]]=109; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(109,jvj+38,jvj+39)*/
if((x[jvj+39]!=x[jvj+28])) goto l33;
x[jvj+29]=x[jvj+38] ;z[jvj+29]=z[jvj+38];
goto l24;
l35:pile[v[22]]=109; pile[WZ1]=Y; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,Y,jvj+40)*/
pile[v[22]]=jvj+19; pile[WZ1]=314; 
(*f[36])( );     /*PLUSC0(jvj+19,314,jvj+40)*/
pile[v[22]]=311; pile[WZ1]=jvj+19; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(311,jvj+19,jvj+41)*/
l36:if((x[jvj+41]<=0)) goto l6;
x[jvj+43]=s[x[jvj+41]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+41];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(128,X,jvj+42)*/
l37:if((x[jvj+42]>0)) goto l41;
V70=x[jvj+43];
pile[v[22]]=jvj+43; pile[WZ1]=109; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,109,jvj+44)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+44)*/
pile[v[22]]=20; pile[WZ1]=V70; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V70,0,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; 
(*f[40])( );     /*SLG0(V71)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(324,311,jvj+43)*/
l38:pile[v[22]]=109; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(109,jvj+44,jvj+45)*/
pile[v[22]]=jvj+44; pile[WZ1]=314; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+44,314,jvj+40)*/
pile[v[22]]=Y; pile[WZ1]=311; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(Y,311,jvj+45)*/
l39:x[jvj+41]=t[x[jvj+41]];
goto l36;
l40:x[jvj+42]=t[x[jvj+42]];
goto l37;
l41:x[jvj+46]=s[x[jvj+42]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+42];
pile[v[22]]=109; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(109,jvj+46,jvj+47)*/
if((x[jvj+47]!=x[jvj+43])) goto l40;
x[jvj+44]=x[jvj+46] ;z[jvj+44]=z[jvj+46];
goto l38;
}
