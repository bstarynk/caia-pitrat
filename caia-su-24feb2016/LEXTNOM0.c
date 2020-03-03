#include "dx.h"
void LEXTNOM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V32=0,V33=0,V28=0,DY=0,V4=0,V3=0,V7=0,V8=0,DX=0,V15=0,V14=0,V17=0,DZ=0,V9=0,V22=0,V21=0,V24=0,DW=0,V10=0,V34=0,V35=0,V36=0,V25=0,V37=0,V38=0;
int EX,FV,DP;
int DV;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11817;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==268&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EX=pile[v[22]]; FV=pile[v[22]+1]; DP=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DX=DZ=DW=incon;
V1=bh[v[1]][DP];
if(V1==32) goto l1;
pile[v[22]]=20; pile[WZ1]=11817; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11817,0,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,1,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
l1:pile[v[22]]=1825; pile[WZ1]=FV; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1825,FV,jvj+2)*/
if((x[jvj+2]==66)) goto l2;
pile[v[22]]=118; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(118,FV,V4)*/
V4=pile[WZ2]; 
if((V4<=0)) goto l13;
pile[v[22]]=DP; 
(*f[107])( );     /*CRC0(DP,V3)*/
V3=pile[WZ1]; 
V7=DP+1;
pile[v[22]]=V7; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+4; 
(*f[666])( );if(v[102]) goto l13;     /*SMA3(V7,64,66,jvj+4)*/
if((x[jvj+4]!=x[jvj+2])) goto l13;
pile[v[22]]=V3; pile[WZ1]=jvj+5; 
(*f[335])( );if(v[102]) goto l13;     /*LANT0(V3,jvj+5,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(EX,102,jvj+5)*/
l3:pile[v[22]]=118; pile[WZ1]=FV; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(118,FV,V8)*/
V8=pile[WZ2]; 
if((V8!=1)) goto l4;
DX=DY;
l4:pile[v[22]]=118; pile[WZ1]=FV; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(118,FV,V15)*/
V15=pile[WZ2]; 
if((V15<=1)) goto l5;
pile[v[22]]=1826; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1826,FV,jvj+6)*/
pile[v[22]]=DY; 
(*f[107])( );     /*CRC0(DY,V14)*/
V14=pile[WZ1]; 
V17=DY+1;
pile[v[22]]=V17; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+7; 
(*f[666])( );if(v[102]) goto l5;     /*SMA3(V17,64,66,jvj+7)*/
if((x[jvj+7]!=x[jvj+6])) goto l5;
pile[v[22]]=V14; pile[WZ1]=jvj+8; 
(*f[335])( );if(v[102]) goto l5;     /*LANT0(V14,jvj+8,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=103; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(EX,103,jvj+8)*/
l5:if(DX==incon) goto l6;
if(DZ!=incon) goto l8;
l12:pile[v[22]]=155; pile[WZ1]=FV; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(155,FV,jvj+12)*/
if((x[jvj+12]!=68)) goto l13;
pile[v[22]]=FV; pile[WZ1]=DX; pile[WZ2]=EX; 
(*f[669])( );if(v[102]) goto l13;     /*LCANTNOM0(FV,DX,EX,DV)*/
DV=pile[WZ3]; 
l14:V25=bh[v[1]][DV];
if(V25==93||V25==41||V25==44||V25==32) goto l15;
pile[v[22]]=20; pile[WZ1]=11817; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11817,0,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,2,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=DV; return;
l2:pile[v[22]]=118; pile[WZ1]=FV; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(118,FV,V28)*/
V28=pile[WZ2]; 
if((V28<=0)) goto l13;
pile[v[22]]=DP; pile[WZ1]=jvj+3; 
(*f[335])( );if(v[102]) goto l13;     /*LANT0(DP,jvj+3,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(EX,102,jvj+3)*/
goto l3;
l6:if(DZ!=incon) goto l7;
l13:DV=DP;
pile[v[22]]=0; pile[WZ1]=(-5225); 
(*f[37])( );     /*SRA0(0,(-5225),V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=(-4411); 
(*f[37])( );     /*SRA0(V34,(-4411),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10329; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(20,10329,V35,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
goto l14;
l7:pile[v[22]]=118; pile[WZ1]=FV; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(118,FV,V9)*/
V9=pile[WZ2]; 
if((V9!=2)) goto l8;
DX=DZ;
l8:pile[v[22]]=118; pile[WZ1]=FV; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(118,FV,V22)*/
V22=pile[WZ2]; 
if((V22<=2)) goto l9;
pile[v[22]]=1697; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1697,FV,jvj+9)*/
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V21)*/
V21=pile[WZ1]; 
V24=DZ+1;
pile[v[22]]=V24; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+10; 
(*f[666])( );if(v[102]) goto l9;     /*SMA3(V24,64,66,jvj+10)*/
if((x[jvj+10]!=x[jvj+9])) goto l9;
pile[v[22]]=V21; pile[WZ1]=jvj+11; 
(*f[335])( );if(v[102]) goto l9;     /*LANT0(V21,jvj+11,DW)*/
DW=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=160; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(EX,160,jvj+11)*/
l9:if(DX==incon) goto l10;
goto l12;
l10:if(DW!=incon) goto l11;
goto l13;
l11:pile[v[22]]=118; pile[WZ1]=FV; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(118,FV,V10)*/
V10=pile[WZ2]; 
if((V10!=3)) goto l13;
DX=DW;
goto l12;
}
