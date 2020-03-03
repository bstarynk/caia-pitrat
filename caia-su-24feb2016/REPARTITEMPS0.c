#include "dx.h"
void REPARTITEMPS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,T=0,V13=0,V12=0,TT=0,V7=0;
int S;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=T=incon;
pile[v[22]]=1161; pile[WZ1]=S; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1161,S,jvj+1)*/
x[jvj+10]=x[jvj+1] ;z[jvj+10]=z[jvj+1];
if((x[jvj+10]==250)) goto l5;
V2=(time(tzt)-inccc);
T=V2;
x[jvj+2]=vo[11];z[jvj+2]=vz[11];
pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1161,jvj+2,jvj+9)*/
if((x[jvj+9]!=x[jvj+10])) goto l5;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,jvj+2,TT)*/
TT=pile[WZ2]; 
V7=T-TT;
if((x[jvj+10]!=1097)) goto l4;
pile[v[22]]=109; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+2,jvj+3)*/
x[jvj+4]=1097 ;z[jvj+4]=1097;
l2:pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+4,jvj+5)*/
pile[v[22]]=698; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(698,jvj+5,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+7,jvj+8)*/
if((x[jvj+8]!=x[jvj+3])) goto l3;
V12=TT-T;
pile[v[22]]=jvj+7; pile[WZ1]=1167; pile[WZ2]=V12; 
(*f[186])( );     /*BTC0(jvj+7,1167,V12)*/
pile[v[22]]=1167; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1167,jvj+7,V13)*/
V13=pile[WZ2]; 
if((V13>0)) goto l4;
pile[v[22]]=jvj+7; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+7)*/
l4:pile[v[22]]=jvj+10; pile[WZ1]=1242; pile[WZ2]=V7; 
(*f[186])( );     /*BTC0(jvj+10,1242,V7)*/
if(x[jvj+10]!=incon) goto l5;
l6:if(T!=incon) goto l7;
l8:v[0]=jvj; v[22]-=1; return;
l1:x[jvj+10]=250 ;z[jvj+10]=250;
l5:x[jvj+11]=vo[11];z[jvj+11]=vz[11];
pile[v[22]]=jvj+11; pile[WZ1]=1161; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+11,1161,jvj+10)*/
goto l6;
l3:x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
goto l2;
l7:x[jvj+12]=vo[11];z[jvj+12]=vz[11];
pile[v[22]]=jvj+12; pile[WZ1]=936; pile[WZ2]=T; 
(*f[43])( );     /*CHGC2(jvj+12,936,T)*/
goto l8;
}
