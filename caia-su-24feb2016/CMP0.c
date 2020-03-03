#include "dx.h"
void CMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NL=0,V50=0,V51=0,V52=0,V53=0,V32=0,V33=0,V36=0,V34=0,V35=0,V37=0,V38=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V39=0,V47=0,V28=0,V3=0,V1=0,V2=0,V4=0,V5=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,V6=0,V14=0,V15=0,V17=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V24=0,V25=0,V16=0,V27=0;
int TL,UR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

TL=pile[v[22]]; UR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=NL=incon;
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(583,TL,jvj+1)*/
l1:pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,TL,NL)*/
NL=pile[WZ2]; 
l2:if(x[jvj+1]==incon) goto l3;
l4:if(NL==incon) goto l5;
l6:if(x[jvj+1]!=incon) goto l7;
l13:v[0]=jvj; v[22]-=2; return;
l3:pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V50; pile[WZ2]=58; 
(*f[41])( );     /*SRB0(20,V50,58,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
goto l4;
l5:pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(20,V52,38,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
goto l6;
l7:if(NL!=incon) goto l8;
goto l13;
l8:if(UR!=46&&UR!=32) goto l11;
pile[v[22]]=890; pile[WZ1]=240; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(890,240,jvj+2)*/
l9:if((x[jvj+2]<=0)) goto l11;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+3,V32)*/
V32=pile[WZ2]; 
if((V32!=NL)) goto l10;
pile[v[22]]=109; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[jvj+1])) goto l10;
V33=x[jvj+3];
pile[v[22]]=890; pile[WZ1]=240; pile[WZ2]=V33; 
(*f[134])( );     /*OTA0(890,240,V33)*/
l10:x[jvj+2]=t[x[jvj+2]];
goto l9;
l11:if((UR==32)) goto l12;
if((UR!=46)) goto l13;
pile[v[22]]=246; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(246,TL,V28)*/
V28=pile[WZ2]; 
V3=0;
x[jvj+5]=d[35];z[jvj+5]=0;
v[2]=v[1];
V1=V3;
v[1]=4;
pile[v[22]]=(-7464); pile[WZ1]=V1; 
(*f[64])( );     /*SRA2((-7464),V1,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V2,0,V4)*/
V4=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V4; pile[WZ1]=406; pile[WZ2]=0; 
(*f[67])( );     /*SPA0(V4,406,0)*/
v[2]=v[1];
V5=V3;
v[1]=4;
pile[v[22]]=(-6425); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-6425),V5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V7,32,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=(-6423); pile[WZ1]=V8; 
(*f[64])( );     /*SRA2((-6423),V8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=(-6376); pile[WZ1]=V9; 
(*f[64])( );     /*SRA2((-6376),V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V10; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V10,jvj+1,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=NL; pile[WZ1]=V11; 
(*f[99])( );     /*SPM0(NL,V11,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=(-787); pile[WZ1]=V12; 
(*f[64])( );     /*SRA2((-787),V12,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V6,0,V14)*/
V14=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V14; pile[WZ1]=406; pile[WZ2]=131; 
(*f[67])( );     /*SPA0(V14,406,131)*/
pile[v[22]]=V28; pile[WZ1]=246; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(V28,246,jvj+7)*/
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=130; pile[WZ3]=NL; pile[WZ4]=jvj+7; pile[WZ5]=jvj+6; 
(*f[47])( );     /*QUADRI0(109,jvj+1,130,NL,jvj+7,jvj+6)*/
pile[v[22]]=494; pile[WZ1]=240; pile[WZ2]=jvj+6; pile[WZ3]=jvj+5; 
(*f[663])( );     /*PLUG0(494,240,jvj+6,jvj+5)*/
v[2]=v[1];
V15=V3;
v[1]=4;
pile[v[22]]=(-12143); pile[WZ1]=V15; 
(*f[64])( );     /*SRA2((-12143),V15,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V17; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V17,jvj+1,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=NL; pile[WZ1]=V18; 
(*f[99])( );     /*SPM0(NL,V18,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=(-2696); pile[WZ1]=V19; 
(*f[64])( );     /*SRA2((-2696),V19,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V20,32,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=(-12147); pile[WZ1]=V21; 
(*f[64])( );     /*SRA2((-12147),V21,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=(-4493); pile[WZ1]=V22; 
(*f[64])( );     /*SRA2((-4493),V22,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V23,jvj+1,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=NL; pile[WZ1]=V24; 
(*f[99])( );     /*SPM0(NL,V24,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=(-12141); pile[WZ1]=V25; 
(*f[64])( );     /*SRA2((-12141),V25,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V16,0,V27)*/
V27=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V27; pile[WZ1]=406; pile[WZ2]=132; 
(*f[67])( );     /*SPA0(V27,406,132)*/
goto l13;
l12:V36=0;
v[2]=v[1];
V34=V36;
v[1]=4;
pile[v[22]]=(-7464); pile[WZ1]=V34; 
(*f[64])( );     /*SRA2((-7464),V34,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V35,0,V37)*/
V37=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V37; pile[WZ1]=406; pile[WZ2]=0; 
(*f[67])( );     /*SPA0(V37,406,0)*/
v[2]=v[1];
V38=V36;
v[1]=4;
pile[v[22]]=(-6425); pile[WZ1]=V38; 
(*f[64])( );     /*SRA2((-6425),V38,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V40,32,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=(-6376); pile[WZ1]=V41; 
(*f[64])( );     /*SRA2((-6376),V41,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=(-6436); pile[WZ1]=V42; 
(*f[64])( );     /*SRA2((-6436),V42,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V43,jvj+1,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=NL; pile[WZ1]=V44; 
(*f[99])( );     /*SPM0(NL,V44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=(-787); pile[WZ1]=V45; 
(*f[64])( );     /*SRA2((-787),V45,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V39,0,V47)*/
V47=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V47; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V47,406,130)*/
goto l13;
}
