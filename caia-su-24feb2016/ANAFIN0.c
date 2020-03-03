#include "dx.h"
void ANAFIN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V17=0,V24=0,V22=0,V9=0;
int M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11230;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==601&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1092; pile[WZ1]=1099; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1092,1099,jvj+7)*/
x[jvj+8]=vo[12];z[jvj+8]=vz[12];
pile[v[22]]=978; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(978,jvj+8,jvj+9)*/
if((x[jvj+9]!=68)) goto l4;
pile[v[22]]=860; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(860,jvj+8,jvj+10)*/
if((x[jvj+10]!=530)) goto l4;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=1092; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1092,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[jvj+7])) goto l4;
pile[v[22]]=218; pile[WZ1]=M; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,M,jvj+13)*/
pile[v[22]]=M; pile[WZ1]=jvj+13; 
(*f[945])( );     /*POSTMORTEM0(M,jvj+13)*/
l4:x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+3,V9)*/
V9=pile[WZ2]; 
if((V9!=2)) goto l5;
pile[v[22]]=860; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(860,jvj+3,jvj+14)*/
if((x[jvj+14]!=530)) goto l5;
pile[v[22]]=109; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+3,jvj+4)*/
pile[v[22]]=878; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(878,jvj+4,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l5;
x[jvj+2]=s[x[jvj+5]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+5];
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+2,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+3,V17)*/
V17=pile[WZ2]; 
if((V16==V17)) goto l2;
x[jvj+5]=t[x[jvj+5]];
goto l1;
l2:pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1268,936,V24)*/
V24=pile[WZ2]; 
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=936; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,jvj+6,V22)*/
V22=pile[WZ2]; 
if((V22<V24)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=1277; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,1277,68)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:pile[v[22]]=1277; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(1277,jvj+2)*/
goto l5;
}
