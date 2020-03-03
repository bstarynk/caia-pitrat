#include "dx.h"
void PREPNBV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,K=0,V61=0,V64=0,V56=0,V39=0,V43=0,KK=0,T=0,V88=0,V81=0,TT=0,V82=0,V83=0,V85=0,V84=0,V91=0,L=0,V94=0,V97=0,V95=0;
int X;
int M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=11172;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1951&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,X,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==25)) goto l2;
if((x[jvj+3]!=485)) goto l11;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,X,jvj+12)*/
for(i=x[jvj+12],V61=0;i>0;i=t[i],V61++)  ;
if((V61!=2)) goto l11;
x[jvj+13]=d[20];z[jvj+13]=0;
l5:if((x[jvj+13]<=0)) goto l11;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+14,jvj+15)*/
x[jvj+39]=x[jvj+12] ;z[jvj+39]=z[jvj+12];
l7:if((x[jvj+39]<=0)) goto l6;
x[jvj+16]=s[x[jvj+39]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+39];
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+16,V64)*/
V64=pile[WZ2]; 
V56=V64;
x[jvj+40]=x[jvj+12] ;z[jvj+40]=z[jvj+12];
l9:if((x[jvj+40]<=0)) goto l8;
x[jvj+17]=s[x[jvj+40]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+40];
if((x[jvj+16]==x[jvj+17])) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=25)) goto l10;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+14,jvj+17,jvj+20)*/
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=1215)) goto l10;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+15,jvj+17,jvj+23)*/
pile[v[22]]=107; pile[WZ1]=jvj+20; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,jvj+20,jvj+24)*/
F=25;
x[jvj+29]=x[jvj+23] ;z[jvj+29]=z[jvj+23];
K=V56;
l17:V81=incon;
if((F!=29)) goto l18;
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+29,T)*/
T=pile[WZ2]; 
V88=T-1;
V81=V88;
l18:if(F!=30&&F!=25) goto l19;
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+29,TT)*/
TT=pile[WZ2]; 
V81=TT;
l21:V91=V81-K;
L=V91;
x[jvj+38]=incon;
if((L<=2)) goto l29;
if((L<=5)) goto l30;
if((L<=12)) goto l31;
x[jvj+38]=606 ;z[jvj+38]=606;
l22:V94=incon;
if((F==25)) goto l23;
V97=L-1;
V94=V97;
l24:V95=incon;
if((V94<0)) goto l33;
if((V94<=1)) goto l25;
if((V94<=3)) goto l26;
if((V94<=6)) goto l27;
if((V94<=12)) goto l28;
V95=0;
l32:pile[v[22]]=V95; pile[WZ1]=jvj+38; pile[WZ2]=M; 
(*f[1552])( );     /*PROG0(V95,jvj+38,M)*/
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=d[20];z[jvj+4]=0;
l1:if((x[jvj+4]<=0)) goto l11;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+5,X,jvj+6)*/
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=1215)) goto l3;
pile[v[22]]=268; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+5,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+9,X,jvj+10)*/
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+11)*/
F=25;
x[jvj+29]=x[jvj+10] ;z[jvj+29]=z[jvj+10];
l4:K=0;
goto l17;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l6:x[jvj+13]=t[x[jvj+13]];
goto l5;
l8:x[jvj+39]=t[x[jvj+39]];
goto l7;
l10:x[jvj+40]=t[x[jvj+40]];
goto l9;
l11:if(x[jvj+3]!=29&&x[jvj+3]!=30) goto l33;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,X,jvj+25)*/
if((x[jvj+25]!=22)) goto l33;
pile[v[22]]=102; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,X,jvj+26)*/
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]==1215)) goto l12;
if((x[jvj+28]!=485)) goto l33;
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+31)*/
for(i=x[jvj+31],V39=0;i>0;i=t[i],V39++)  ;
if((V39!=2)) goto l33;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,X,jvj+32)*/
x[jvj+41]=x[jvj+31] ;z[jvj+41]=z[jvj+31];
l13:if((x[jvj+41]<=0)) goto l33;
x[jvj+33]=s[x[jvj+41]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+41];
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+33,V43)*/
V43=pile[WZ2]; 
KK=V43;
x[jvj+42]=x[jvj+31] ;z[jvj+42]=z[jvj+31];
l15:if((x[jvj+42]<=0)) goto l14;
x[jvj+34]=s[x[jvj+42]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+42];
if((x[jvj+33]==x[jvj+34])) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+34,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=1215)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,jvj+34,jvj+37)*/
F=x[jvj+3];
x[jvj+29]=x[jvj+32] ;z[jvj+29]=z[jvj+32];
K=KK;
goto l17;
l12:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,X,jvj+29)*/
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+30)*/
F=x[jvj+3];
goto l4;
l14:x[jvj+41]=t[x[jvj+41]];
goto l13;
l16:x[jvj+42]=t[x[jvj+42]];
goto l15;
l19:if(V81==incon) goto l20;
goto l21;
l20:pile[v[22]]=jvj+29; 
(*f[1161])( );if(v[102]) goto l33;     /*INF0(jvj+29,V82)*/
V82=pile[WZ1]; 
(*f[1160])( );if(v[102]) goto l33;     /*SUP0(jvj+29,V83)*/
V83=pile[WZ1]; 
V85=V82+V83;
V84=V85/2;
V81=V84;
goto l21;
l23:V94=1;
goto l24;
l25:V95=4;
goto l32;
l26:V95=3;
goto l32;
l27:V95=2;
goto l32;
l28:V95=1;
goto l32;
l29:x[jvj+38]=206 ;z[jvj+38]=206;
goto l22;
l30:x[jvj+38]=604 ;z[jvj+38]=604;
goto l22;
l31:x[jvj+38]=605 ;z[jvj+38]=605;
goto l22;
l33:x[M]=250 ;z[M]=250;
goto l34;
}
