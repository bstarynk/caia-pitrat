#include "dx.h"
void ORM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V11=0,W=0,V49=0,V43=0,V23=0,V33=0,V30=0,V5=0,V61=0,V70=0,V56=0;
int E,X,S;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=55;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; X=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
l1:x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=187; pile[WZ1]=S; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(187,S,jvj+1)*/
l2:if((x[jvj+1]>0)) goto l3;
F=x[jvj+4];
pile[v[22]]=S; pile[WZ1]=242; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(S,242,67)*/
pile[v[22]]=187; pile[WZ1]=S; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(187,S,jvj+8)*/
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+49]=x[E] ;z[jvj+49]=z[E];
l5:if((x[jvj+49]>0)) goto l6;
x[jvj+50]=x[jvj+8] ;z[jvj+50]=z[jvj+8];
l8:if((x[jvj+50]>0)) goto l9;
x[jvj+11]=vo[15];z[jvj+11]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(297,jvj+11,jvj+12)*/
pile[v[22]]=147; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(147,jvj+12,jvj+13)*/
x[jvj+51]=x[E] ;z[jvj+51]=z[E];
l13:if((x[jvj+51]<=0)) goto l21;
x[jvj+14]=s[x[jvj+51]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+51];
for(a=F;a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l14;
pile[v[22]]=263; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(263,jvj+14,jvj+15)*/
V49=x[jvj+13];
l15:if((V49<=0)) goto l14;
W=s[V49];
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==W) goto l18;
l16:V49=t[V49];
goto l15;
l3:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
l4:x[jvj+1]=t[x[jvj+1]];
goto l2;
l6:x[jvj+6]=s[x[jvj+49]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+49];
for(a=F;a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l7;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
l7:x[jvj+49]=t[x[jvj+49]];
goto l5;
l9:x[jvj+9]=s[x[jvj+50]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+50];
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,jvj+9,jvj+10)*/
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+34)*/
l29:if((x[jvj+34]>0)) goto l37;
V5=134;
l11:if((V5==135)) goto l12;
l10:x[jvj+50]=t[x[jvj+50]];
goto l8;
l12:V11=x[jvj+9];
pile[v[22]]=187; pile[WZ1]=S; pile[WZ2]=V11; 
(*f[134])( );     /*OTA0(187,S,V11)*/
pile[v[22]]=S; pile[WZ1]=242; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(S,242,68)*/
goto l10;
l14:x[jvj+51]=t[x[jvj+51]];
goto l13;
l18:x[jvj+52]=x[jvj+8] ;z[jvj+52]=z[jvj+8];
l17:if((x[jvj+52]<=0)) goto l16;
x[jvj+16]=s[x[jvj+52]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+52];
pile[v[22]]=218; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+16,jvj+17)*/
x[jvj+18]=x[jvj+17] ;z[jvj+18]=z[jvj+17];
pile[v[22]]=253; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(253,jvj+18,jvj+19)*/
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==W) goto l20;
l19:x[jvj+52]=t[x[jvj+52]];
goto l17;
l20:pile[v[22]]=263; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(263,jvj+18,jvj+20)*/
for(a=x[jvj+20];a>0;a=t[a]) if(s[a]==W) goto l19;
V43=x[jvj+16];
pile[v[22]]=187; pile[WZ1]=S; pile[WZ2]=V43; 
(*f[134])( );     /*OTA0(187,S,V43)*/
pile[v[22]]=S; pile[WZ1]=242; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(S,242,68)*/
goto l19;
l21:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,X,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=178)) goto l27;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,X,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+23,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=374; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(374,X,jvj+7)*/
if((x[jvj+7]==178)) goto l27;
l22:pile[v[22]]=187; pile[WZ1]=S; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(187,S,jvj+24)*/
l23:if((x[jvj+24]<=0)) goto l27;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=218; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(218,jvj+25,jvj+26)*/
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+27)*/
V33=x[jvj+25];
x[jvj+53]=x[jvj+27] ;z[jvj+53]=z[jvj+27];
l25:if((x[jvj+53]<=0)) goto l24;
x[jvj+28]=s[x[jvj+53]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+53];
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=178)) goto l26;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+28,jvj+31)*/
pile[v[22]]=140; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+31,V30)*/
V30=pile[WZ2]; 
if((V23!=V30)) goto l26;
pile[v[22]]=374; pile[WZ1]=jvj+28; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(374,jvj+28,jvj+32)*/
if((x[jvj+32]!=178)) goto l26;
pile[v[22]]=187; pile[WZ1]=S; pile[WZ2]=V33; 
(*f[134])( );     /*OTA0(187,S,V33)*/
pile[v[22]]=S; pile[WZ1]=242; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(S,242,68)*/
l26:x[jvj+53]=t[x[jvj+53]];
goto l25;
l24:x[jvj+24]=t[x[jvj+24]];
goto l23;
l27:pile[v[22]]=242; pile[WZ1]=S; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(242,S,jvj+33)*/
if((x[jvj+33]==68)) goto l1;
l28:v[0]=jvj; v[22]-=3; return;
l31:x[jvj+35]=s[x[jvj+54]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+54];
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=178)) goto l32;
pile[v[22]]=102; pile[WZ1]=jvj+35; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+35,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+38,V61)*/
V61=pile[WZ2]; 
if((V56!=V61)) goto l32;
pile[v[22]]=374; pile[WZ1]=jvj+35; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(374,jvj+35,jvj+39)*/
if((x[jvj+39]==178)) goto l33;
l32:x[jvj+54]=t[x[jvj+54]];
l30:if((x[jvj+54]>0)) goto l31;
V5=135;
goto l11;
l35:pile[v[22]]=107; pile[WZ1]=jvj+40; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+40,jvj+42)*/
x[jvj+54]=x[jvj+42] ;z[jvj+54]=z[jvj+42];
goto l30;
l36:x[jvj+34]=t[x[jvj+34]];
goto l29;
l37:x[jvj+43]=s[x[jvj+34]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+34];
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+43,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=178)) goto l36;
x[jvj+46]=x[jvj+43] ;z[jvj+46]=z[jvj+43];
pile[v[22]]=374; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(374,jvj+46,jvj+47)*/
if((x[jvj+47]!=178)) goto l36;
pile[v[22]]=102; pile[WZ1]=jvj+43; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+43,jvj+48)*/
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+48,V70)*/
V70=pile[WZ2]; 
V56=V70;
x[jvj+55]=x[jvj+5] ;z[jvj+55]=z[jvj+5];
l34:if((x[jvj+55]<=0)) goto l36;
x[jvj+40]=s[x[jvj+55]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+55];
if((x[jvj+40]==x[jvj+10])) goto l33;
pile[v[22]]=263; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(263,jvj+40,jvj+41)*/
for(a=x[jvj+41];a>0;a=t[a]) if(s[a]==V56) goto l35;
l33:x[jvj+55]=t[x[jvj+55]];
goto l34;
}
