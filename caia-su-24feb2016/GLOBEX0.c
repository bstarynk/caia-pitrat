#include "dx.h"
void GLOBEX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V10=0,V3=0,V12=0,V11=0,V2=0,V13=0,V8=0,V17=0,V14=0,V15=0,V16=0,V18=0,V19=0,V20=0,V22=0,V23=0,V24=0,V26=0,V27=0,V28=0,V37=0,V36=0;
int ND,NS,T,PB,NM,EN,KX;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11565;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==870&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
ND=pile[v[22]]; NS=pile[v[22]+1]; T=pile[v[22]+2]; PB=pile[v[22]+3]; NM=pile[v[22]+4]; EN=pile[v[22]+5]; KX=pile[v[22]+6]; v[22]+=7; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(645,597,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l13;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5!=ND)) goto l2;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(905,jvj+3,V8)*/
V8=pile[WZ2]; 
if((x[PB]==1822)) goto l12;
pile[WZ1]=PB; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(905,PB,V7)*/
V7=pile[WZ2]; 
if((V8==V7)) goto l12;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+14]=t[x[jvj+14]];
l3:if((x[jvj+14]<=0)) goto l7;
x[jvj+6]=s[x[jvj+14]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+6,V10)*/
V10=pile[WZ2]; 
if((V10!=999)) goto l4;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(936,jvj+6,V12)*/
V12=pile[WZ2]; 
V11=2*V12;
V3=incon;
if((V11>20)) goto l5;
V3=20;
l6:V2=V3;
l8:pile[v[22]]=944; pile[WZ1]=jvj+4; 
(*f[71])( );     /*ENLV0(944,jvj+4)*/
pile[v[22]]=jvj+7; pile[WZ1]=936; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(jvj+7,936,V2)*/
l11:pile[v[22]]=jvj+7; pile[WZ1]=493; pile[WZ2]=100; 
(*f[43])( );     /*CHGC2(jvj+7,493,100)*/
pile[WZ1]=683; pile[WZ2]=ND; 
(*f[43])( );     /*CHGC2(jvj+7,683,ND)*/
pile[WZ1]=948; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+7,948,67)*/
pile[WZ1]=860; pile[WZ2]=530; 
(*f[35])( );     /*CHGC1(jvj+7,860,530)*/
pile[WZ1]=1383; pile[WZ2]=1384; 
(*f[35])( );     /*CHGC1(jvj+7,1383,1384)*/
pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+7,1056,1060)*/
pile[WZ1]=1542; pile[WZ2]=NM; 
(*f[43])( );     /*CHGC2(jvj+7,1542,NM)*/
pile[WZ1]=901; pile[WZ2]=EN; 
(*f[34])( );     /*CHGC0(jvj+7,901,EN)*/
pile[WZ1]=1335; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(jvj+7,1335,V13)*/
(*f[554])( );     /*AJEXP1(jvj+7)*/
x[jvj+8]=t[x[jvj+8]];
l10:if((x[jvj+8]<=0)) goto l14;
x[jvj+7]=s[x[jvj+8]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+8];
if((x[KX]==12)) goto l15;
pile[v[22]]=jvj+7; pile[WZ1]=1241; pile[WZ2]=KX; 
(*f[35])( );     /*CHGC1(jvj+7,1241,KX)*/
l15:pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,jvj+7,jvj+10)*/
pile[v[22]]=983; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(983,jvj+10,jvj+11)*/
pile[v[22]]=878; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(878,jvj+11,jvj+12)*/
l16:if((x[jvj+12]<=0)) goto l11;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+13,V37)*/
V37=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+7,V36)*/
V36=pile[WZ2]; 
if((V37==V36)) goto l17;
x[jvj+12]=t[x[jvj+12]];
goto l16;
l5:V3=V11;
goto l6;
l7:V2=NS;
goto l8;
l12:V17=x[PB];
pile[v[22]]=0; pile[WZ1]=20; 
(*f[178])( );     /*SPLO0(0,20,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11565; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,11565,V14,V15)*/
V15=pile[WZ3]; 
pile[WZ1]=V17; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(20,V17,V15,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V16; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,V16,642,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V18,58,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=NM; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V19,NM,41,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V20; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V20,683,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V22,58,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=ND; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V23,ND,41,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V24,936,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V26,58,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NS; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,NS,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
pile[v[22]]=T; pile[WZ1]=V8; pile[WZ2]=jvj+8; 
(*f[553])( );if(v[102]) goto l13;     /*EXPPB3(T,V8,jvj+8)*/
if((x[KX]!=12)) goto l9;
pile[v[22]]=924; pile[WZ1]=1543; 
(*f[34])( );     /*CHGC0(924,1543,jvj+8)*/
l9:pile[v[22]]=1038; pile[WZ1]=1335; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1038,1335,V13)*/
V13=pile[WZ2]; 
goto l10;
l14:pile[v[22]]=1455; pile[WZ1]=158; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(1455,158,jvj+9)*/
vo[10]=x[jvj+9];vz[10]=0;
if((x[KX]==12)) goto l13;
pile[WZ1]=NM; 
(*f[1178])( );     /*FAIREXP2(1455,NM)*/
goto l13;
l17:x[jvj+15]=x[jvj+13] ;z[jvj+15]=z[jvj+13];
x[jvj+4]=x[jvj+15] ;z[jvj+4]=z[jvj+15];
V2=incon;
if((NS!=0)) goto l7;
pile[v[22]]=1543; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1543,jvj+4,jvj+5)*/
x[jvj+14]=x[jvj+5] ;z[jvj+14]=z[jvj+5];
goto l3;
}
