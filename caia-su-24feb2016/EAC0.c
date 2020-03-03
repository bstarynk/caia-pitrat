#include "dx.h"
void EAC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0;
int TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10085;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==306&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(583,TL,jvj+4)*/
if((x[jvj+4]==11728)) goto l1;
pile[v[22]]=1913; pile[WZ1]=11728; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1913,11728,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l1;
l2:pile[v[22]]=TL; 
(*f[357])( );     /*CL0(TL)*/
x[jvj+8]=vo[20];z[jvj+8]=vz[20];
pile[v[22]]=jvj+8; pile[WZ1]=191; pile[WZ2]=675; 
(*f[35])( );     /*CHGC1(jvj+8,191,675)*/
pile[WZ1]=1654; pile[WZ2]=1684; 
(*f[35])( );     /*CHGC1(jvj+8,1654,1684)*/
V5=incon;
V5=0;
if((V5!=0)) goto l3;
x[jvj+6]=vo[20];z[jvj+6]=vz[20];
pile[v[22]]=jvj+7; 
(*f[683])( );     /*MENB0(jvj+7)*/
(*f[684])( );     /*CF0(jvj+7)*/
pile[v[22]]=209; pile[WZ1]=jvj+6; 
(*f[71])( );     /*ENLV0(209,jvj+6)*/
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+5]=vo[20];z[jvj+5]=vz[20];
pile[v[22]]=jvj+5; pile[WZ1]=191; pile[WZ2]=1694; 
(*f[35])( );     /*CHGC1(jvj+5,191,1694)*/
pile[WZ1]=1654; pile[WZ2]=1699; 
(*f[35])( );     /*CHGC1(jvj+5,1654,1699)*/
goto l2;
}
