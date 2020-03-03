#include "dx.h"
void KVY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V19=0,V7=0,V15=0,W=0,F=0,V=0,V17=0,V18=0;
int TP,TOTD;
int TOTENS;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10196;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1800&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TP=pile[v[22]]; TOTD=pile[v[22]+1]; TOTENS=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=x[TOTD] ;z[jvj+10]=z[TOTD];
l1:x[jvj+2]=0 ;z[jvj+2]=0;
V19=x[jvj+10];
l2:if((V19>0)) goto l3;
x[jvj+9]=x[TP] ;z[jvj+9]=z[TP];
l4:if((x[jvj+9]>0)) goto l5;
x[jvj+11]=x[jvj+2] ;z[jvj+11]=z[jvj+2];
for(i=x[jvj+11],V17=0;i>0;i=t[i],V17++)  ;
for(i=x[jvj+10],V18=0;i>0;i=t[i],V18++)  ;
if((V17==V18)) goto l8;
x[jvj+10]=x[jvj+11] ;z[jvj+10]=z[jvj+11];
goto l1;
l3:V2=s[V19];
pile[v[22]]=jvj+2; pile[WZ1]=V2; 
(*f[331])( );     /*PLUE3(jvj+2,V2)*/
V19=t[V19];
goto l2;
l5:x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=435)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+3,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,jvj+3,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+6,V15)*/
V15=pile[WZ2]; 
W=V15;
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==W) goto l7;
l6:x[jvj+9]=t[x[jvj+9]];
goto l4;
l7:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+3,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+7,jvj+8)*/
F=x[jvj+8];
if(F!=179&&F!=82&&F!=79) goto l6;
V=V7;
pile[v[22]]=jvj+2; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+2,V)*/
goto l6;
l8:x[TOTENS]=x[jvj+10] ;z[TOTENS]=z[jvj+10];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
