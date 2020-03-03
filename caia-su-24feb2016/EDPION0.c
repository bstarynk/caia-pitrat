#include "dx.h"
void EDPION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V7=0,V24=0,V49=0,V17=0,V16=0,V51=0,V19=0,V12=0,V14=0,V45=0,V44=0,V46=0,V35=0,V37=0,V32=0,V33=0,V40=0,V39=0,V38=0,DFF=0,V41=0,V22=0,V21=0,NR=0,V26=0,V15=0,V25=0,V30=0,V59=0,V52=0,V54=0,V55=0,V57=0,V58=0;
int LL,UR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=10272;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==103&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
LL=pile[v[22]]; UR=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR!=63)) goto l14;
pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(724,240,jvj+11)*/
l12:if((x[jvj+11]<=0)) goto l14;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+12,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+12,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[320])( );     /*Z23Z0(jvj+13,jvj+14)*/
x[jvj+19]=x[jvj+14] ;z[jvj+19]=z[jvj+14];
I=V12;
l1:if((x[jvj+19]>0)) goto l2;
V14=x[jvj+12];
V45=x[jvj+13];
pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(724,240,V14)*/
pile[v[22]]=20; pile[WZ1]=V45; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V45,0,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,V12,V44,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
l13:x[jvj+11]=t[x[jvj+11]];
goto l12;
l2:x[jvj+2]=s[x[jvj+19]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+19];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=73)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V7)*/
V7=pile[WZ2]; 
if((I!=V7)) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==722)) goto l13;
l3:x[jvj+19]=t[x[jvj+19]];
goto l1;
l4:pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(724,240,jvj+7)*/
x[jvj+20]=x[jvj+7] ;z[jvj+20]=z[jvj+7];
l5:if((x[jvj+20]<=0)) goto l17;
x[jvj+8]=s[x[jvj+20]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+20];
pile[v[22]]=510; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+8,V24)*/
V24=pile[WZ2]; 
if((V24!=V15)) goto l6;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+8,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(109,jvj+8,jvj+18)*/
V59=x[jvj+18];
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V15,0,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V52,44,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=V25; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V54,V25,41,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V55,58,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V59; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(20,V59,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V30; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,V30,V58,V17)*/
V17=pile[WZ3]; 
V16=incon;
pile[v[22]]=39; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(39,jvj+8,jvj+9)*/
V49=x[jvj+9];
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V49,V17,V16)*/
V16=pile[WZ3]; 
l10:V19=incon;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+10)*/
if((x[jvj+10]!=0)) goto l11;
V19=V16;
l18:pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
l17:V15++;
l16:if((V15>V26)) goto l19;
V25=g[V15];
if((UR==61)) goto l7;
if((UR==62)) goto l8;
if((UR!=60)) goto l17;
if((V25<NR)) goto l4;
goto l17;
l6:x[jvj+20]=t[x[jvj+20]];
goto l5;
l7:if((V25==NR)) goto l4;
goto l17;
l8:if((V25>NR)) goto l4;
goto l17;
l9:V16=V17;
goto l10;
l11:V51=x[jvj+10];
pile[v[22]]=23; pile[WZ1]=V51; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(23,V51,V16,V19)*/
V19=pile[WZ3]; 
goto l18;
l14:if(UR==63||UR==61||UR==60||UR==62) goto l15;
pile[v[22]]=LL; 
(*f[107])( );     /*CRC0(LL,V35)*/
V35=pile[WZ1]; 
V37=V35+1;
pile[v[22]]=V37; 
(*f[126])( );     /*LND2(V37,V32,V33)*/
V32=pile[WZ1]; V33=pile[WZ2]; 
V40=bh[v[1]][V33];
if((V40!=32)) goto l15;
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(216,158,jvj+16)*/
pile[v[22]]=LL; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+15; 
(*f[78])( );if(v[102]) goto l15;     /*SMA0(LL,36,67,jvj+15)*/
V39=V33+1;
V38=V39+1;
pile[v[22]]=V38; pile[WZ1]=jvj+16; 
(*f[321])( );if(v[102]) goto l15;     /*LCANT0(V38,jvj+16,DFF)*/
DFF=pile[WZ2]; 
V41=bh[v[1]][V39];
pile[v[22]]=107; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=V32; pile[WZ2]=V41; pile[WZ3]=jvj+17; pile[WZ4]=DFF; 
(*f[322])( );     /*ACTIVE0(jvj+15,V32,V41,jvj+17,DFF)*/
l15:V22=LL+1;
V21=V22+1;
pile[v[22]]=V21; 
(*f[135])( );     /*LND3(V21,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=413; pile[WZ1]=240; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(413,240,V26)*/
V26=pile[WZ2]; 
V15=1;
goto l16;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
