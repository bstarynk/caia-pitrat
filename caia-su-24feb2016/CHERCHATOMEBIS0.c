#include "dx.h"
void CHERCHATOMEBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V13=0,D=0,V4=0,V19=0,V20=0,V3=0,V17=0,V32=0,V14=0,V23=0,V24=0,V25=0,V26=0,V28=0,V29=0,V30=0,V31=0;
int BL,P;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; P=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=683; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(683,P,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=265; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(265,P,jvj+4)*/
V32=x[BL];
l5:if((x[jvj+4]<=0)) goto l15;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+5,jvj+6)*/
pile[v[22]]=158; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(158,jvj+5,jvj+7)*/
x[jvj+8]=x[jvj+6] ;z[jvj+8]=z[jvj+6];
l7:x[jvj+1]=x[jvj+8] ;z[jvj+1]=z[jvj+8];
pile[v[22]]=287; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(287,jvj+1,jvj+9)*/
x[jvj+10]=x[jvj+9] ;z[jvj+10]=z[jvj+9];
l9:x[jvj+3]=x[jvj+10] ;z[jvj+3]=z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+3,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[BL])) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+3,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+13,jvj+14)*/
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+3,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+15,V14)*/
V14=pile[WZ2]; 
x[jvj+16]=x[jvj+14] ;z[jvj+16]=z[jvj+14];
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=46; 
(*f[41])( );     /*SRB0(5,0,46,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V23,(-740),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V24,40,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=V17; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V25,V17,41,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V26,44,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=jvj+7; 
(*f[98])( );     /*SRA3(135,V28,jvj+7,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V29,41,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=jvj+16; 
(*f[42])( );     /*SRA1(135,V30,jvj+16,V2)*/
V2=pile[WZ3]; 
V1=incon;
if((x[jvj+16]!=187)) goto l1;
pile[v[22]]=218; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,jvj+1,jvj+2)*/
pile[v[22]]=135; pile[WZ1]=V2; 
(*f[42])( );     /*SRA1(135,V2,jvj+2,V1)*/
V1=pile[WZ3]; 
l1:if(V1==incon) goto l2;
l11:if(V1!=incon) goto l12;
l10:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+3,jvj+10)*/
goto l9;
l2:V1=V2;
goto l11;
l4:V3=V4;
l13:if(V3!=incon) goto l14;
goto l10;
l6:x[jvj+4]=t[x[jvj+4]];
goto l5;
l8:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+1,jvj+8)*/
goto l7;
l12:pile[v[22]]=V1; pile[WZ1]=V14; 
(*f[37])( );     /*SRA0(V1,V14,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V32; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V32,V31,V4)*/
V4=pile[WZ3]; 
V3=incon;
pile[v[22]]=1547; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1547,jvj+3,V13)*/
V13=pile[WZ2]; 
D=V13;
pile[v[22]]=135; pile[WZ1]=V4; pile[WZ2]=1547; 
(*f[42])( );     /*SRA1(135,V4,1547,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V19,58,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=D; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V20,D,41,V3)*/
V3=pile[WZ3]; 
l3:if(V3==incon) goto l4;
goto l13;
l14:pile[v[22]]=V3; 
(*f[40])( );     /*SLG0(V3)*/
goto l10;
l15:v[0]=jvj; v[22]-=2; return;
}
