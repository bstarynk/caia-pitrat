#include "dx.h"
void OTEINUTILE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V5=0,V4=0,V3=0,V7=0,V1=0,V9=0,V11=0,V17=0,V15=0,V16=0,V19=0,XX=0,V23=0;
int LL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10732;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==87&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
LL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
I=0;
l1:if((I<=sepcte)) goto l2;
pile[v[22]]=324; 
(*f[282])( );     /*NVD0(324)*/
V9=sepnouv+1;
l5:if((V9<=sepfacts)) goto l7;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1484,854,V17)*/
V17=pile[WZ2]; 
V15=sepfacts+1;
V16=sepfacts+V17;
l8:if((V15>V16)) goto l3;
V19=r[V15];
if((V19!=1)) goto l9;
x[jvj+4]=V15 ;z[jvj+4]=(V15<=sepcte) ? V15 : 0;
pile[v[22]]=jvj+4; 
(*f[282])( );     /*NVD0(jvj+4)*/
l9:V15++;
goto l8;
l2:vu[I]=0;
I++;
goto l1;
l3:V1=incon;
V5=LL+1;
V4=V5+1;
V3=bh[v[1]][V4];
if((V3==32)) goto l4;
pile[v[22]]=V5; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l4;     /*SMA0(V5,64,67,jvj+2)*/
V7=x[jvj+2];
V1=V7;
l10:v[60]=V1;
x[jvj+5]=d[225];z[jvj+5]=0;
l11:if((x[jvj+5]>0)) goto l12;
(*f[283])( );     /*NVJ0()*/
(*f[284])( );     /*NVK0()*/
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:V1=0;
goto l10;
l7:V11=r[V9];
if((V11!=1)) goto l6;
x[jvj+3]=V9 ;z[jvj+3]=(V9<=sepcte) ? V9 : 0;
pile[v[22]]=jvj+3; 
(*f[282])( );     /*NVD0(jvj+3)*/
l6:V9++;
goto l5;
l12:XX=s[x[jvj+5]];
if((V23=w[XX][0])==incon) goto l13;
pile[v[22]]=V23; pile[WZ1]=jvj+6; 
(*f[117])( );if(v[102]) goto l13;     /*SRF1(V23,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=655; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+6,655,68)*/
l13:x[jvj+5]=t[x[jvj+5]];
goto l11;
}
