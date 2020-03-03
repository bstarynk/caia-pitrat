#include "dx.h"
void PGCDSOMME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,RB=0,RA=0,RK=0,RR=0,V4=0,V5=0,V37=0,V29=0,V42=0,V62=0,V54=0,V67=0,V87=0,V79=0,V92=0;
int E;
int I;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=36;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
for(i=x[E],V2=0;i>0;i=t[i],V2++)  ;
if((V2==2)) goto l1;
if((V2<=2)) goto l10;
x[jvj+34]=x[E] ;z[jvj+34]=z[E];
if((x[jvj+34]<=0)) goto l10;
x[jvj+23]=s[x[jvj+34]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+34];
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+23,V87)*/
V87=pile[WZ2]; 
V4=V87;
l9:if((V4<=1)) goto l10;
x[jvj+1]=0 ;z[jvj+1]=0;
x[jvj+35]=x[E] ;z[jvj+35]=z[E];
l2:if((x[jvj+35]>0)) goto l3;
pile[v[22]]=jvj+1; 
(*f[3617])( );if(v[102]) goto l10;     /*PGCDSOMME0(jvj+1,RR)*/
RR=pile[WZ1]; 
pile[v[22]]=RR; pile[WZ1]=V4; 
(*f[1011])( );     /*PGCD0(RR,V4,V5)*/
V5=pile[WZ2]; 
if((V5<=1)) goto l10;
I=V5;
l11:v[0]=jvj; v[22]-=2; pile[v[22]+1]=I; v[102]=0;return;
l1:x[jvj+33]=x[E] ;z[jvj+33]=z[E];
if((x[jvj+33]<=0)) goto l10;
x[jvj+3]=s[x[jvj+33]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+33];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+3,V37)*/
V37=pile[WZ2]; 
RA=V37;
l5:if((RA<=1)) goto l10;
x[jvj+36]=x[E] ;z[jvj+36]=z[E];
l6:if((x[jvj+36]<=0)) goto l10;
x[jvj+13]=s[x[jvj+36]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+36];
if((x[jvj+13]==x[jvj+3])) goto l7;
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+13,V62)*/
V62=pile[WZ2]; 
RB=V62;
l8:if((RB<=1)) goto l7;
pile[v[22]]=RB; pile[WZ1]=RA; 
(*f[1011])( );     /*PGCD0(RB,RA,RK)*/
RK=pile[WZ2]; 
if((RK<=1)) goto l7;
I=RK;
goto l11;
l3:x[jvj+2]=s[x[jvj+35]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+35];
if((x[jvj+2]==x[jvj+23])) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+1,jvj+2)*/
l4:x[jvj+35]=t[x[jvj+35]];
goto l2;
l7:x[jvj+36]=t[x[jvj+36]];
goto l6;
l10:v[0]=jvj; v[22]-=2; v[102]=1;return;
l12:x[jvj+12]=t[x[jvj+12]];
l13:if((x[jvj+12]<=0)) goto l14;
x[jvj+4]=s[x[jvj+12]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+12];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+4,V29)*/
V29=pile[WZ2]; 
RA=V29;
goto l5;
l14:RA=1;
goto l5;
l15:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+3,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==486)) goto l18;
if((x[jvj+6]!=52)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+3,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+10)*/
l16:if((x[jvj+10]<=0)) goto l14;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+11,V42)*/
V42=pile[WZ2]; 
RA=V42;
goto l5;
l17:x[jvj+10]=t[x[jvj+10]];
goto l16;
l18:pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+12)*/
goto l13;
l19:x[jvj+22]=t[x[jvj+22]];
l20:if((x[jvj+22]<=0)) goto l21;
x[jvj+14]=s[x[jvj+22]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+22];
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+14,V54)*/
V54=pile[WZ2]; 
RB=V54;
goto l8;
l21:RB=1;
goto l8;
l22:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+13,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==486)) goto l25;
if((x[jvj+16]!=52)) goto l21;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+13,jvj+17)*/
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=486)) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+20)*/
l23:if((x[jvj+20]<=0)) goto l21;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+21,V67)*/
V67=pile[WZ2]; 
RB=V67;
goto l8;
l24:x[jvj+20]=t[x[jvj+20]];
goto l23;
l25:pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+22)*/
goto l20;
l26:x[jvj+32]=t[x[jvj+32]];
l27:if((x[jvj+32]<=0)) goto l28;
x[jvj+24]=s[x[jvj+32]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+32];
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+24,V79)*/
V79=pile[WZ2]; 
V4=V79;
goto l9;
l28:V4=1;
goto l9;
l29:pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+23,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]==486)) goto l32;
if((x[jvj+26]!=52)) goto l28;
pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+23,jvj+27)*/
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=486)) goto l28;
pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+30)*/
l30:if((x[jvj+30]<=0)) goto l28;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+31,V92)*/
V92=pile[WZ2]; 
V4=V92;
goto l9;
l31:x[jvj+30]=t[x[jvj+30]];
goto l30;
l32:pile[v[22]]=107; pile[WZ1]=jvj+23; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+23,jvj+32)*/
goto l27;
}
