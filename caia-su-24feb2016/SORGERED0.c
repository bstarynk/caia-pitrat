#include "dx.h"
void SORGERED0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NA=0,V2=0,NB=0,V5=0,V17=0,V=0,V12=0,V11=0,V29=0,V28=0,V35=0,V61=0,V62=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V40=0,V41=0,V42=0,V43=0,V44=0,V46=0,V48=0,V49=0,V50=0,V52=0,V54=0,V55=0,V56=0,V58=0;
int RW,BL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11666;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1182&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RW=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NA=NB=incon;
pile[v[22]]=447; pile[WZ1]=RW; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(447,RW,jvj+2)*/
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+2,NA)*/
NA=pile[WZ2]; 
l4:pile[v[22]]=459; pile[WZ1]=RW; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(459,RW,jvj+5)*/
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+5,NB)*/
NB=pile[WZ2]; 
l8:if(NA!=incon) goto l1;
l9:if(NB!=incon) goto l5;
l12:pile[v[22]]=1579; pile[WZ1]=RW; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1579,RW,jvj+9)*/
l13:if((x[jvj+9]>0)) goto l14;
if(NA!=incon) goto l23;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l9;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+4,V2)*/
V2=pile[WZ2]; 
if((V2!=NA)) goto l3;
pile[v[22]]=jvj+4; 
(*f[1202])( );     /*GEREDL0(jvj+4)*/
goto l9;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+6)*/
l6:if((x[jvj+6]<=0)) goto l12;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+7,V5)*/
V5=pile[WZ2]; 
if((V5!=NB)) goto l7;
pile[v[22]]=jvj+7; 
(*f[1202])( );     /*GEREDL0(jvj+7)*/
goto l12;
l7:x[jvj+6]=t[x[jvj+6]];
goto l6;
l10:V11=V12;
l22:pile[v[22]]=135; pile[WZ1]=V11; pile[WZ2]=jvj+19; 
(*f[42])( );     /*SRA1(135,V11,jvj+19,V41)*/
V41=pile[WZ3]; 
pile[WZ1]=V41; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,V41,642,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V42,58,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=V23; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V43,V23,41,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V22; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,V22,V44,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V46,493,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V48,58,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=V21; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V49,V21,41,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V20; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,V20,V50,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,V52,1005,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V54,58,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V19; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V55,V19,41,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(41,V18,V56,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
l21:x[jvj+23]=t[x[jvj+23]];
l20:if((x[jvj+23]<=0)) goto l15;
x[jvj+17]=s[x[jvj+23]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+23];
pile[v[22]]=447; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(447,jvj+17,jvj+18)*/
pile[v[22]]=1469; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1469,jvj+17,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=1468; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1468,jvj+17,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=610; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(610,jvj+17,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(609,jvj+17,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(515,jvj+17,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(510,jvj+17,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=158; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(158,jvj+17,jvj+19)*/
x[jvj+8]=x[jvj+18] ;z[jvj+8]=z[jvj+18];
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(498,jvj+8,jvj+20)*/
V40=x[jvj+20];
pile[v[22]]=20; pile[WZ1]=V40; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V40,0,V12)*/
V12=pile[WZ3]; 
V11=incon;
pile[v[22]]=163; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+8,V17)*/
V17=pile[WZ2]; 
V=V17;
pile[v[22]]=V12; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V12,V,V11)*/
V11=pile[WZ2]; 
goto l22;
l11:pile[v[22]]=V29; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V29,83,V28)*/
V28=pile[WZ2]; 
l19:pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
pile[v[22]]=jvj+15; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+15,0,2)*/
l18:x[jvj+22]=t[x[jvj+22]];
l17:if((x[jvj+22]<=0)) goto l15;
x[jvj+13]=s[x[jvj+22]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+22];
pile[v[22]]=158; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(158,jvj+13,jvj+14)*/
pile[v[22]]=159; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(159,jvj+13,jvj+15)*/
for(i=x[jvj+15],V35=0;i>0;i=t[i],V35++)  ;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+14; 
(*f[42])( );     /*SRA1(135,0,jvj+14,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,V35,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V62,(-4670),V29)*/
V29=pile[WZ2]; 
V28=incon;
if((V35>1)) goto l11;
V28=V29;
goto l19;
l14:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=218; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(218,jvj+10,jvj+11)*/
if((x[jvj+11]==547)) goto l16;
if((x[jvj+11]!=1028)) goto l15;
pile[v[22]]=763; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(763,jvj+10,jvj+16)*/
x[jvj+23]=x[jvj+16] ;z[jvj+23]=z[jvj+16];
goto l20;
l15:x[jvj+9]=t[x[jvj+9]];
goto l13;
l16:pile[v[22]]=763; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(763,jvj+10,jvj+12)*/
x[jvj+22]=x[jvj+12] ;z[jvj+22]=z[jvj+12];
goto l17;
l23:if(NB!=incon) goto l25;
goto l24;
l25:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(250,158,jvj+21)*/
pile[v[22]]=NA; pile[WZ1]=NB; pile[WZ2]=RW; pile[WZ3]=BL; pile[WZ4]=jvj+21; 
(*f[1470])( );     /*SORGEREDA0(NA,NB,RW,BL,jvj+21)*/
pile[v[22]]=NB; pile[WZ1]=NA; 
(*f[1470])( );     /*SORGEREDA0(NB,NA,RW,BL,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=BL; 
(*f[1471])( );     /*ANACM0(jvj+21,BL)*/
goto l24;
}
