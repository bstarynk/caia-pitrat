#include "dx.h"
void TABLERASE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0,V6=0,V12=0,V11=0,V14=0,V13=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10004;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==89&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=159; pile[WZ1]=537; 
(*f[71])( );     /*ENLV0(159,537)*/
pile[WZ1]=829; 
(*f[71])( );     /*ENLV0(159,829)*/
pile[v[22]]=240; pile[WZ1]=322; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(240,322,0)*/
pile[WZ1]=0; pile[WZ2]=240; pile[WZ3]=159; 
(*f[285])( );     /*ENLY0(240,0,240,159,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=258; 
(*f[285])( );     /*ENLY0(240,V2,V1,258,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[v[22]]=311; pile[WZ1]=324; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(311,324,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(457,324,jvj+4)*/
l4:if((x[jvj+4]>0)) goto l5;
(*f[96])( );     /*EASB0()*/
pile[v[22]]=670; pile[WZ1]=240; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(670,240,jvj+6)*/
V12=sepbloc+1;
l6:if((V12<=sepnouv)) goto l8;
l9:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
V6=x[jvj+3];
if((V6>sepbloc)) goto l3;
pile[v[22]]=1913; pile[WZ1]=jvj+3; 
(*f[71])( );     /*ENLV0(1913,jvj+3)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=276; pile[WZ1]=jvj+5; 
(*f[71])( );     /*ENLV0(276,jvj+5)*/
x[jvj+4]=t[x[jvj+4]];
goto l4;
l8:V11=r[V12];
if((V11!=1)) goto l7;
x[jvj+7]=V12 ;z[jvj+7]=(V12<=sepcte) ? V12 : 0;
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l7;
pile[v[22]]=184; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(184,jvj+7,jvj+8)*/
if((x[jvj+8]!=0)) goto l7;
V14=t[V12];
V13=t[V14];
t[V13]=0;
pile[v[22]]=240; pile[WZ1]=670; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(240,670,jvj+7)*/
l7:V12++;
goto l6;
}
