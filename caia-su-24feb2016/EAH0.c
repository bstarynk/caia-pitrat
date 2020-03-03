#include "dx.h"
void EAH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,T=0,V4=0,DF=0,W=0,V5=0,V12=0;
int L;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10448;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==122&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=incon;
V1=vv[16];
x[jvj+2]=vo[20];z[jvj+2]=vz[20];
T=V1;
vv[16]=2;
pile[v[22]]=jvj+2; pile[WZ1]=1733; pile[WZ2]=129; 
(*f[35])( );     /*CHGC1(jvj+2,1733,129)*/
pile[v[22]]=365; pile[WZ1]=10169; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(365,10169,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+4,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l2;
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
l3:pile[v[22]]=L; pile[WZ1]=jvj+5; 
(*f[358])( );if(v[102]) goto l8;     /*LREG0(L,jvj+5,DF)*/
DF=pile[WZ2]; 
if(x[jvj+6]!=incon) goto l4;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:pile[v[22]]=10169; pile[WZ1]=184; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(10169,184,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[357])( );     /*CL0(jvj+6)*/
l9:pile[v[22]]=135; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(135,jvj+6,jvj+11)*/
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=525; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(525,jvj+6,jvj+7)*/
x[jvj+8]=d[1];z[jvj+8]=0;
l5:if((x[jvj+7]>0)) goto l6;
x[jvj+12]=vo[20];z[jvj+12]=vz[20];
pile[v[22]]=jvj+10; pile[WZ1]=128; pile[WZ2]=jvj+17; 
(*f[300])( );     /*TRI10(jvj+10,128,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=10169; pile[WZ2]=109; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+17,10169,109,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=558; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+12,558,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+14; 
(*f[359])( );     /*EVLQ1(jvj+11,jvj+14)*/
if((x[jvj+14]!=12)) goto l10;
pile[v[22]]=0; pile[WZ1]=(-1430); 
(*f[37])( );     /*SRA0(0,(-1430),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l10:pile[v[22]]=10169; 
(*f[360])( );     /*NETBID0(10169)*/
vv[16]=T;
goto l11;
l6:W=s[x[jvj+7]];
pile[v[22]]=W; 
(*f[194])( );if(v[102]) goto l7;     /*MNV0(W,V5)*/
V5=pile[WZ1]; 
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0((-200),416,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+15,41,158,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=V5; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+16; pile[WZ5]=jvj+9; 
(*f[197])( );     /*QUADRI5(130,V5,140,W,jvj+16,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+8,jvj+9,jvj+10)*/
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
l8:if(x[jvj+6]!=incon) goto l9;
goto l11;
}
