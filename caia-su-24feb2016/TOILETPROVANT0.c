#include "dx.h"
void TOILETPROVANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,AT=0,V43=0,V54=0,V53=0,P=0,V78=0,V71=0,V70=0,V61=0,V64=0,V68=0,V59=0,V63=0,V65=0,V67=0,V69=0;
int X,N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=11552;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==562&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,X,jvj+2)*/
x[jvj+3]=d[20];z[jvj+3]=0;
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=683; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(683,X,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=159; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(159,X,jvj+34)*/
pile[v[22]]=934; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(934,X,jvj+35)*/
V64=x[N];
V68=x[jvj+35];
x[jvj+43]=x[jvj+34] ;z[jvj+43]=z[jvj+34];
l16:if((x[jvj+43]<=0)) goto l19;
x[jvj+28]=s[x[jvj+43]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+43];
pile[v[22]]=288; pile[WZ1]=jvj+28; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(288,jvj+28,jvj+36)*/
if((x[jvj+36]!=187)) goto l17;
pile[v[22]]=1489; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1489,jvj+28,jvj+29)*/
x[jvj+40]=x[jvj+29] ;z[jvj+40]=z[jvj+29];
l10:if((x[jvj+40]>0)) goto l11;
pile[v[22]]=110; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(110,jvj+28,V54)*/
V54=pile[WZ2]; 
x[jvj+41]=x[jvj+34] ;z[jvj+41]=z[jvj+34];
l12:if((x[jvj+41]<=0)) goto l17;
x[jvj+30]=s[x[jvj+41]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+41];
pile[v[22]]=110; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(110,jvj+30,V53)*/
V53=pile[WZ2]; 
if((V53!=V54)) goto l13;
pile[v[22]]=288; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(288,jvj+30,jvj+31)*/
if((x[jvj+31]!=289)) goto l13;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(110,jvj+30,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=1489; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1489,jvj+30,jvj+37)*/
x[jvj+42]=x[jvj+37] ;z[jvj+42]=z[jvj+37];
l14:if((x[jvj+42]<=0)) goto l17;
x[jvj+32]=s[x[jvj+42]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+42];
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+32,jvj+33)*/
if((300!=x[jvj+33])) goto l18;
x[jvj+42]=t[x[jvj+42]];
goto l14;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=268; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+4,jvj+5)*/
x[jvj+38]=x[jvj+2] ;z[jvj+38]=z[jvj+2];
l4:if((x[jvj+38]<=0)) goto l3;
x[jvj+6]=s[x[jvj+38]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+38];
pile[v[22]]=1489; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1489,jvj+6,jvj+7)*/
x[jvj+39]=x[jvj+7] ;z[jvj+39]=z[jvj+7];
l5:if((x[jvj+39]>0)) goto l6;
x[jvj+38]=t[x[jvj+38]];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l6:x[jvj+8]=s[x[jvj+39]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+39];
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==26)) goto l8;
if((x[jvj+10]!=25)) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+4,jvj+8,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=43)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+17,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+19,jvj+20)*/
AT=x[jvj+20];
pile[v[22]]=103; pile[WZ1]=jvj+17; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+17,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=21)) goto l7;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+5,jvj+8,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=41)) goto l7;
pile[v[22]]=1516; pile[WZ1]=1447; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1516,1447,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==AT) goto l9;
l7:x[jvj+39]=t[x[jvj+39]];
goto l5;
l8:pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+4,jvj+8,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=43)) goto l7;
pile[v[22]]=103; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+11,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=21)) goto l7;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+5,jvj+8,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=41)) goto l7;
V17=x[jvj+8];
pile[v[22]]=1489; pile[WZ1]=jvj+6; pile[WZ2]=V17; 
(*f[134])( );     /*OTA0(1489,jvj+6,V17)*/
goto l7;
l9:V43=x[jvj+8];
pile[v[22]]=1489; pile[WZ1]=jvj+6; pile[WZ2]=V43; 
(*f[134])( );     /*OTA0(1489,jvj+6,V43)*/
goto l7;
l11:x[jvj+26]=s[x[jvj+40]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+40];
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+26,jvj+27)*/
if((300!=x[jvj+27])) goto l17;
x[jvj+40]=t[x[jvj+40]];
goto l10;
l13:x[jvj+41]=t[x[jvj+41]];
goto l12;
l17:x[jvj+43]=t[x[jvj+43]];
goto l16;
l18:pile[v[22]]=jvj+28; pile[WZ1]=1489; pile[WZ2]=jvj+37; 
(*f[34])( );     /*CHGC0(jvj+28,1489,jvj+37)*/
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V64,0,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V61; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(41,V61,V63,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V68; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(20,V68,V65,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=V59; 
(*f[37])( );     /*SRA0(V67,V59,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; 
(*f[40])( );     /*SLG0(V69)*/
V78=x[jvj+37];
l15:if((V78<=0)) goto l17;
P=s[V78];
V71=P;
pile[v[22]]=20; pile[WZ1]=V71; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V71,0,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; 
(*f[40])( );     /*SLG0(V70)*/
V78=t[V78];
goto l15;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
