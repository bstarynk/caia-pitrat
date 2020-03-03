#include "dx.h"
void STOFILTRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int MM=0,V4=0,V2=0,IN=0,NM=0;
int BL,HIST;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11638;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==825&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; HIST=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=incon;
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=135; pile[WZ4]=jvj+3; 
(*f[567])( );     /*QUADRI11(117,0,447,135,jvj+3)*/
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=1038; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1038,jvj+2,MM)*/
MM=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=HIST; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,HIST,jvj+5)*/
l3:if((x[jvj+5]<=0)) goto l7;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+6,jvj+7)*/
pile[v[22]]=244; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(244,jvj+7,V2)*/
V2=pile[WZ2]; 
IN=V2;
if((IN>MM)) goto l1;
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+3,117,1)*/
l1:x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=244; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(244,jvj+4,V4)*/
V4=pile[WZ2]; 
if((IN>V4)) goto l4;
pile[v[22]]=jvj+3; pile[WZ1]=447; pile[WZ2]=134; 
(*f[35])( );     /*CHGC1(jvj+3,447,134)*/
l4:x[jvj+5]=t[x[jvj+5]];
goto l3;
l2:x[RES]=135 ;z[RES]=135;
l7:pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+3,NM)*/
NM=pile[WZ2]; 
if((NM<=0)) goto l9;
pile[v[22]]=715; pile[WZ1]=HIST; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(715,HIST,jvj+10)*/
pile[v[22]]=242; pile[WZ1]=jvj+10; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(242,jvj+10,jvj+8)*/
x[jvj+9]=incon;
if((NM<=1)) goto l5;
pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(242,jvj+8,jvj+9)*/
l6:if((x[jvj+9]!=616)) goto l8;
pile[v[22]]=jvj+3; pile[WZ1]=447; pile[WZ2]=134; 
(*f[35])( );     /*CHGC1(jvj+3,447,134)*/
l8:pile[v[22]]=HIST; pile[WZ1]=715; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(HIST,715,jvj+9)*/
l9:if(x[RES]==incon) goto l10;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l5:x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
goto l6;
l10:pile[v[22]]=447; pile[WZ1]=jvj+3; pile[WZ2]=RES; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+3,RES)*/
goto l12;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
