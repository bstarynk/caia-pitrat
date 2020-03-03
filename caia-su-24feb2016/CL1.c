#include "dx.h"
void CL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,NV=0,V18=0,V=0,V9=0;
int BL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=10240;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==710&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=vv[16];
pile[v[22]]=V1; 
(*f[62])( );     /*INH0(V1)*/
NV=0;
pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(365,BL,jvj+3)*/
if((x[jvj+3]<=0)) goto l7;
x[jvj+21]=s[x[jvj+3]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+3];
x[jvj+4]=x[jvj+21] ;z[jvj+4]=z[jvj+21];
pile[v[22]]=297; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(297,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ2]=BL; pile[WZ3]=NV; 
(*f[723])( );     /*CB0(jvj+5,jvj+4,BL,NV)*/
l1:x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=222; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(222,jvj+4,jvj+6)*/
pile[v[22]]=283; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(283,jvj+4,jvj+7)*/
l2:if((x[jvj+7]>0)) goto l3;
if((x[jvj+10]==0)) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=771; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(jvj+4,771,jvj+10)*/
l7:x[jvj+11]=vo[20];z[jvj+11]=vz[20];
pile[v[22]]=209; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(209,jvj+11,jvj+12)*/
l8:if((x[jvj+12]>0)) goto l9;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+8,jvj+9)*/
if((x[jvj+9]!=23)) goto l4;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+8,V18)*/
V18=pile[WZ2]; 
V=V18;
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V) goto l5;
l4:x[jvj+7]=t[x[jvj+7]];
goto l2;
l5:pile[v[22]]=jvj+10; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+10,V)*/
goto l4;
l6:pile[v[22]]=771; pile[WZ1]=jvj+4; 
(*f[71])( );     /*ENLV0(771,jvj+4)*/
goto l7;
l9:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=252; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(252,jvj+13,jvj+14)*/
x[jvj+22]=x[jvj+14] ;z[jvj+22]=z[jvj+14];
l10:if((x[jvj+22]>0)) goto l11;
x[jvj+12]=t[x[jvj+12]];
goto l8;
l11:x[jvj+15]=s[x[jvj+22]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+22];
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+15,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=V9; pile[WZ2]=jvj+17; 
(*f[133])( );if(v[102]) goto l12;     /*TLDEBL1(jvj+16,V9,jvj+17)*/
pile[v[22]]=302; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(302,jvj+17,jvj+18)*/
if((x[jvj+18]!=0)) goto l12;
pile[v[22]]=297; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(297,jvj+17,jvj+19)*/
pile[v[22]]=583; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(583,jvj+17,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ3]=NV; 
(*f[723])( );     /*CB0(jvj+19,jvj+17,jvj+20,NV)*/
l12:x[jvj+22]=t[x[jvj+22]];
goto l10;
}
