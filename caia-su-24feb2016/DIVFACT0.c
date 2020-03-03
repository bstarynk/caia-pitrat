#include "dx.h"
void DIVFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,E=0,V11=0,F=0,V12=0,V14=0,PP=0,P=0,V24=0,V23=0,V32=0,K=0,V35=0,V44=0,L=0,V47=0,V54=0,V75=0,V74=0,V73=0,V72=0,V71=0,V66=0,V90=0,V55=0,V67=0,V68=0,V57=0,V56=0,V63=0,V58=0,V62=0,V78=0,V81=0,V61=0,V93=0;
int A,B,RS,Z;
int RP;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=10605;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1156&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; RS=pile[v[22]+2]; Z=pile[v[22]+3]; RP=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,A,V32)*/
V32=pile[WZ2]; 
K=V32;
l15:pile[v[22]]=130; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,B,V44)*/
V44=pile[WZ2]; 
L=V44;
l1:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,A,jvj+4)*/
V6=x[jvj+4];
E=V6;
l3:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,B,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=485)) goto l4;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,B,jvj+7)*/
V11=x[jvj+7];
F=V11;
l5:if((K!=1)) goto l6;
if((E!=0)) goto l6;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:E=0;
goto l3;
l4:F=0;
goto l5;
l6:if((L!=1)) goto l20;
if((F!=0)) goto l20;
goto l9;
l7:V12=PP;
l8:P=V12;
if((P<=1)) goto l9;
pile[v[22]]=P; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[1461])( );if(v[102]) goto l9;     /*REDUIT0(P,A,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=P; pile[WZ1]=B; pile[WZ2]=jvj+14; 
(*f[1461])( );if(v[102]) goto l9;     /*REDUIT0(P,B,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=Z; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,Z,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,jvj+15,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+18; pile[WZ5]=RP; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+18,RP)*/
if((x[Z]!=625)) goto l10;
pile[v[22]]=160; pile[WZ1]=RS; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,RS,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+9,V24)*/
V24=pile[WZ2]; 
V23=V24/P;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[378])( );     /*CPI0(jvj+10,jvj+11)*/
pile[v[22]]=RP; pile[WZ1]=160; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(RP,160,jvj+11)*/
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l11:x[jvj+22]=t[x[jvj+22]];
l12:if((x[jvj+22]<=0)) goto l13;
x[jvj+19]=s[x[jvj+22]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+22];
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+19,V35)*/
V35=pile[WZ2]; 
K=V35;
goto l15;
l13:K=1;
goto l15;
l14:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,A,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=486)) goto l13;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,A,jvj+22)*/
goto l12;
l16:x[jvj+26]=t[x[jvj+26]];
l17:if((x[jvj+26]<=0)) goto l18;
x[jvj+23]=s[x[jvj+26]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+26];
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+23,V47)*/
V47=pile[WZ2]; 
L=V47;
goto l1;
l18:L=1;
goto l1;
l19:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,B,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=486)) goto l18;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,B,jvj+26)*/
goto l17;
l20:V54=0;
V75=F;
V74=E;
V73=K;
V72=L;
V71=V54;
l21:V58=V63=V55=V68=V56=incon;
if((V73>1)) goto l35;
if((V72>1)) goto l36;
if((V74!=0)) goto l42;
if((V75==0)) goto l23;
V66=s[V75];
x[jvj+27]=V66 ;z[jvj+27]=(V66<=sepcte) ? V66 : 0;
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+27,V90)*/
V90=pile[WZ2]; 
V55=V90;
l22:V67=t[V75];
V68=V67;
l23:V57=V73;
if(V58==incon) goto l34;
l24:if(V63==incon) goto l33;
l25:if(V55!=incon) goto l32;
l26:if(V68==incon) goto l30;
l27:if(V56!=incon) goto l28;
goto l9;
l28:if((V57!=1)) goto l29;
if((V58!=1)) goto l29;
if((V63!=0)) goto l29;
if((V68!=0)) goto l29;
if((V56<=1)) goto l29;
PP=V56;
V12=incon;
if((x[Z]!=625)) goto l7;
pile[v[22]]=160; pile[WZ1]=RS; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,RS,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+8,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=PP; 
(*f[1011])( );     /*PGCD0(V14,PP,V12)*/
V12=pile[WZ2]; 
goto l8;
l29:V71=V56;
V72=V58;
V73=V57;
V74=V63;
V75=V68;
goto l21;
l30:V68=V75;
goto l27;
l31:V56=V55;
goto l26;
l32:if((V71==0)) goto l31;
if((V55<=1)) goto l26;
if((V71<=1)) goto l26;
pile[v[22]]=V71; pile[WZ1]=V55; 
(*f[1011])( );     /*PGCD0(V71,V55,V56)*/
V56=pile[WZ2]; 
goto l26;
l33:V63=V74;
goto l25;
l35:V55=V73;
V57=1;
l34:V58=V72;
goto l24;
l36:V55=V72;
V58=1;
goto l23;
l38:pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=486)) goto l41;
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+31)*/
l39:if((x[jvj+31]<=0)) goto l41;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+32,V81)*/
V81=pile[WZ2]; 
V55=V81;
l37:V62=t[V74];
V63=V62;
goto l23;
l40:x[jvj+31]=t[x[jvj+31]];
goto l39;
l41:V55=1;
goto l37;
l42:V61=s[V74];
x[jvj+28]=V61 ;z[jvj+28]=(V61<=sepcte) ? V61 : 0;
pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+28,V78)*/
V78=pile[WZ2]; 
V55=V78;
goto l37;
l43:x[jvj+36]=t[x[jvj+36]];
l44:if((x[jvj+36]<=0)) goto l45;
x[jvj+33]=s[x[jvj+36]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+36];
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+33,V93)*/
V93=pile[WZ2]; 
V55=V93;
goto l22;
l45:V55=1;
goto l22;
l46:pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+27,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=486)) goto l45;
pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+36)*/
goto l44;
}
