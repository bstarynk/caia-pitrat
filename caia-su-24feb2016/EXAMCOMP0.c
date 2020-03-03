#include "dx.h"
void EXAMCOMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V17=0,V12=0,V11=0,V3=0,V6=0,V4=0;
int H,RN;
int L;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11517;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1312&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; RN=pile[v[22]+1]; L=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=x[jvj+8]=x[L]=incon;
pile[v[22]]=1581; pile[WZ1]=H; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1581,H,jvj+12)*/
if((x[jvj+12]==0)) goto l13;
pile[v[22]]=107; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,H,jvj+13)*/
for(i=x[jvj+13],V6=0;i>0;i=t[i],V6++)  ;
if((V6<=5)) goto l13;
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+4]=x[RN] ;z[jvj+4]=z[RN];
l3:pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+4,jvj+5)*/
pile[v[22]]=698; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(698,jvj+5,jvj+6)*/
x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+7)*/
for(i=x[jvj+7],V12=0;i>0;i=t[i],V12++)  ;
V11=3*V12;
if((V11>V6)) goto l4;
pile[v[22]]=1581; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1581,jvj+2,jvj+3)*/
V17=x[jvj+12];
l2:if((V17<=0)) goto l4;
V=s[V17];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l5;
V17=t[V17];
goto l2;
l1:if((x[jvj+11]<=0)) goto l12;
x[jvj+14]=s[x[jvj+11]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+11];
x[L]=x[jvj+14] ;z[L]=z[jvj+14];
l12:if(x[L]==incon) goto l13;
l15:if(x[L]!=incon) goto l16;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l5:pile[v[22]]=jvj+8; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+2)*/
l4:x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
goto l3;
l6:x[jvj+11]=0 ;z[jvj+11]=0;
V4=incon;
if(x[jvj+11]!=incon) goto l7;
l11:if(x[jvj+11]!=incon) goto l1;
goto l12;
l10:if(x[jvj+8]!=incon) goto l6;
goto l12;
l13:x[L]=x[H] ;z[L]=z[H];
goto l15;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l17:V4=V3;
x[jvj+11]=0 ;z[jvj+11]=0;
l9:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+9)*/
l8:x[jvj+8]=t[x[jvj+8]];
l7:if((x[jvj+8]<=0)) goto l11;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+10)*/
for(i=x[jvj+10],V3=0;i>0;i=t[i],V3++)  ;
if(V4==incon) goto l17;
if((V3==V4)) goto l9;
if((V3<=V4)) goto l17;
goto l8;
}
