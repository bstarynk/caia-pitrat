#include "dx.h"
void SORETAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A=0,V2=0,V23=0,V24=0,V25=0,V1=0,C=0,V28=0,V29=0,V30=0,V3=0,D=0,V33=0,V34=0,V35=0,V5=0,G=0,V38=0,V39=0,V40=0,V7=0,V10=0,V9=0,V18=0,V20=0,V46=0,V44=0,V45=0,V47=0,V48=0,V50=0,V51=0;
int NA;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10859;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==529&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NA=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=NA; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(498,NA,jvj+2)*/
pile[v[22]]=509; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(509,NA,jvj+3)*/
for(i=x[jvj+3],V18=0;i>0;i=t[i],V18++)  ;
pile[v[22]]=365; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,NA,jvj+4)*/
for(i=x[jvj+4],V20=0;i>0;i=t[i],V20++)  ;
V46=x[NA];
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V46; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,V46,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=30; pile[WZ1]=V45; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,V45,42,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
pile[v[22]]=41; pile[WZ1]=V20; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V20,0,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=226; 
(*f[42])( );     /*SRA1(135,V48,226,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V50,59,V2)*/
V2=pile[WZ2]; 
V1=incon;
pile[v[22]]=473; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(473,jvj+2,A)*/
A=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=473; 
(*f[42])( );     /*SRA1(135,V2,473,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V23,58,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=A; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V24,A,41,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V25,59,V1)*/
V1=pile[WZ2]; 
l2:V3=incon;
pile[v[22]]=472; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(472,jvj+2,C)*/
C=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V1; pile[WZ2]=472; 
(*f[42])( );     /*SRA1(135,V1,472,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V28,58,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=C; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V29,C,41,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V30,59,V3)*/
V3=pile[WZ2]; 
l4:V5=incon;
pile[v[22]]=750; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(750,jvj+2,D)*/
D=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V3; pile[WZ2]=750; 
(*f[42])( );     /*SRA1(135,V3,750,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V33,58,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=D; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V34,D,41,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V35,59,V5)*/
V5=pile[WZ2]; 
l6:V7=incon;
pile[v[22]]=688; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(688,jvj+2,G)*/
G=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V5; pile[WZ2]=688; 
(*f[42])( );     /*SRA1(135,V5,688,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V38,58,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=G; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V39,G,41,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V40,59,V7)*/
V7=pile[WZ2]; 
l9:pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,V18,V7,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=(-8883); 
(*f[37])( );     /*SRA0(V51,(-8883),V10)*/
V10=pile[WZ2]; 
V9=incon;
if((V18>1)) goto l8;
V9=V10;
l10:pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
l11:pile[v[22]]=509; pile[WZ1]=NA; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(509,NA,jvj+5)*/
l12:if((x[jvj+5]>0)) goto l13;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:V1=V2;
goto l2;
l3:V3=V1;
goto l4;
l5:V5=V3;
goto l6;
l7:V7=V5;
goto l9;
l8:pile[v[22]]=V10; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V10,83,V9)*/
V9=pile[WZ2]; 
goto l10;
l13:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; 
(*f[868])( );     /*SORCONTR0(jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l12;
}
