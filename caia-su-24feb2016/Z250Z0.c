#include "dx.h"
void Z250Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V6=0,T=0,V7=0,V8=0,V10=0,V22=0,V18=0,V19=0,V20=0,V21=0,V28=0,V23=0,V24=0,V25=0,V26=0,V27=0,V64=0,V59=0,V60=0,V61=0,V62=0,V63=0,V40=0,V35=0,V36=0,V37=0,V38=0,V39=0,V46=0,V41=0,V42=0,V43=0,V44=0,V45=0,V58=0,V53=0,V54=0,V55=0,V56=0,V57=0,V17=0,V12=0,V13=0,V14=0,V15=0,V16=0,V34=0,V29=0,V30=0,V31=0,V32=0,V33=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,SUJ,jvj+2)*/
T=x[jvj+2];
l8:pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,SUJ,jvj+5)*/
if(x[jvj+5]==20||x[jvj+5]==89||x[jvj+5]==41||x[jvj+5]==96||x[jvj+5]==23||x[jvj+5]==453||x[jvj+5]==531) goto l2;
V22=x[jvj+5];
pile[v[22]]=0; pile[WZ1]=(-4771); 
(*f[37])( );     /*SRA0(0,(-4771),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V18; pile[WZ2]=158; 
(*f[42])( );     /*SRA1(135,V18,158,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V19,(-4390),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(20,V22,V20,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
l2:pile[v[22]]=158; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,SUJ,jvj+1)*/
l10:if((T==20)) goto l7;
if((T==41)) goto l5;
if((T==89)) goto l6;
if((T!=96)) goto l15;
pile[v[22]]=163; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,SUJ,V10)*/
V10=pile[WZ2]; 
l15:if(T!=23&&T!=453) goto l1;
pile[v[22]]=128; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,SUJ,jvj+3)*/
l1:pile[v[22]]=140; pile[WZ1]=SUJ; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,SUJ,V2)*/
V2=pile[WZ2]; 
l3:pile[v[22]]=416; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(416,SUJ,V6)*/
V6=pile[WZ2]; 
l18:v[0]=jvj; v[22]-=1; return;
l4:T=250;
goto l8;
l5:pile[v[22]]=130; pile[WZ1]=SUJ; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,SUJ,V7)*/
V7=pile[WZ2]; 
goto l15;
l6:pile[v[22]]=162; pile[WZ1]=SUJ; 
(*f[219])( );if(v[102]) goto l13;     /*FNDC2(162,SUJ,V8)*/
V8=pile[WZ2]; 
goto l15;
l7:pile[v[22]]=101; pile[WZ1]=SUJ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,SUJ,jvj+4)*/
goto l15;
l9:V28=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4771); 
(*f[37])( );     /*SRA0(0,(-4771),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V23,300,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=158; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,158,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V25,(-740),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V28,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
goto l10;
l11:V64=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4771); 
(*f[37])( );     /*SRA0(0,(-4771),V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V59,300,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=101; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,101,V60,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V61,(-740),V62)*/
V62=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(20,V64,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
goto l15;
l12:V40=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4771); 
(*f[37])( );     /*SRA0(0,(-4771),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V35,300,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=130; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,130,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V37,(-740),V38)*/
V38=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V40; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(20,V40,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
goto l15;
l13:V46=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4771); 
(*f[37])( );     /*SRA0(0,(-4771),V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V41,300,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=162; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,162,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V43,(-740),V44)*/
V44=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V46; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,V46,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
goto l15;
l14:V58=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4771); 
(*f[37])( );     /*SRA0(0,(-4771),V53)*/
V53=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V53,300,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=163; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,163,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V55,(-740),V56)*/
V56=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(20,V58,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
goto l15;
l16:V17=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4771); 
(*f[37])( );     /*SRA0(0,(-4771),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V12; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V12,300,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=140; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(20,140,V13,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V14,(-740),V15)*/
V15=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(20,V17,V15,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
goto l3;
l17:V34=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4771); 
(*f[37])( );     /*SRA0(0,(-4771),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V29; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V29,300,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=416; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(20,416,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V31,(-740),V32)*/
V32=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V34; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V34,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
goto l18;
}
