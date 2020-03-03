#include "dx.h"
void SPD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V49=0,L=0,V38=0,V39=0,V42=0,V43=0,V44=0,V40=0,V41=0,V45=0,V46=0,V47=0,V36=0,V19=0,V20=0,V25=0,V26=0,V21=0,V22=0,V23=0,V24=0,V12=0,V13=0,V14=0,V15=0,V34=0,V35=0,V8=0,V9=0,Z=0,V59=0,V60=0,K=0,V57=0,V53=0,V54=0,V70=0,V63=0,V64=0,V67=0,V68=0,V69=0,V65=0,V66=0,V73=0,V74=0,V76=0,V77=0;
int X,V,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10443;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2144&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; V=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=K=Z=incon;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,X,jvj+6)*/
if((x[jvj+6]==22)) goto l4;
if((x[jvj+6]==96)) goto l6;
if((x[jvj+6]!=21)) goto l8;
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V34,61,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=V35; 
(*f[2077])( );     /*SPR0(X,V35,L)*/
L=pile[WZ2]; 
V36=incon;
pile[v[22]]=140; pile[WZ1]=V; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,V,V49)*/
V49=pile[WZ2]; 
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=440; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(440,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V49) goto l2;
l3:V36=L;
l7:J=V36;
l9:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,X,jvj+9)*/
if((x[jvj+9]!=69)) goto l10;
Z=0;
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V59,61,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=V60; 
(*f[2077])( );     /*SPR0(X,V60,K)*/
K=pile[WZ2]; 
l11:if(J==incon) goto l12;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:pile[v[22]]=11; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(11,jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l8;
l5:pile[v[22]]=I; pile[WZ1]=X; pile[WZ2]=V; 
(*f[2191])( );     /*SPG0(I,X,V,J)*/
J=pile[WZ3]; 
goto l9;
l2:pile[v[22]]=L; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(L,32,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V38,59,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V39; 
(*f[64])( );     /*SRA2((-1729),V39,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V42,91,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V43,3,V,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V44,93,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V40,61,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V41; 
(*f[64])( );     /*SRA2((-1729),V41,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V45,91,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=3; pile[WZ2]=X; 
(*f[2147])( );     /*SPP0(V46,3,X,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V47,93,V36)*/
V36=pile[WZ2]; 
goto l7;
l4:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,X,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+2)*/
pile[v[22]]=11; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(11,jvj+2,jvj+8)*/
if((x[jvj+8]!=135)) goto l1;
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V19,61,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V20,40,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=V25; 
(*f[2145])( );if(v[102]) goto l1;     /*SPF0(X,V25,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V26,41,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V21; 
(*f[64])( );     /*SRA2((-2601),V21,V22)*/
V22=pile[WZ2]; 
V73=135;
V74=V73;
pile[v[22]]=V74; pile[WZ1]=V22; 
(*f[221])( );     /*SRN0(V74,V22,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V23; 
(*f[64])( );     /*SRA2((-2602),V23,V24)*/
V24=pile[WZ2]; 
V76=134;
V77=V76;
pile[v[22]]=V77; pile[WZ1]=V24; 
(*f[221])( );     /*SRN0(V77,V24,J)*/
J=pile[WZ2]; 
goto l9;
l6:pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V12,61,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V13,40,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=V14; 
(*f[2077])( );     /*SPR0(X,V14,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V15,41,J)*/
J=pile[WZ2]; 
goto l9;
l8:if(x[jvj+6]!=89&&x[jvj+6]!=41&&x[jvj+6]!=453&&x[jvj+6]!=531&&x[jvj+6]!=979&&x[jvj+6]!=1027) goto l9;
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V8,61,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=V9; 
(*f[2077])( );     /*SPR0(X,V9,J)*/
J=pile[WZ2]; 
goto l9;
l10:pile[v[22]]=101; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,X,jvj+10)*/
V57=x[jvj+10];
Z=V57;
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V53,61,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=V54; 
(*f[2077])( );     /*SPR0(X,V54,K)*/
K=pile[WZ2]; 
goto l11;
l12:if(K!=incon) goto l13;
J=I;
goto l17;
l13:if(Z!=incon) goto l14;
l16:J=K;
goto l17;
l14:pile[v[22]]=140; pile[WZ1]=V; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,V,V70)*/
V70=pile[WZ2]; 
x[jvj+11]=vo[15];z[jvj+11]=vz[15];
pile[v[22]]=440; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(440,jvj+11,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V70) goto l15;
goto l16;
l15:pile[v[22]]=K; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(K,32,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V63,59,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V64; 
(*f[64])( );     /*SRA2((-1729),V64,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V67,91,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V68,3,V,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V69,93,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V65,61,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=Z; pile[WZ1]=V66; 
(*f[99])( );     /*SPM0(Z,V66,J)*/
J=pile[WZ2]; 
goto l17;
}
