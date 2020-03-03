#include "dx.h"
void ANAVEILLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V17=0,V2=0,V1=0,V18=0,V3=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11502;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==906&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=g[572];
if((V3<=0)) goto l8;
V4=vg[572];
if((V4!=0)) goto l1;
if((V3<3)) goto l4;
l1:pile[v[22]]=572; pile[WZ1]=11502; pile[WZ2]=0; pile[WZ3]=jvj+2; 
(*f[291])( );     /*INTERP4(572,11502,0,jvj+2)*/
if((x[jvj+2]==135)) goto l3;
l8:x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=jvj+8; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+8,893,12)*/
x[jvj+9]=vo[12];z[jvj+9]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(109,jvj+9,jvj+10)*/
x[jvj+6]=vo[46];z[jvj+6]=vz[46];
pile[v[22]]=0; pile[WZ1]=jvj+4; 
(*f[556])( );if(v[102]) goto l9;     /*STAT0(0,jvj+4)*/
pile[v[22]]=578; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(578,jvj+4,jvj+5)*/
l6:if((x[jvj+5]>0)) goto l7;
pile[v[22]]=jvj+6; pile[WZ1]=457; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+6,457,jvj+10)*/
l9:x[jvj+1]=incon; v[0]=jvj; return;
l2:V1=V2;
l5:pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
if((V3!=2)) goto l8;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l8;
l3:if((V3<4)) goto l4;
goto l8;
l4:V18=v[93];
pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V18,0,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=1458; pile[WZ1]=1447; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1458,1447,jvj+3)*/
if((x[jvj+3]==250)) goto l2;
V17=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(20,V17,V2,V1)*/
V1=pile[WZ3]; 
goto l5;
l7:x[jvj+7]=s[x[jvj+5]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[1213])( );     /*FUSEPBSTAT0(jvj+6,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l6;
}
