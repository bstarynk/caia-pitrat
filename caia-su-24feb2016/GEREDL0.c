#include "dx.h"
void GEREDL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V2=0,V20=0,V21=0,V1=0,V12=0,V13=0,V15=0,V16=0,V17=0,V18=0,V19=0,V3=0,V5=0,V7=0,V11=0,V10=0,V24=0,V25=0,V26=0,V28=0,V30=0,V31=0,V33=0,V34=0,V36=0,V37=0,V38=0,V40=0,V41=0,V42=0,V43=0,V45=0,V46=0,V48=0,V49=0,V50=0,V52=0,V53=0,V55=0,V56=0,V58=0,V59=0,V61=0;
int X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1058; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1058,X,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(936,X,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,X,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=941; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(941,X,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=942; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(942,X,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=943; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(943,X,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,X,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=1202; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1202,X,jvj+2)*/
pile[v[22]]=1260; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1260,X,jvj+3)*/
for(i=x[jvj+3],V3=0;i>0;i=t[i],V3++)  ;
pile[v[22]]=1261; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1261,X,jvj+4)*/
for(i=x[jvj+4],V5=0;i>0;i=t[i],V5++)  ;
pile[v[22]]=1363; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1363,X,jvj+5)*/
for(i=x[jvj+5],V7=0;i>0;i=t[i],V7++)  ;
V11=V3+V5;
V10=V11+V7;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,0,642,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V24,58,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=V19; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V25,V19,41,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,V18,V26,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V28,45,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=V17; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V30,V17,41,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V31,45,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V16; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V33,V16,41,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V34; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V34,683,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V36,58,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=V15; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V37,V15,41,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V38; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V38,jvj+2,V40)*/
V40=pile[WZ3]; 
pile[WZ1]=V40; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V40,936,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V41,58,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=V13; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V42,V13,41,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=1058; 
(*f[42])( );     /*SRA1(135,V43,1058,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V45,58,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=V12; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V46,V12,41,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=901; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(901,X,jvj+1)*/
if((x[jvj+1]!=0)) goto l1;
V1=V2;
l2:pile[v[22]]=135; pile[WZ1]=V1; pile[WZ2]=1202; 
(*f[42])( );     /*SRA1(135,V1,1202,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V48,58,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=V10; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V49,V10,41,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V50,40,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=V3; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V52,V3,41,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V53,45,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V5; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V55,V5,41,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V56,45,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=V7; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V58,V7,41,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V59,41,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
l3:v[0]=jvj; v[22]-=1; return;
l1:V23=x[jvj+1];
pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=901; 
(*f[42])( );     /*SRA1(135,V2,901,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V20,58,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V23; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(23,V23,V21,V1)*/
V1=pile[WZ3]; 
goto l2;
}
