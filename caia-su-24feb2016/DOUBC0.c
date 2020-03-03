#include "dx.h"
void DOUBC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V15=0,V62=0,V66=0,V47=0,VV=0,V77=0,V73=0,V46=0,V43=0,TT=0,V81=0,V31=0,V34=0,W=0,V24=0,V=0;
int T,Y,R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=56;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; Y=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,Y,jvj+27)*/
l9:if((x[jvj+27]>0)) goto l10;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,Y,jvj+45)*/
x[jvj+55]=w[x[jvj+45]][8];
l25:if((x[jvj+55]<=0)) goto l28;
x[jvj+46]=s[x[jvj+55]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+55];
pile[v[22]]=jvj+46; pile[WZ1]=Y; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(jvj+46,Y,jvj+47)*/
x[jvj+56]=x[jvj+47] ;z[jvj+56]=z[jvj+47];
l26:if((x[jvj+56]>0)) goto l27;
x[jvj+55]=t[x[jvj+55]];
goto l25;
l4:pile[v[22]]=436; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+3,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=V9; pile[WZ2]=jvj+10; 
(*f[1988])( );     /*USV0(jvj+9,V9,jvj+10)*/
if((x[jvj+10]==135)) goto l22;
l3:x[jvj+49]=t[x[jvj+49]];
l2:if((x[jvj+49]<=0)) goto l23;
x[jvj+3]=s[x[jvj+49]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+49];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=54)) goto l3;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[1989])( );if(v[102]) goto l3;     /*DOUBX0(jvj+6,jvj+3,jvj+7)*/
if((x[jvj+7]==135)) goto l4;
goto l3;
l6:x[jvj+50]=t[x[jvj+50]];
l5:if((x[jvj+50]<=0)) goto l19;
x[jvj+21]=s[x[jvj+50]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+50];
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+21,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+22,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+21,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+23,V66)*/
V66=pile[WZ2]; 
V47=V62;
VV=V66;
x[jvj+51]=x[jvj+19] ;z[jvj+51]=z[jvj+19];
l7:if((x[jvj+51]<=0)) goto l6;
x[jvj+24]=s[x[jvj+51]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+51];
pile[v[22]]=103; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+24,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+25,V77)*/
V77=pile[WZ2]; 
if((VV!=V77)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+24,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+26,V73)*/
V73=pile[WZ2]; 
V46=V73;
pile[v[22]]=V46; pile[WZ1]=V47; pile[WZ2]=Y; pile[WZ3]=jvj+20; 
(*f[1802])( );     /*SUBST1(V46,V47,Y,jvj+20)*/
l8:x[jvj+51]=t[x[jvj+51]];
goto l7;
l10:x[jvj+6]=s[x[jvj+27]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+27];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+6,jvj+28)*/
if((x[jvj+28]!=39)) goto l13;
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+6,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+31,jvj+32)*/
TT=x[jvj+32];
pile[v[22]]=632; pile[WZ1]=240; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(632,240,jvj+33)*/
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==TT) goto l20;
x[jvj+53]=t[x[jvj+27]];
l16:if((x[jvj+53]<=0)) goto l20;
x[jvj+16]=s[x[jvj+53]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+53];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+6; pile[WZ2]=jvj+34; 
(*f[1991])( );     /*MEMEY0(jvj+16,jvj+6,jvj+34)*/
if((x[jvj+34]==135)) goto l18;
l17:x[jvj+53]=t[x[jvj+53]];
goto l16;
l11:x[jvj+27]=t[x[jvj+27]];
goto l9;
l13:x[jvj+52]=t[x[jvj+27]];
l12:if((x[jvj+52]<=0)) goto l20;
x[jvj+29]=s[x[jvj+52]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+52];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+29,jvj+30)*/
if((x[jvj+30]==135)) goto l15;
l14:x[jvj+52]=t[x[jvj+52]];
goto l12;
l15:V43=x[jvj+29];
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=V43; 
(*f[134])( );     /*OTA0(107,Y,V43)*/
goto l14;
l18:V81=x[jvj+16];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=39)) goto l19;
pile[v[22]]=113; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(113,jvj+6,jvj+18)*/
pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(113,jvj+16,jvj+19)*/
x[jvj+20]=vo[15];z[jvj+20]=vz[15];
x[jvj+50]=x[jvj+18] ;z[jvj+50]=z[jvj+18];
goto l5;
l19:pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=V81; 
(*f[134])( );     /*OTA0(107,Y,V81)*/
pile[v[22]]=T; pile[WZ1]=415; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(T,415,68)*/
goto l17;
l20:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+6,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=179)) goto l11;
pile[v[22]]=436; pile[WZ1]=jvj+6; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,jvj+6,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+37,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,R,jvj+38)*/
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+6,jvj+1)*/
x[jvj+39]=vo[15];z[jvj+39]=vz[15];
V34=x[jvj+6];
W=V31;
x[jvj+54]=x[jvj+38] ;z[jvj+54]=z[jvj+38];
l21:if((x[jvj+54]<=0)) goto l11;
x[jvj+40]=s[x[jvj+54]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+54];
pile[v[22]]=111; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+40,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=179)) goto l22;
pile[v[22]]=436; pile[WZ1]=jvj+40; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(436,jvj+40,jvj+43)*/
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+43,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+40; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+40,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=172)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+9,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+13,V15)*/
V15=pile[WZ2]; 
if((V15!=0)) goto l1;
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+9,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]==23)) goto l22;
l1:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]==250)) goto l23;
x[jvj+49]=x[jvj+38] ;z[jvj+49]=z[jvj+38];
goto l2;
l23:pile[v[22]]=jvj+9; pile[WZ1]=jvj+1; pile[WZ2]=jvj+44; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+1,jvj+44)*/
if((x[jvj+44]==135)) goto l24;
l22:x[jvj+54]=t[x[jvj+54]];
goto l21;
l24:V=V24;
pile[v[22]]=W; pile[WZ1]=V; pile[WZ2]=Y; pile[WZ3]=jvj+39; 
(*f[1802])( );     /*SUBST1(W,V,Y,jvj+39)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=V34; 
(*f[134])( );     /*OTA0(107,Y,V34)*/
pile[v[22]]=T; pile[WZ1]=415; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(T,415,68)*/
goto l22;
l27:x[jvj+48]=s[x[jvj+56]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+56];
pile[v[22]]=T; pile[WZ1]=jvj+48; pile[WZ2]=R; 
(*f[1990])( );     /*DOUBC0(T,jvj+48,R)*/
x[jvj+56]=t[x[jvj+56]];
goto l26;
l28:v[0]=jvj; v[22]-=3; return;
}
