#include "dx.h"
void Z63Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=15564;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1872&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(543,NNNY,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==48)) goto l1;
if((x[jvj+4]!=50)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+9)*/
l4:if((x[jvj+9]<=0)) goto l6;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=134)) goto l5;
NNNT=69;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+12)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+12; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+2,jvj+12,NNNX)*/
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
l2:if((x[jvj+5]<=0)) goto l6;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=134)) goto l3;
NNNT=12;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+8)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+2,jvj+8,NNNX)*/
goto l11;
l3:x[jvj+5]=t[x[jvj+5]];
goto l2;
l5:x[jvj+9]=t[x[jvj+9]];
goto l4;
l6:if(x[jvj+4]!=55&&x[jvj+4]!=1029&&x[jvj+4]!=1215) goto l10;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+2,jvj+13)*/
if((x[jvj+13]!=22)) goto l10;
pile[v[22]]=107; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+14)*/
l7:if((x[jvj+14]<=0)) goto l10;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
if((x[NNNY]!=x[jvj+15])) goto l8;
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=134)) goto l8;
x[NNNX]=x[jvj+2] ;z[NNNX]=z[jvj+2];
NNNT=29;
V32=x[NNNY];
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=V32; 
(*f[134])( );     /*OTA0(107,jvj+2,V32)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+2)*/
goto l11;
l8:x[jvj+14]=t[x[jvj+14]];
goto l7;
l10:x[NNNX]=NNNT=incon;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
