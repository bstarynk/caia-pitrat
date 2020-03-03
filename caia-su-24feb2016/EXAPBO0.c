#include "dx.h"
void EXAPBO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V15=0,V2=0,V18=0,V21=0,V24=0,V27=0,V29=0,V3=0,NA=0,V4=0,NB=0,V6=0,V37=0,V=0,V9=0,V8=0,V48=0,V38=0,V40=0,V39=0,V41=0,V49=0,V50=0,V51=0,V53=0,V54=0,V56=0,V57=0,V59=0,V60=0,V68=0,V67=0;
int E;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11222;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==507&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=x[E] ;z[jvj+15]=z[E];
l11:if((x[jvj+15]>0)) goto l12;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:V2=20;
l19:pile[v[22]]=1018; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1018,jvj+8,jvj+9)*/
pile[v[22]]=288; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(288,jvj+8,jvj+10)*/
NA=V2;
V4=incon;
if((NA>0)) goto l8;
V4=0;
l20:NB=V3;
V6=incon;
if((NB>0)) goto l9;
V6=V4;
l21:pile[v[22]]=20; pile[WZ1]=V48; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(20,V48,V6,V9)*/
V9=pile[WZ3]; 
V8=incon;
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+2,V37)*/
V37=pile[WZ2]; 
V=V37;
pile[v[22]]=V9; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V9,V,V8)*/
V8=pile[WZ2]; 
l22:pile[v[22]]=135; pile[WZ1]=V8; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,V8,jvj+10,V49)*/
V49=pile[WZ3]; 
pile[WZ1]=V49; pile[WZ2]=jvj+9; 
(*f[42])( );     /*SRA1(135,V49,jvj+9,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V41; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,V41,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V51,58,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=V40; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V53,V40,41,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V54,59,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V39; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(41,V39,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V57,58,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=V38; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V59,V38,41,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; 
(*f[40])( );     /*SLG0(V60)*/
l17:x[jvj+18]=t[x[jvj+18]];
l15:if((x[jvj+18]>0)) goto l16;
x[jvj+17]=t[x[jvj+17]];
l14:if((x[jvj+17]<=0)) goto l13;
x[jvj+6]=s[x[jvj+17]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+17];
pile[v[22]]=1051; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1051,jvj+6,jvj+7)*/
x[jvj+18]=x[jvj+7] ;z[jvj+18]=z[jvj+7];
goto l15;
l4:V2=0;
goto l19;
l6:if(V3==incon) goto l7;
l18:pile[v[22]]=515; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(515,jvj+8,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+8,V41)*/
V41=pile[WZ2]; 
V2=incon;
V12=V39*2;
if((V12>V41)) goto l1;
V15=V39*10;
if((V15<=V41)) goto l1;
V2=5;
l1:V18=V39*10;
if((V18>V41)) goto l2;
V21=V39*100;
if((V21<=V41)) goto l2;
V2=10;
l2:V24=V39*100;
if((V24<=V41)) goto l3;
if(V2==incon) goto l4;
goto l19;
l7:V3=0;
goto l18;
l8:pile[v[22]]=NA; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(NA,0,42,V4)*/
V4=pile[WZ3]; 
goto l20;
l9:pile[v[22]]=NB; pile[WZ1]=V4; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(NB,V4,43,V6)*/
V6=pile[WZ3]; 
goto l21;
l10:V8=V9;
goto l22;
l12:x[jvj+2]=s[x[jvj+15]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+15];
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+2,jvj+11)*/
pile[v[22]]=983; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(983,jvj+11,jvj+12)*/
pile[v[22]]=878; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(878,jvj+12,jvj+13)*/
l24:if((x[jvj+13]<=0)) goto l13;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=163; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+14,V68)*/
V68=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+2,V67)*/
V67=pile[WZ2]; 
if((V68==V67)) goto l25;
x[jvj+13]=t[x[jvj+13]];
goto l24;
l13:x[jvj+15]=t[x[jvj+15]];
goto l11;
l16:x[jvj+8]=s[x[jvj+18]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+18];
pile[v[22]]=610; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(610,jvj+8,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(609,jvj+8,V40)*/
V40=pile[WZ2]; 
V3=incon;
V27=V38*4;
V29=3*V40;
if((V27>V29)) goto l5;
V3=5;
l5:if((V38>=V40)) goto l6;
if((V27<=V29)) goto l6;
V3=2;
goto l18;
l25:x[jvj+16]=x[jvj+14] ;z[jvj+16]=z[jvj+14];
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+2,jvj+3)*/
x[jvj+4]=x[jvj+16] ;z[jvj+4]=z[jvj+16];
pile[v[22]]=1051; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1051,jvj+4,jvj+5)*/
V48=x[jvj+3];
x[jvj+17]=x[jvj+5] ;z[jvj+17]=z[jvj+5];
goto l14;
}
