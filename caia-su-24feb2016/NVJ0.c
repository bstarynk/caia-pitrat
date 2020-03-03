#include "dx.h"
void NVJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V11=0,V10=0,V2=0,V1=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11703;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==283&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:x[jvj+2]=vo[20];z[jvj+2]=vz[20];
pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+3)*/
if((x[jvj+3]<=0)) goto l3;
x[jvj+7]=s[x[jvj+3]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+3];
V5=x[jvj+7];
V11=x[jvj+7];
x[jvj+4]=x[jvj+7] ;z[jvj+4]=z[jvj+7];
v[61]=V5;
pile[WZ2]=V5; 
(*f[134])( );     /*OTA0(159,jvj+2,V5)*/
pile[v[22]]=20; pile[WZ1]=V11; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V11,0,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; 
(*f[40])( );     /*SLG0(V10)*/
V1=x[jvj+4];
V2=s[x[jvj+4]];
if((V2!=66)) goto l2;
pile[v[22]]=jvj+4; 
(*f[59])( );     /*LECT0(jvj+4)*/
l2:pile[v[22]]=V1; 
(*f[679])( );     /*NVF0(V1)*/
(*f[680])( );     /*NVG0(V1)*/
l3:x[jvj+5]=vo[20];z[jvj+5]=vz[20];
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+6)*/
if((x[jvj+6]!=0)) goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; return;
}
