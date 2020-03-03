#include "dx.h"
void TRINOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V57=0,V58=0,V59=0,I=0,V20=0,V10=0,V3=0,V36=0,V28=0,AA=0,BB=0,CC=0,V62=0,V65=0,V63=0,V66=0,V64=0,V67=0;
int Z;
int A,B,C,RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=incon;
pile[v[22]]=68; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(68,158,jvj+2)*/
pile[v[22]]=129; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[1157])( );if(v[102]) goto l5;     /*NORME1(129,Z,jvj+1)*/
l5:if(x[jvj+1]!=incon) goto l6;
l27:pile[v[22]]=jvj+2; pile[WZ1]=158; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+2,158,12)*/
l28:V65=incon;
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(510,jvj+2,V62)*/
V62=pile[WZ2]; 
V65=V62;
l30:V66=incon;
pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(515,jvj+2,V63)*/
V63=pile[WZ2]; 
V66=V63;
l32:V67=incon;
pile[v[22]]=609; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(609,jvj+2,V64)*/
V64=pile[WZ2]; 
V67=V64;
l34:A=V65;
B=V66;
C=V67;
pile[v[22]]=158; pile[WZ1]=jvj+2; pile[WZ2]=RES; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(158,jvj+2,RES)*/
v[0]=jvj; v[22]-=5; pile[v[22]+1]=A; pile[v[22]+2]=B; pile[v[22]+3]=C; v[102]=0;return;
l6:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+1,jvj+7)*/
if((x[jvj+7]==484)) goto l7;
if((x[jvj+7]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+1,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=485)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+5)*/
l4:if((x[jvj+5]<=0)) goto l28;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; pile[WZ2]=67; 
(*f[1898])( );     /*TRINOME1(jvj+6,jvj+2,67)*/
x[jvj+5]=t[x[jvj+5]];
goto l4;
l7:pile[v[22]]=jvj+2; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,515,1)*/
goto l28;
l8:pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+1,I)*/
I=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=609; pile[WZ2]=I; 
(*f[186])( );     /*BTC0(jvj+2,609,I)*/
goto l28;
l9:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+1,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==486)) goto l10;
if((x[jvj+11]!=52)) goto l27;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+1,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=67; pile[WZ5]=jvj+3; 
(*f[1899])( );     /*TRINOME2(jvj+25,67,AA,BB,CC,jvj+3)*/
AA=pile[WZ2]; BB=pile[WZ3]; CC=pile[WZ4]; 
if((AA==0)) goto l1;
V57=(-AA);
pile[v[22]]=jvj+2; pile[WZ1]=510; pile[WZ2]=V57; 
(*f[186])( );     /*BTC0(jvj+2,510,V57)*/
l1:if((BB==0)) goto l2;
V58=(-BB);
pile[v[22]]=jvj+2; pile[WZ1]=515; pile[WZ2]=V58; 
(*f[186])( );     /*BTC0(jvj+2,515,V58)*/
l2:if((CC==0)) goto l3;
V59=(-CC);
pile[v[22]]=jvj+2; pile[WZ1]=609; pile[WZ2]=V59; 
(*f[186])( );     /*BTC0(jvj+2,609,V59)*/
l3:pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(158,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l28;
pile[v[22]]=jvj+2; pile[WZ1]=158; 
(*f[35])( );     /*CHGC1(jvj+2,158,jvj+4)*/
goto l28;
l10:pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+12)*/
for(i=x[jvj+12],V20=0;i>0;i=t[i],V20++)  ;
if((V20==2)) goto l13;
if((V20!=3)) goto l27;
x[jvj+30]=x[jvj+12] ;z[jvj+30]=z[jvj+12];
l21:if((x[jvj+30]<=0)) goto l27;
x[jvj+20]=s[x[jvj+30]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+30];
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+20,V36)*/
V36=pile[WZ2]; 
V28=V36;
x[jvj+31]=x[jvj+12] ;z[jvj+31]=z[jvj+12];
l23:if((x[jvj+31]<=0)) goto l22;
x[jvj+21]=s[x[jvj+31]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+31];
if((x[jvj+20]==x[jvj+21])) goto l24;
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=484)) goto l24;
x[jvj+32]=x[jvj+12] ;z[jvj+32]=z[jvj+12];
l25:if((x[jvj+32]<=0)) goto l24;
x[jvj+23]=s[x[jvj+32]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+32];
if((x[jvj+20]==x[jvj+23])) goto l26;
if((x[jvj+21]==x[jvj+23])) goto l26;
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l26;
pile[v[22]]=jvj+2; pile[WZ1]=510; pile[WZ2]=V28; 
(*f[186])( );     /*BTC0(jvj+2,510,V28)*/
goto l28;
l12:x[jvj+13]=s[x[jvj+26]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+26];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l14;
x[jvj+27]=x[jvj+12] ;z[jvj+27]=z[jvj+12];
l15:if((x[jvj+27]<=0)) goto l14;
x[jvj+15]=s[x[jvj+27]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+27];
if((x[jvj+13]==x[jvj+15])) goto l16;
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l16;
pile[v[22]]=jvj+2; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,510,1)*/
goto l28;
l13:x[jvj+26]=x[jvj+12] ;z[jvj+26]=z[jvj+12];
l11:if((x[jvj+26]>0)) goto l12;
x[jvj+28]=x[jvj+12] ;z[jvj+28]=z[jvj+12];
l17:if((x[jvj+28]<=0)) goto l27;
x[jvj+17]=s[x[jvj+28]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+28];
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+17,V10)*/
V10=pile[WZ2]; 
V3=V10;
x[jvj+29]=x[jvj+12] ;z[jvj+29]=z[jvj+12];
l19:if((x[jvj+29]<=0)) goto l18;
x[jvj+18]=s[x[jvj+29]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+29];
if((x[jvj+17]==x[jvj+18])) goto l20;
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=484)) goto l20;
pile[v[22]]=jvj+2; pile[WZ1]=515; pile[WZ2]=V3; 
(*f[186])( );     /*BTC0(jvj+2,515,V3)*/
goto l28;
l14:x[jvj+26]=t[x[jvj+26]];
goto l11;
l16:x[jvj+27]=t[x[jvj+27]];
goto l15;
l18:x[jvj+28]=t[x[jvj+28]];
goto l17;
l20:x[jvj+29]=t[x[jvj+29]];
goto l19;
l22:x[jvj+30]=t[x[jvj+30]];
goto l21;
l24:x[jvj+31]=t[x[jvj+31]];
goto l23;
l26:x[jvj+32]=t[x[jvj+32]];
goto l25;
l29:V65=0;
goto l30;
l31:V66=0;
goto l32;
l33:V67=0;
goto l34;
l35:A=B=C=x[RES]=incon;
v[0]=jvj; v[22]-=5; v[102]=1;return;
}
