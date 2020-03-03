#include "dx.h"
void SOREGBILAN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V35=0,V2=0,V1=0,V37=0,V3=0,C=0,V5=0,V8=0,V7=0,V52=0,V22=0,V54=0,V24=0,V21=0,V26=0,V32=0,V56=0,V57=0,V58=0,V59=0,V15=0,V14=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V46=0,V48=0,V49=0;
int L;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

L=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[L] ;z[jvj+2]=z[L];
pile[v[22]]=447; pile[WZ1]=L; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(447,L,jvj+6)*/
if((x[jvj+6]!=324)) goto l13;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,L,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=158; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(158,L,jvj+7)*/
V22=incon;
pile[v[22]]=39; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(39,L,jvj+4)*/
V52=x[jvj+4];
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V52,0,V22)*/
V22=pile[WZ3]; 
l8:V24=incon;
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(109,jvj+2,jvj+5)*/
V54=x[jvj+5];
pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(20,V54,V22,V24)*/
V24=pile[WZ3]; 
l10:V26=incon;
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+2,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=V21; 
(*f[37])( );     /*SRA0(V24,V21,V26)*/
V26=pile[WZ2]; 
l12:pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=jvj+7; 
(*f[42])( );     /*SRA1(135,V26,jvj+7,V56)*/
V56=pile[WZ3]; 
pile[WZ1]=V56; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V56,846,V57)*/
V57=pile[WZ3]; 
pile[WZ1]=V57; pile[WZ2]=324; 
(*f[42])( );     /*SRA1(135,V57,324,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V32; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,V32,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
l13:if(x[jvj+6]!=281&&x[jvj+6]!=586) goto l16;
pile[v[22]]=117; pile[WZ1]=L; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,L,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=855; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(855,L,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=715; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(715,L,jvj+8)*/
pile[v[22]]=158; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,L,jvj+9)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+6; 
(*f[42])( );     /*SRA1(135,0,jvj+6,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=39; pile[WZ1]=L; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(39,L,jvj+1)*/
V35=x[jvj+1];
pile[v[22]]=20; pile[WZ1]=V35; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(20,V35,V2,V1)*/
V1=pile[WZ3]; 
l2:V3=incon;
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+2,jvj+3)*/
V37=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=V37; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(20,V37,V1,V3)*/
V3=pile[WZ3]; 
l4:V5=incon;
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+2,C)*/
C=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=C; 
(*f[37])( );     /*SRA0(V3,C,V5)*/
V5=pile[WZ2]; 
l14:pile[v[22]]=135; pile[WZ1]=V5; pile[WZ2]=jvj+9; 
(*f[42])( );     /*SRA1(135,V5,jvj+9,V40)*/
V40=pile[WZ3]; 
pile[WZ1]=V40; pile[WZ2]=337; 
(*f[42])( );     /*SRA1(135,V40,337,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V41,60,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V42,61,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V43,jvj+8,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V44,58,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(41,V15,V45,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V46,(-7111),V8)*/
V8=pile[WZ2]; 
V7=incon;
if((V15>1)) goto l6;
V7=V8;
l15:pile[v[22]]=V7; pile[WZ1]=(-6980); 
(*f[37])( );     /*SRA0(V7,(-6980),V48)*/
V48=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V14; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(41,V14,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
l16:v[0]=jvj; v[22]-=1; return;
l1:V1=V2;
goto l2;
l3:V3=V1;
goto l4;
l5:V5=V3;
goto l14;
l6:pile[v[22]]=V8; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V8,83,V7)*/
V7=pile[WZ2]; 
goto l15;
l7:V22=0;
goto l8;
l9:V24=V22;
goto l10;
l11:V26=V24;
goto l12;
}
