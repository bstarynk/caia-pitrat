#include "dx.h"
void Z33Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,NNNX=0,V34=0,V14=0,V12=0,V13=0,V15=0,V16=0,V23=0,V18=0,V19=0,V20=0,V21=0,V22=0,V29=0,V24=0,V25=0,V26=0,V27=0,V28=0;
int SUJ;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

SUJ=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=708; pile[WZ1]=SUJ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(708,SUJ,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[4051])( );     /*Z32Z0(jvj+3)*/
l2:pile[v[22]]=719; pile[WZ1]=SUJ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(719,SUJ,jvj+4)*/
pile[v[22]]=jvj+4; 
(*f[4051])( );     /*Z32Z0(jvj+4)*/
l3:pile[v[22]]=632; pile[WZ1]=SUJ; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(632,SUJ,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=258; pile[WZ1]=SUJ; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(258,SUJ,jvj+7)*/
l6:if((x[jvj+7]>0)) goto l7;
pile[v[22]]=159; pile[WZ1]=SUJ; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(159,SUJ,jvj+9)*/
l8:if((x[jvj+9]>0)) goto l9;
pile[v[22]]=474; pile[WZ1]=SUJ; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(474,SUJ,jvj+11)*/
l10:if((x[jvj+11]>0)) goto l11;
pile[v[22]]=SUJ; pile[WZ1]=jvj+13; 
(*f[4086])( );     /*ENSATT0(SUJ,jvj+13)*/
V17=x[SUJ];
V34=x[jvj+13];
l12:if((V34>0)) goto l13;
pile[v[22]]=708; pile[WZ1]=SUJ; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(708,SUJ,jvj+1)*/
l1:pile[v[22]]=719; pile[WZ1]=SUJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(719,SUJ,jvj+2)*/
l17:v[0]=jvj; v[22]-=1; return;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; 
(*f[4053])( );     /*Z34Z0(jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l4;
l7:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; 
(*f[4051])( );     /*Z32Z0(jvj+8)*/
x[jvj+7]=t[x[jvj+7]];
goto l6;
l9:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; 
(*f[4051])( );     /*Z32Z0(jvj+10)*/
x[jvj+9]=t[x[jvj+9]];
goto l8;
l11:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; 
(*f[4051])( );     /*Z32Z0(jvj+12)*/
x[jvj+11]=t[x[jvj+11]];
goto l10;
l13:NNNX=s[V34];
if(NNNX==708||NNNX==719||NNNX==632||NNNX==258||NNNX==159||NNNX==474) goto l14;
V14=NNNX;
pile[v[22]]=0; pile[WZ1]=(-4786); 
(*f[37])( );     /*SRA0(0,(-4786),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V13,(-740),V15)*/
V15=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(20,V17,V15,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
l14:V34=t[V34];
goto l12;
l15:V23=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4786); 
(*f[37])( );     /*SRA0(0,(-4786),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V18; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V18,300,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=708; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,708,V19,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V20,(-740),V21)*/
V21=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V23; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V23,V21,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
goto l1;
l16:V29=x[SUJ];
pile[v[22]]=0; pile[WZ1]=(-4786); 
(*f[37])( );     /*SRA0(0,(-4786),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V24,300,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=719; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,719,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V26,(-740),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,V29,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
goto l17;
}
