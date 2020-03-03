#include "dx.h"
void CRATOMETRAD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Z=0,V19=0;
int N,S;
int M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11354;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==940&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; S=pile[v[22]+1]; M=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1732; pile[WZ1]=100; pile[WZ2]=M; 
(*f[54])( );     /*TRI1(1732,100,M)*/
Z=250;
x[jvj+3]=incon;
pile[v[22]]=498; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,N,jvj+2)*/
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
l2:pile[v[22]]=M; pile[WZ1]=498; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(M,498,jvj+3)*/
x[jvj+18]=w[1732][8];
l3:if((x[jvj+18]>0)) goto l4;
pile[v[22]]=763; pile[WZ1]=S; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(763,S,jvj+14)*/
l9:if((x[jvj+14]>0)) goto l10;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+3]=x[N] ;z[jvj+3]=z[N];
goto l2;
l4:x[jvj+4]=s[x[jvj+18]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+18];
pile[v[22]]=jvj+4; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(jvj+4,N,jvj+5)*/
x[jvj+19]=x[jvj+5] ;z[jvj+19]=z[jvj+5];
l5:if((x[jvj+19]>0)) goto l6;
x[jvj+18]=t[x[jvj+18]];
goto l3;
l6:x[jvj+6]=s[x[jvj+19]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+19];
if((x[jvj+6]==Z)) goto l7;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=M; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(M,jvj+4,jvj+7)*/
l7:x[jvj+19]=t[x[jvj+19]];
goto l5;
l10:x[jvj+10]=s[x[jvj+14]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+14];
pile[v[22]]=447; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+10,jvj+15)*/
if((x[jvj+15]==36)) goto l12;
if((x[jvj+15]!=37)) goto l11;
pile[v[22]]=459; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(459,jvj+10,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=M; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,M,jvj+9)*/
pile[v[22]]=475; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(475,jvj+10,jvj+11)*/
x[jvj+20]=x[jvj+9] ;z[jvj+20]=z[jvj+9];
l8:if((x[jvj+20]<=0)) goto l11;
x[jvj+12]=s[x[jvj+20]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+20];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+11,jvj+13)*/
if((x[jvj+13]==135)) goto l13;
x[jvj+20]=t[x[jvj+20]];
goto l8;
l12:pile[v[22]]=459; pile[WZ1]=jvj+10; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(459,jvj+10,jvj+16)*/
pile[v[22]]=475; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(475,jvj+10,jvj+17)*/
pile[v[22]]=M; pile[WZ1]=jvj+16; 
(*f[36])( );     /*PLUSC0(M,jvj+16,jvj+17)*/
l11:x[jvj+14]=t[x[jvj+14]];
goto l9;
l13:V19=x[jvj+12];
pile[v[22]]=jvj+8; pile[WZ1]=M; pile[WZ2]=V19; 
(*f[134])( );     /*OTA0(jvj+8,M,V19)*/
goto l11;
}
