#include "dx.h"
void QYBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,NT=0,V7=0,V9=0,V6=0,V11=0;
int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11185;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2128&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[N] ;z[jvj+2]=z[N];
l1:pile[v[22]]=158; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+2,jvj+3)*/
if((x[jvj+3]!=528)) goto l2;
pile[v[22]]=218; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+2,jvj+4)*/
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+4,jvj+5)*/
for(i=x[jvj+5],V2=0;i>0;i=t[i],V2++)  ;
if((V2<=0)) goto l2;
NT=V2;
l3:pile[v[22]]=NT; 
(*f[850])( );if(v[102]) goto l4;     /*LOG0(NT,V11)*/
V11=pile[WZ1]; 
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=jvj+8; pile[WZ1]=955; pile[WZ2]=V11; 
(*f[186])( );     /*BTC0(jvj+8,955,V11)*/
l4:pile[v[22]]=jvj+2; pile[WZ1]=949; pile[WZ2]=NT; 
(*f[43])( );     /*CHGC2(jvj+2,949,NT)*/
l5:pile[v[22]]=728; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(728,jvj+2,jvj+9)*/
x[jvj+2]=x[jvj+9] ;z[jvj+2]=z[jvj+9];
goto l1;
l2:pile[v[22]]=158; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,jvj+2,jvj+6)*/
if((x[jvj+6]!=528)) goto l5;
pile[v[22]]=218; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+2,jvj+7)*/
pile[v[22]]=164; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(164,jvj+7,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(280,jvj+7,V9)*/
V9=pile[WZ2]; 
V6=V7-V9;
NT=V6;
goto l3;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
