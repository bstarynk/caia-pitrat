#include "dx.h"
void LEXT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V38=0,V39=0,V26=0,V22=0,V15=0,V16=0,V9=0,DT=0,V2=0,DY=0,DZ=0,DW=0,V14=0,V13=0,V31=0,V30=0,V36=0,V35=0,V42=0,V43=0,V44=0,V20=0,V40=0,V41=0;
int DP,EX,RV,AT,S;
int DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; EX=pile[v[22]+1]; RV=pile[v[22]+2]; AT=pile[v[22]+3]; S=pile[v[22]+4]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DX=DY=DT=DZ=DW=incon;
if((x[RV]!=120)) goto l3;
V26=bh[v[1]][DP];
if((V26==41)) goto l2;
if(V26!=40&&V26!=44) goto l3;
pile[v[22]]=DP; pile[WZ1]=jvj+1; 
(*f[335])( );if(v[102]) goto l3;     /*LANT0(DP,jvj+1,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=120; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,120,102,jvj+2,jvj+3)*/
pile[v[22]]=EX; pile[WZ1]=AT; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(EX,AT,jvj+3)*/
pile[v[22]]=S; pile[WZ1]=667; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(S,667,1)*/
pile[v[22]]=V22; pile[WZ1]=jvj+3; pile[WZ2]=RV; pile[WZ3]=120; pile[WZ4]=S; 
(*f[662])( );     /*LEXT1(V22,jvj+3,RV,120,S,DX)*/
DX=pile[WZ5]; 
l3:x[jvj+4]=250 ;z[jvj+4]=250;
if(DX==incon) goto l4;
l5:if((x[RV]==68)) goto l6;
if((x[RV]!=120)) goto l1;
l7:pile[v[22]]=118; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(118,jvj+4,V2)*/
V2=pile[WZ2]; 
if((V2<=0)) goto l8;
pile[v[22]]=DP; pile[WZ1]=jvj+5; 
(*f[335])( );if(v[102]) goto l8;     /*LANT0(DP,jvj+5,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(EX,102,jvj+5)*/
l8:if(DX==incon) goto l9;
l11:if(DT==incon) goto l12;
if(DY!=incon) goto l14;
l15:if(DX==incon) goto l16;
l18:if(DT==incon) goto l19;
if(DZ!=incon) goto l21;
l22:if(DX==incon) goto l23;
l25:if(DT==incon) goto l26;
l28:if(DX==incon) goto l29;
l34:V20=bh[v[1]][DX];
if(V20==93||V20==41||V20==44) goto l35;
pile[v[22]]=20; pile[WZ1]=10329; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10329,0,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,2,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; 
(*f[40])( );     /*SLG0(V41)*/
l35:v[0]=jvj; v[22]-=6; pile[v[22]+5]=DX; return;
l2:DX=DP;
goto l3;
l4:if((x[RV]!=67)) goto l5;
pile[v[22]]=118; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(118,jvj+4,V15)*/
V15=pile[WZ2]; 
if((V15!=0)) goto l1;
V16=DP+1;
DX=V16;
l1:V1=bh[v[1]][DP];
if(V1==91||V1==40) goto l7;
pile[v[22]]=20; pile[WZ1]=10329; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10329,0,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,1,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
goto l7;
l6:pile[v[22]]=118; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(118,jvj+4,V9)*/
V9=pile[WZ2]; 
if((V9!=0)) goto l1;
DT=DP;
goto l1;
l9:if(DY!=incon) goto l10;
goto l11;
l10:if((x[RV]!=67)) goto l11;
if((V2!=1)) goto l11;
DX=DY;
goto l11;
l12:if(DY!=incon) goto l13;
goto l15;
l13:if((x[RV]!=68)) goto l14;
if((V2!=1)) goto l14;
DT=DY;
goto l15;
l14:if((V2<=1)) goto l15;
pile[v[22]]=DY; pile[WZ1]=jvj+6; 
(*f[335])( );if(v[102]) goto l15;     /*LANT0(DY,jvj+6,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=103; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(EX,103,jvj+6)*/
goto l15;
l16:if(DZ!=incon) goto l17;
goto l18;
l17:if((x[RV]!=67)) goto l18;
if((V2!=2)) goto l18;
DX=DZ;
goto l18;
l19:if(DZ!=incon) goto l20;
goto l22;
l20:if((x[RV]!=68)) goto l21;
if((V2!=2)) goto l21;
DT=DZ;
goto l22;
l21:if((V2<=2)) goto l22;
pile[v[22]]=DZ; pile[WZ1]=jvj+7; 
(*f[335])( );if(v[102]) goto l22;     /*LANT0(DZ,jvj+7,DW)*/
DW=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=160; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(EX,160,jvj+7)*/
goto l22;
l23:if(DW!=incon) goto l24;
goto l25;
l24:if((x[RV]!=67)) goto l25;
if((V2!=3)) goto l25;
DX=DW;
goto l25;
l26:if(DW!=incon) goto l27;
goto l28;
l27:if((x[RV]!=68)) goto l28;
if((V2!=3)) goto l28;
DT=DW;
goto l28;
l29:if(DT!=incon) goto l30;
l33:DX=DP;
pile[v[22]]=0; pile[WZ1]=(-5225); 
(*f[37])( );     /*SRA0(0,(-5225),V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=(-4411); 
(*f[37])( );     /*SRA0(V42,(-4411),V43)*/
V43=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10329; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,10329,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
goto l34;
l30:V14=DT+1;
V13=bh[v[1]][V14];
if((V13==93)) goto l31;
pile[v[22]]=DT; pile[WZ1]=EX; pile[WZ2]=jvj+4; 
(*f[661])( );if(v[102]) goto l31;     /*LEXV0(DT,EX,jvj+4,DX)*/
DX=pile[WZ3]; 
goto l34;
l31:V31=DT+1;
V30=bh[v[1]][V31];
if((V30==93)) goto l32;
if((V30!=32)) goto l33;
V36=V31+1;
V35=bh[v[1]][V36];
if((V35!=32)) goto l33;
DX=DT;
goto l34;
l32:DX=V31;
goto l34;
}
