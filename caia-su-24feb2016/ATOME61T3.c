#include "dx.h"
void ATOME61T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0,V23=0,V8=0,V21=0,V2=0,V3=0,V7=0,V5=0,V4=0;
int A;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20061;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3431&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,A,jvj+8)*/
for(i=x[jvj+8],V8=0;i>0;i=t[i],V8++)  ;
if((V8>=6)) goto l13;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+9,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,A,jvj+10)*/
pile[v[22]]=472; pile[WZ1]=jvj+10; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(472,jvj+10,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=750; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(750,jvj+10,V3)*/
V3=pile[WZ2]; 
V7=V8*V3;
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+21]=x[jvj+8] ;z[jvj+21]=z[jvj+8];
l4:if((x[jvj+21]>0)) goto l5;
for(i=x[jvj+7],V5=0;i>0;i=t[i],V5++)  ;
V4=V5*V2;
if((V4==V7)) goto l9;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:T=s[V23];
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==T) goto l3;
l8:x[jvj+22]=t[x[jvj+22]];
l6:if((x[jvj+22]>0)) goto l7;
x[jvj+21]=t[x[jvj+21]];
goto l4;
l3:V23=t[V23];
l1:if((V23>0)) goto l2;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+3)*/
goto l8;
l5:x[jvj+5]=s[x[jvj+21]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+21];
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+6)*/
x[jvj+22]=x[jvj+6] ;z[jvj+22]=z[jvj+6];
goto l6;
l7:x[jvj+3]=s[x[jvj+22]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+22];
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+4)*/
V23=x[jvj+4];
goto l1;
l11:x[jvj+14]=s[x[jvj+23]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+23];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l12;
pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=110; pile[WZ3]=(-598); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,A,110,(-598),jvj+19)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(V21,858,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3431; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3431,246,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=20061; pile[WZ2]=218; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,20061,218,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ2]=jvj+18; pile[WZ3]=159; pile[WZ4]=jvj+20; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+18,159,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+20,1,158,jvj+13)*/
pile[v[22]]=365; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[1569])( );     /*DELIER0(365,jvj+11,jvj+14,jvj+13)*/
l12:x[jvj+23]=t[x[jvj+23]];
l10:if((x[jvj+23]>0)) goto l11;
x[jvj+8]=t[x[jvj+8]];
l9:if((x[jvj+8]<=0)) goto l13;
x[jvj+11]=s[x[jvj+8]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+8];
pile[v[22]]=365; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(365,jvj+11,jvj+12)*/
x[jvj+23]=x[jvj+12] ;z[jvj+23]=z[jvj+12];
goto l10;
}
