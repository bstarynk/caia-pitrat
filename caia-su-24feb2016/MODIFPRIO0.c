#include "dx.h"
void MODIFPRIO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V=0,V2=0,V4=0,V16=0,V10=0,V14=0,V11=0,V9=0,V13=0;
int Q,X,ND,BL;
int P;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11568;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1094&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; X=pile[v[22]+1]; ND=pile[v[22]+2]; BL=pile[v[22]+3]; P=pile[v[22]+4]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V=incon;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,X,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+2,VV)*/
VV=pile[WZ2]; 
V=VV;
l1:pile[v[22]]=1538; pile[WZ1]=BL; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1538,BL,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l13;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+4,V2)*/
V2=pile[WZ2]; 
if((V2!=ND)) goto l3;
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
if(V!=incon) goto l4;
l13:x[P]=x[Q] ;z[P]=z[Q];
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l4:pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+6)*/
l5:if((x[jvj+6]<=0)) goto l13;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=110; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(110,jvj+7,V4)*/
V4=pile[WZ2]; 
if((V4!=V)) goto l6;
x[jvj+10]=x[jvj+7] ;z[jvj+10]=z[jvj+7];
pile[v[22]]=642; pile[WZ1]=206; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,206,V10)*/
V10=pile[WZ2]; 
pile[WZ1]=Q; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,Q,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=337; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(337,jvj+10,jvj+11)*/
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+11,V11)*/
V11=pile[WZ2]; 
V9=V10-V11;
V13=V14-V9;
x[jvj+12]=incon;
if((V13<=1)) goto l11;
if((V13<9)) goto l7;
x[jvj+12]=301 ;z[jvj+12]=301;
l7:pile[v[22]]=159; pile[WZ1]=337; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,337,jvj+8)*/
l8:if((x[jvj+8]>0)) goto l9;
if(x[jvj+12]==incon) goto l13;
l12:if((x[jvj+12]==(-99999998))) goto l13;
x[P]=x[jvj+12] ;z[P]=z[jvj+12];
goto l14;
l6:x[jvj+6]=t[x[jvj+6]];
goto l5;
l9:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+9,V16)*/
V16=pile[WZ2]; 
if((V16!=V13)) goto l10;
x[jvj+12]=x[jvj+9] ;z[jvj+12]=z[jvj+9];
goto l12;
l10:x[jvj+8]=t[x[jvj+8]];
goto l8;
l11:x[jvj+12]=616 ;z[jvj+12]=616;
goto l7;
}
