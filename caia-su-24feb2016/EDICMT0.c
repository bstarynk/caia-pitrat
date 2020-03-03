#include "dx.h"
void EDICMT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,K=0,V3=0,J=0,NR=0,V1=0,JJ=0;
int UR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11404;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==168&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR==43)) goto l1;
if((UR==45)) goto l2;
if((UR==67)) goto l3;
if((UR!=32)) goto l4;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,NR)*/
NR=pile[WZ1]; 
V1=NR;
pile[v[22]]=V1; pile[WZ1]=0; 
(*f[227])( );     /*SPCMT0(V1,0,JJ)*/
JJ=pile[WZ2]; 
pile[v[22]]=JJ; 
(*f[40])( );     /*SLG0(JJ)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+2]=vo[20];z[jvj+2]=vz[20];
pile[v[22]]=jvj+2; pile[WZ1]=1394; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,1394,68)*/
goto l4;
l2:x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=jvj+3; pile[WZ1]=1394; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+3,1394,67)*/
goto l4;
l3:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,V2,K)*/
V2=pile[WZ1]; K=pile[WZ2]; 
V3=K+1;
x[jvj+4]=vo[20];z[jvj+4]=vz[20];
pile[v[22]]=V3; pile[WZ1]=V2; 
(*f[549])( );if(v[102]) goto l4;     /*LEXCMT1(V3,V2,J)*/
J=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=1316; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+4,1316,68)*/
goto l4;
}
