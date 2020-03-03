#include "dx.h"
void CALK2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V14=0,V16=0,V18=0,V13=0,V15=0,V17=0,V4=0,V21=0;
int EF,N,DEB,NA;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11787;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1512&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
EF=pile[v[22]]; N=pile[v[22]+1]; DEB=pile[v[22]+2]; NA=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V21=x[DEB];
l1:pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1688,N,jvj+3)*/
x[jvj+11]=x[jvj+3] ;z[jvj+11]=z[jvj+3];
l2:if((x[jvj+11]>0)) goto l3;
V4=g[637];
if((V4<=0)) goto l12;
V5=vg[637];
if((V5!=0)) goto l6;
if((V4<3)) goto l7;
l6:pile[v[22]]=637; pile[WZ1]=11787; pile[WZ2]=2; pile[WZ3]=(-625); pile[WZ4]=N; pile[WZ5]=(-3085); pile[v[22]+6]=NA; pile[v[22]+7]=(-735); pile[v[22]+8]=jvj+3; pile[v[22]+9]=(-4885); pile[v[22]+10]=EF; pile[v[22]+11]=jvj+6; 
(*f[1513])( );     /*INTERP19(637,11787,2,(-625),N,(-3085),NA,(-735),jvj+3,(-4885),EF,jvj+6)*/
if((x[jvj+6]==135)) goto l11;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l3:x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
for(a=x[EF];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=NA; pile[WZ2]=jvj+5; 
(*f[1511])( );if(v[102]) goto l4;     /*CALKA0(jvj+4,NA,jvj+5)*/
if((x[jvj+5]==68)) goto l5;
l4:x[jvj+11]=t[x[jvj+11]];
goto l2;
l5:x[jvj+10]=x[jvj+4] ;z[jvj+10]=z[jvj+4];
pile[v[22]]=EF; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(EF,jvj+10)*/
V21=67;
goto l1;
l7:x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+12]=x[jvj+3] ;z[jvj+12]=z[jvj+3];
l8:if((x[jvj+12]>0)) goto l9;
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(273,NA,jvj+9)*/
V14=x[N];
V16=x[jvj+9];
V18=x[jvj+7];
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V14,0,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V16; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(23,V16,V13,V15)*/
V15=pile[WZ3]; 
pile[WZ1]=V18; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(23,V18,V15,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
if((V4!=2)) goto l12;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l12;
l9:x[jvj+8]=s[x[jvj+12]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+12];
for(a=x[EF];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l10;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
l10:x[jvj+12]=t[x[jvj+12]];
goto l8;
l11:if((V4<4)) goto l7;
goto l12;
}
