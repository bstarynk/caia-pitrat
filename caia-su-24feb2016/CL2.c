#include "dx.h"
void CL2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V18=0,V=0,V9=0;
int NV,Z;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=10240;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1072&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
NV=pile[v[22]]; Z=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=583; pile[WZ1]=Z; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(583,Z,jvj+3)*/
l1:V2=vv[16];
pile[v[22]]=V2; 
(*f[62])( );     /*INH0(V2)*/
if(x[jvj+3]!=incon) goto l2;
l3:x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=222; pile[WZ1]=Z; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(222,Z,jvj+5)*/
pile[v[22]]=283; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(283,Z,jvj+6)*/
l4:if((x[jvj+6]>0)) goto l5;
if((x[jvj+9]==0)) goto l8;
pile[v[22]]=Z; pile[WZ1]=771; pile[WZ2]=jvj+9; 
(*f[34])( );     /*CHGC0(Z,771,jvj+9)*/
l9:x[jvj+10]=vo[20];z[jvj+10]=vz[20];
pile[v[22]]=209; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(209,jvj+10,jvj+11)*/
l10:if((x[jvj+11]>0)) goto l11;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=297; pile[WZ1]=Z; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(297,Z,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ2]=jvj+3; pile[WZ3]=NV; 
(*f[723])( );     /*CB0(jvj+4,Z,jvj+3,NV)*/
goto l3;
l5:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=158; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(158,jvj+7,jvj+8)*/
if((x[jvj+8]!=23)) goto l6;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+7,V18)*/
V18=pile[WZ2]; 
V=V18;
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l7;
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
l7:pile[v[22]]=jvj+9; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+9,V)*/
goto l6;
l8:pile[v[22]]=771; pile[WZ1]=Z; 
(*f[71])( );     /*ENLV0(771,Z)*/
goto l9;
l11:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=252; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(252,jvj+12,jvj+13)*/
x[jvj+20]=x[jvj+13] ;z[jvj+20]=z[jvj+13];
l12:if((x[jvj+20]>0)) goto l13;
x[jvj+11]=t[x[jvj+11]];
goto l10;
l13:x[jvj+14]=s[x[jvj+20]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+20];
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(117,jvj+14,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(109,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=V9; pile[WZ2]=jvj+16; 
(*f[133])( );if(v[102]) goto l14;     /*TLDEBL1(jvj+15,V9,jvj+16)*/
pile[v[22]]=302; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(302,jvj+16,jvj+17)*/
if((x[jvj+17]!=0)) goto l14;
pile[v[22]]=297; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(297,jvj+16,jvj+18)*/
pile[v[22]]=583; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(583,jvj+16,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ3]=NV; 
(*f[723])( );     /*CB0(jvj+18,jvj+16,jvj+19,NV)*/
l14:x[jvj+20]=t[x[jvj+20]];
goto l12;
}
