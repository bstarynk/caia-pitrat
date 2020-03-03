#include "dx.h"
void TRANSFORMC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V23=0,V38=0,V48=0,V54=0,V66=0,V73=0,V4=0,NA=0,V5=0,NB=0,V6=0,V17=0,V18=0,V20=0,V12=0,V21=0,V32=0,V33=0,V35=0,V27=0,V36=0,V49=0,V55=0,V62=0,V74=0,V67=0;
int N,EA,EB;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=44;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; EA=pile[v[22]+1]; EB=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+37]=x[EA] ;z[jvj+37]=z[EA];
l25:if((x[jvj+37]>0)) goto l26;
x[jvj+44]=x[EB] ;z[jvj+44]=z[EB];
l45:if((x[jvj+44]>0)) goto l46;
v[0]=jvj; v[22]-=3; return;
l1:x[jvj+39]=1403 ;z[jvj+39]=1403;
l30:x[jvj+19]=x[jvj+39] ;z[jvj+19]=z[jvj+39];
if((V6==0)) goto l31;
V8=abs(V6);
pile[v[22]]=jvj+1; pile[WZ1]=1408; pile[WZ2]=V8; 
(*f[43])( );     /*CHGC2(jvj+1,1408,V8)*/
l31:pile[v[22]]=N; pile[WZ1]=jvj+19; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(N,jvj+19,jvj+1)*/
l29:x[jvj+38]=t[x[jvj+38]];
l28:if((x[jvj+38]<=0)) goto l32;
x[jvj+17]=s[x[jvj+38]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+38];
pile[v[22]]=176; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(176,jvj+17,jvj+18)*/
if((x[jvj+16]!=x[jvj+18])) goto l29;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(510,jvj+17,V5)*/
V5=pile[WZ2]; 
NB=V5;
V6=NA-NB;
x[jvj+39]=incon;
if((V6<0)) goto l1;
if((V6>0)) goto l2;
x[jvj+39]=1407 ;z[jvj+39]=1407;
goto l30;
l2:x[jvj+39]=1404 ;z[jvj+39]=1404;
goto l30;
l3:x[jvj+41]=1403 ;z[jvj+41]=1403;
l35:x[jvj+21]=x[jvj+41] ;z[jvj+21]=z[jvj+41];
if((V21==0)) goto l36;
V23=abs(V21);
pile[v[22]]=jvj+2; pile[WZ1]=1408; pile[WZ2]=V23; 
(*f[43])( );     /*CHGC2(jvj+2,1408,V23)*/
l36:pile[v[22]]=N; pile[WZ1]=jvj+21; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(N,jvj+21,jvj+2)*/
l34:x[jvj+40]=t[x[jvj+40]];
l33:if((x[jvj+40]<=0)) goto l37;
x[jvj+20]=s[x[jvj+40]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+40];
pile[v[22]]=241; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(241,jvj+20,V18)*/
V18=pile[WZ2]; 
if((V17!=V18)) goto l34;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(510,jvj+20,V20)*/
V20=pile[WZ2]; 
V12=V20;
V21=NA-V12;
x[jvj+41]=incon;
if((V21<0)) goto l3;
if((V21>0)) goto l4;
x[jvj+41]=1407 ;z[jvj+41]=1407;
goto l35;
l4:x[jvj+41]=1404 ;z[jvj+41]=1404;
goto l35;
l5:x[jvj+43]=1403 ;z[jvj+43]=1403;
l40:x[jvj+23]=x[jvj+43] ;z[jvj+23]=z[jvj+43];
if((V36==0)) goto l41;
V38=abs(V36);
pile[v[22]]=jvj+3; pile[WZ1]=1408; pile[WZ2]=V38; 
(*f[43])( );     /*CHGC2(jvj+3,1408,V38)*/
l41:pile[v[22]]=N; pile[WZ1]=jvj+23; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(N,jvj+23,jvj+3)*/
l39:x[jvj+42]=t[x[jvj+42]];
l38:if((x[jvj+42]<=0)) goto l42;
x[jvj+22]=s[x[jvj+42]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+42];
pile[v[22]]=117; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(117,jvj+22,V33)*/
V33=pile[WZ2]; 
if((V32!=V33)) goto l39;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(510,jvj+22,V35)*/
V35=pile[WZ2]; 
V27=V35;
V36=NA-V27;
x[jvj+43]=incon;
if((V36<0)) goto l5;
if((V36>0)) goto l6;
x[jvj+43]=1407 ;z[jvj+43]=1407;
goto l40;
l6:x[jvj+43]=1404 ;z[jvj+43]=1404;
goto l40;
l8:x[jvj+4]=s[x[jvj+31]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+31];
pile[v[22]]=176; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(176,jvj+4,jvj+5)*/
if((x[jvj+24]==x[jvj+5])) goto l43;
l9:x[jvj+31]=t[x[jvj+31]];
l7:if((x[jvj+31]>0)) goto l8;
pile[v[22]]=176; pile[WZ1]=jvj+24; pile[WZ2]=1408; pile[WZ3]=V4; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(176,jvj+24,1408,V4,jvj+25)*/
pile[v[22]]=N; pile[WZ1]=1405; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(N,1405,jvj+25)*/
l43:pile[v[22]]=241; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,jvj+15,V49)*/
V49=pile[WZ2]; 
x[jvj+32]=x[EB] ;z[jvj+32]=z[EB];
l10:if((x[jvj+32]>0)) goto l11;
pile[v[22]]=241; pile[WZ1]=V49; pile[WZ2]=1408; pile[WZ3]=V4; pile[WZ4]=jvj+26; 
(*f[752])( );     /*QUADRI15(241,V49,1408,V4,jvj+26)*/
pile[v[22]]=N; pile[WZ1]=1405; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(N,1405,jvj+26)*/
l44:pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+15,V55)*/
V55=pile[WZ2]; 
x[jvj+33]=x[EB] ;z[jvj+33]=z[EB];
l13:if((x[jvj+33]>0)) goto l14;
pile[v[22]]=117; pile[WZ1]=V55; pile[WZ2]=1408; pile[WZ3]=V4; pile[WZ4]=jvj+27; 
(*f[391])( );     /*QUADRI10(117,V55,1408,V4,jvj+27)*/
pile[v[22]]=N; pile[WZ1]=1405; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(N,1405,jvj+27)*/
l27:x[jvj+37]=t[x[jvj+37]];
goto l25;
l11:x[jvj+6]=s[x[jvj+32]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+32];
pile[v[22]]=241; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,jvj+6,V48)*/
V48=pile[WZ2]; 
if((V49==V48)) goto l44;
l12:x[jvj+32]=t[x[jvj+32]];
goto l10;
l14:x[jvj+7]=s[x[jvj+33]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+33];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(117,jvj+7,V54)*/
V54=pile[WZ2]; 
if((V55==V54)) goto l27;
l15:x[jvj+33]=t[x[jvj+33]];
goto l13;
l17:x[jvj+8]=s[x[jvj+34]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+34];
pile[v[22]]=176; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(176,jvj+8,jvj+9)*/
if((x[jvj+28]==x[jvj+9])) goto l48;
l18:x[jvj+34]=t[x[jvj+34]];
l16:if((x[jvj+34]>0)) goto l17;
pile[v[22]]=176; pile[WZ1]=jvj+28; pile[WZ2]=1408; pile[WZ3]=V62; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(176,jvj+28,1408,V62,jvj+29)*/
pile[v[22]]=N; pile[WZ1]=1406; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(N,1406,jvj+29)*/
l48:pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(117,jvj+11,V74)*/
V74=pile[WZ2]; 
x[jvj+36]=x[EA] ;z[jvj+36]=z[EA];
l22:if((x[jvj+36]>0)) goto l23;
pile[v[22]]=117; pile[WZ1]=V74; pile[WZ2]=1408; pile[WZ3]=V62; pile[WZ4]=jvj+30; 
(*f[391])( );     /*QUADRI10(117,V74,1408,V62,jvj+30)*/
pile[v[22]]=N; pile[WZ1]=1406; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(N,1406,jvj+30)*/
l49:pile[v[22]]=241; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,jvj+11,V67)*/
V67=pile[WZ2]; 
x[jvj+35]=x[EA] ;z[jvj+35]=z[EA];
l19:if((x[jvj+35]>0)) goto l20;
pile[v[22]]=241; pile[WZ1]=V67; pile[WZ2]=1408; pile[WZ3]=V62; pile[WZ4]=jvj+13; 
(*f[752])( );     /*QUADRI15(241,V67,1408,V62,jvj+13)*/
pile[v[22]]=218; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(218,jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=218; 
(*f[35])( );     /*CHGC1(jvj+13,218,jvj+12)*/
l50:pile[v[22]]=N; pile[WZ1]=1406; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(N,1406,jvj+13)*/
l47:x[jvj+44]=t[x[jvj+44]];
goto l45;
l20:x[jvj+10]=s[x[jvj+35]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+35];
pile[v[22]]=241; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(241,jvj+10,V66)*/
V66=pile[WZ2]; 
if((V67==V66)) goto l47;
l21:x[jvj+35]=t[x[jvj+35]];
goto l19;
l23:x[jvj+14]=s[x[jvj+36]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+36];
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+14,V73)*/
V73=pile[WZ2]; 
if((V74==V73)) goto l49;
l24:x[jvj+36]=t[x[jvj+36]];
goto l22;
l26:x[jvj+15]=s[x[jvj+37]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+37];
pile[v[22]]=510; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(510,jvj+15,V4)*/
V4=pile[WZ2]; 
NA=V4;
pile[v[22]]=176; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(176,jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=176; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(jvj+16,176,jvj+1)*/
x[jvj+38]=x[EB] ;z[jvj+38]=z[EB];
goto l28;
l32:pile[v[22]]=241; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(241,jvj+15,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=241; pile[WZ2]=jvj+2; 
(*f[329])( );     /*TRI13(V17,241,jvj+2)*/
x[jvj+40]=x[EB] ;z[jvj+40]=z[EB];
goto l33;
l37:pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(117,jvj+15,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(V32,117,jvj+3)*/
x[jvj+42]=x[EB] ;z[jvj+42]=z[EB];
goto l38;
l42:pile[v[22]]=176; pile[WZ1]=jvj+15; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(176,jvj+15,jvj+24)*/
x[jvj+31]=x[EB] ;z[jvj+31]=z[EB];
goto l7;
l46:x[jvj+11]=s[x[jvj+44]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+44];
pile[v[22]]=510; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(510,jvj+11,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=176; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(176,jvj+11,jvj+28)*/
x[jvj+34]=x[EA] ;z[jvj+34]=z[EA];
goto l16;
}
