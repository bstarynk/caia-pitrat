#include "dx.h"
void REORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V7=0,V8=0,M=0,V30=0,V32=0,V9=0,N=0,V16=0,V17=0;
int BL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=33;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(184,BL,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(250,158,jvj+27)*/
V9=x[BL];
if((V9<=sepexp)) goto l26;
if((V9>sepsimp)) goto l26;
V7=(-999999);
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(565,BL,jvj+10)*/
l8:if((x[jvj+10]>0)) goto l9;
if((V7==(-999999))) goto l26;
N=1;
l22:if((N>V7)) goto l26;
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(565,BL,jvj+7)*/
x[jvj+31]=x[jvj+7] ;z[jvj+31]=z[jvj+7];
l6:if((x[jvj+31]<=0)) goto l23;
x[jvj+8]=s[x[jvj+31]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+31];
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+8,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+9,V11)*/
V11=pile[WZ2]; 
if((V11!=N)) goto l7;
V16=x[jvj+8];
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=V16; 
(*f[134])( );     /*OTA0(565,BL,V16)*/
pile[v[22]]=BL; pile[WZ1]=565; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(BL,565,jvj+8)*/
l23:N++;
goto l22;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=42)) goto l3;
pile[v[22]]=105; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(105,jvj+2,jvj+4)*/
x[jvj+30]=x[jvj+4] ;z[jvj+30]=z[jvj+4];
l4:if((x[jvj+30]<=0)) goto l3;
x[jvj+5]=s[x[jvj+30]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+30];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=47)) goto l5;
pile[v[22]]=jvj+5; 
(*f[371])( );     /*REORD0(jvj+5)*/
l5:x[jvj+30]=t[x[jvj+30]];
goto l4;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l7:x[jvj+31]=t[x[jvj+31]];
goto l6;
l9:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+11,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+12,V8)*/
V8=pile[WZ2]; 
if(V8>V7) V7=V8;
l10:x[jvj+10]=t[x[jvj+10]];
goto l8;
l14:M=s[x[jvj+23]];
x[jvj+32]=x[jvj+22] ;z[jvj+32]=z[jvj+22];
l15:if((x[jvj+32]>0)) goto l16;
x[jvj+23]=t[x[jvj+23]];
l13:if((x[jvj+23]>0)) goto l14;
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=V32; 
(*f[134])( );     /*OTA0(184,BL,V32)*/
pile[v[22]]=jvj+27; pile[WZ1]=184; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+27,184,jvj+13)*/
pile[v[22]]=105; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(105,jvj+24,jvj+25)*/
pile[v[22]]=jvj+13; pile[WZ1]=105; 
(*f[34])( );     /*CHGC0(jvj+13,105,jvj+25)*/
l21:x[jvj+33]=t[x[jvj+33]];
l19:if((x[jvj+33]>0)) goto l20;
x[jvj+28]=t[x[jvj+28]];
l24:if((x[jvj+28]>0)) goto l25;
pile[v[22]]=184; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(184,jvj+27,jvj+29)*/
pile[v[22]]=BL; pile[WZ1]=184; 
(*f[34])( );     /*CHGC0(BL,184,jvj+29)*/
v[0]=jvj; v[22]-=1; return;
l16:x[jvj+18]=s[x[jvj+32]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+32];
if((M!=250)) goto l12;
pile[v[22]]=337; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(337,jvj+18,jvj+19)*/
l12:pile[v[22]]=337; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(337,jvj+18,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==M)) goto l18;
l17:x[jvj+32]=t[x[jvj+32]];
goto l15;
l18:V30=x[jvj+18];
pile[v[22]]=105; pile[WZ1]=jvj+13; pile[WZ2]=V30; 
(*f[134])( );     /*OTA0(105,jvj+13,V30)*/
pile[v[22]]=jvj+24; pile[WZ1]=105; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+24,105,jvj+18)*/
goto l17;
l20:x[jvj+13]=s[x[jvj+33]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+33];
if((V17!=250)) goto l11;
pile[v[22]]=337; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(337,jvj+13,jvj+14)*/
l11:pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+13,jvj+15)*/
if((x[jvj+15]!=42)) goto l21;
pile[v[22]]=337; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(337,jvj+13,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+16,jvj+17)*/
if((V17==x[jvj+17])) goto l27;
goto l21;
l25:V17=s[x[jvj+28]];
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(184,BL,jvj+26)*/
x[jvj+33]=x[jvj+26] ;z[jvj+33]=z[jvj+26];
goto l19;
l26:x[jvj+28]=d[37];z[jvj+28]=0;
goto l24;
l27:pile[v[22]]=jvj+13; pile[WZ1]=158; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+13,158,jvj+24)*/
V32=x[jvj+13];
pile[v[22]]=105; pile[WZ1]=jvj+13; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(105,jvj+13,jvj+22)*/
x[jvj+23]=d[37];z[jvj+23]=0;
goto l13;
}
