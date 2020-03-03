#include "dx.h"
void LEXT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V39=0,V40=0,V27=0,V16=0,V17=0,V26=0,V23=0,V10=0,DT=0,V3=0,DY=0,DZ=0,DW=0,V32=0,V31=0,V37=0,V36=0,V43=0,V44=0,V45=0,V21=0,V41=0,V42=0;
int EX,FV,DP;
int DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

EX=pile[v[22]]; FV=pile[v[22]+1]; DP=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DX=DT=DY=DZ=DW=incon;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(250,158,jvj+6)*/
pile[v[22]]=155; pile[WZ1]=FV; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(155,FV,jvj+1)*/
x[jvj+7]=x[jvj+1] ;z[jvj+7]=z[jvj+1];
if((x[jvj+7]==120)) goto l3;
if((x[jvj+7]==67)) goto l4;
if((x[jvj+7]!=68)) goto l2;
if((x[FV]==54)) goto l2;
pile[v[22]]=118; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(118,FV,V10)*/
V10=pile[WZ2]; 
if((V10!=0)) goto l2;
DT=DP;
l2:V1=bh[v[1]][DP];
if(V1==91||V1==40) goto l7;
pile[v[22]]=20; pile[WZ1]=10329; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10329,0,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(41,1,V39,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
l7:if(DT==incon) goto l8;
l9:pile[v[22]]=118; pile[WZ1]=FV; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(118,FV,V3)*/
V3=pile[WZ2]; 
if((V3<=0)) goto l10;
pile[v[22]]=DP; pile[WZ1]=jvj+9; 
(*f[335])( );if(v[102]) goto l10;     /*LANT0(DP,jvj+9,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=102; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(EX,102,jvj+9)*/
l10:if(DX==incon) goto l11;
l13:if(DT==incon) goto l14;
if(DY!=incon) goto l16;
l17:if(DX==incon) goto l18;
l20:if(DT==incon) goto l21;
if(DZ!=incon) goto l23;
l24:if(DX==incon) goto l25;
l27:if(DT==incon) goto l28;
l30:if(DX==incon) goto l31;
l36:V21=bh[v[1]][DX];
if(V21==93||V21==41||V21==44) goto l37;
pile[v[22]]=20; pile[WZ1]=10329; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10329,0,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(41,2,V41,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
l37:v[0]=jvj; v[22]-=4; pile[v[22]+3]=DX; return;
l1:x[jvj+7]=67 ;z[jvj+7]=67;
l4:pile[v[22]]=118; pile[WZ1]=FV; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(118,FV,V16)*/
V16=pile[WZ2]; 
if((V16!=0)) goto l2;
V17=DP+1;
DX=V17;
goto l2;
l3:V27=bh[v[1]][DP];
if((V27!=41)) goto l5;
DX=DP;
l5:x[jvj+4]=102 ;z[jvj+4]=102;
if(DX==incon) goto l6;
l8:if((x[FV]!=54)) goto l9;
pile[v[22]]=DP; pile[WZ1]=jvj+8; 
(*f[79])( );if(v[102]) goto l9;     /*LEXP0(DP,jvj+8,DT)*/
DT=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=436; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(EX,436,jvj+8)*/
goto l9;
l6:V26=bh[v[1]][DP];
if(V26!=40&&V26!=44) goto l8;
pile[v[22]]=DP; pile[WZ1]=jvj+2; 
(*f[335])( );if(v[102]) goto l8;     /*LANT0(DP,jvj+2,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=120; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,120,102,jvj+3,jvj+5)*/
pile[v[22]]=EX; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(EX,jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=667; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+6,667,1)*/
pile[v[22]]=V23; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; pile[WZ3]=120; pile[WZ4]=jvj+6; 
(*f[662])( );     /*LEXT1(V23,jvj+5,jvj+7,120,jvj+6,DX)*/
DX=pile[WZ5]; 
goto l8;
l11:if(DY!=incon) goto l12;
goto l13;
l12:if((x[jvj+7]!=67)) goto l13;
if((V3!=1)) goto l13;
DX=DY;
goto l13;
l14:if(DY!=incon) goto l15;
goto l17;
l15:if((x[jvj+7]!=68)) goto l16;
if((V3!=1)) goto l16;
DT=DY;
goto l17;
l16:if((V3<=1)) goto l17;
pile[v[22]]=DY; pile[WZ1]=jvj+10; 
(*f[335])( );if(v[102]) goto l17;     /*LANT0(DY,jvj+10,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=103; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(EX,103,jvj+10)*/
goto l17;
l18:if(DZ!=incon) goto l19;
goto l20;
l19:if((x[jvj+7]!=67)) goto l20;
if((V3!=2)) goto l20;
DX=DZ;
goto l20;
l21:if(DZ!=incon) goto l22;
goto l24;
l22:if((x[jvj+7]!=68)) goto l23;
if((V3!=2)) goto l23;
DT=DZ;
goto l24;
l23:if((V3<=2)) goto l24;
pile[v[22]]=DZ; pile[WZ1]=jvj+11; 
(*f[335])( );if(v[102]) goto l24;     /*LANT0(DZ,jvj+11,DW)*/
DW=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=160; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(EX,160,jvj+11)*/
goto l24;
l25:if(DW!=incon) goto l26;
goto l27;
l26:if((x[jvj+7]!=67)) goto l27;
if((V3!=3)) goto l27;
DX=DW;
goto l27;
l28:if(DW!=incon) goto l29;
goto l30;
l29:if((x[jvj+7]!=68)) goto l30;
if((V3!=3)) goto l30;
DT=DW;
goto l30;
l31:if(DT!=incon) goto l32;
l35:DX=DP;
pile[v[22]]=0; pile[WZ1]=(-5225); 
(*f[37])( );     /*SRA0(0,(-5225),V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=(-4411); 
(*f[37])( );     /*SRA0(V43,(-4411),V44)*/
V44=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10329; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,10329,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
goto l36;
l32:V32=DT+1;
V31=bh[v[1]][V32];
if((V31==93)) goto l33;
if((V31!=32)) goto l34;
V37=V32+1;
V36=bh[v[1]][V37];
if((V36!=32)) goto l34;
DX=DT;
goto l36;
l33:DX=V32;
goto l36;
l34:pile[v[22]]=DT; pile[WZ1]=EX; pile[WZ2]=FV; 
(*f[661])( );if(v[102]) goto l35;     /*LEXV0(DT,EX,FV,DX)*/
DX=pile[WZ3]; 
goto l36;
}
