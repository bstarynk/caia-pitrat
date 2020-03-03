#include "dx.h"
void EXAPBJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,L=0,V6=0,H=0,V12=0,V11=0;
int E,EC,UR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11201;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==515&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; UR=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
K=incon;
if((UR==70)) goto l1;
if((UR!=67)) goto l2;
K=954;
l2:pile[v[22]]=3; 
(*f[135])( );     /*LND3(3,L)*/
L=pile[WZ1]; 
if(K!=incon) goto l4;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:K=530;
goto l2;
l4:x[jvj+13]=x[E] ;z[jvj+13]=z[E];
l3:if((x[jvj+13]<=0)) goto l9;
x[jvj+8]=s[x[jvj+13]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+13];
pile[v[22]]=109; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+8,jvj+9)*/
pile[v[22]]=983; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(983,jvj+9,jvj+10)*/
pile[v[22]]=878; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(878,jvj+10,jvj+11)*/
l10:if((x[jvj+11]<=0)) goto l5;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+12,V12)*/
V12=pile[WZ2]; 
pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+8,V11)*/
V11=pile[WZ2]; 
if((V12==V11)) goto l11;
x[jvj+11]=t[x[jvj+11]];
goto l10;
l5:x[jvj+13]=t[x[jvj+13]];
goto l3;
l8:pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[856])( );     /*SORESSAI1(jvj+4,jvj+8)*/
l7:x[jvj+15]=t[x[jvj+15]];
l6:if((x[jvj+15]<=0)) goto l5;
x[jvj+4]=s[x[jvj+15]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+15];
pile[v[22]]=1078; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1078,jvj+4,jvj+5)*/
pile[v[22]]=860; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+5,jvj+6)*/
if((x[jvj+6]!=K)) goto l7;
pile[v[22]]=1005; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1005,jvj+4,V6)*/
V6=pile[WZ2]; 
H=V6;
if((H>=1000)) goto l7;
if((H<=L)) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=EC; pile[WZ2]=jvj+7; 
(*f[505])( );     /*EVCOND0(jvj+4,EC,jvj+7)*/
if((x[jvj+7]==135)) goto l8;
goto l7;
l11:x[jvj+14]=x[jvj+12] ;z[jvj+14]=z[jvj+12];
x[jvj+2]=x[jvj+14] ;z[jvj+2]=z[jvj+14];
pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+3)*/
x[jvj+15]=x[jvj+3] ;z[jvj+15]=z[jvj+3];
goto l6;
}
