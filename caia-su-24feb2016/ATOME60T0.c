#include "dx.h"
void ATOME60T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0,V23=0,V8=0,V21=0,V6=0,V10=0,V7=0,V2=0,V3=0,V5=0,V4=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20060;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3083&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+7)*/
for(i=x[jvj+7],V8=0;i>0;i=t[i],V8++)  ;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+8,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,D,jvj+9)*/
pile[v[22]]=473; pile[WZ1]=jvj+9; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(473,jvj+9,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=688; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(688,jvj+9,V10)*/
V10=pile[WZ2]; 
V7=V8*V10;
pile[v[22]]=473; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(473,jvj+9,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=688; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(688,jvj+9,V3)*/
V3=pile[WZ2]; 
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+20]=x[jvj+7] ;z[jvj+20]=z[jvj+7];
l4:if((x[jvj+20]>0)) goto l5;
for(i=x[jvj+6],V5=0;i>0;i=t[i],V5++)  ;
V4=V5*V6;
if((V4==V7)) goto l9;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:T=s[V23];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==T) goto l3;
l8:x[jvj+21]=t[x[jvj+21]];
l6:if((x[jvj+21]>0)) goto l7;
x[jvj+20]=t[x[jvj+20]];
goto l4;
l3:V23=t[V23];
l1:if((V23>0)) goto l2;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+2)*/
goto l8;
l5:x[jvj+4]=s[x[jvj+20]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+20];
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(365,jvj+4,jvj+5)*/
x[jvj+21]=x[jvj+5] ;z[jvj+21]=z[jvj+5];
goto l6;
l7:x[jvj+2]=s[x[jvj+21]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+21];
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(365,jvj+2,jvj+3)*/
V23=x[jvj+3];
goto l1;
l11:x[jvj+13]=s[x[jvj+22]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+22];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l12;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+18)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V21,858,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3083; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3083,246,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=20060; pile[WZ2]=218; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,20060,218,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=(-20); pile[WZ2]=jvj+17; pile[WZ3]=159; pile[WZ4]=jvj+19; 
(*f[298])( );     /*TRIENS1(jvj+18,(-20),jvj+17,159,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+19,1,158,jvj+12)*/
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+10; 
(*f[1569])( );     /*DELIER0(365,jvj+13,jvj+10,jvj+12)*/
l12:x[jvj+22]=t[x[jvj+22]];
l10:if((x[jvj+22]>0)) goto l11;
x[jvj+7]=t[x[jvj+7]];
l9:if((x[jvj+7]<=0)) goto l13;
x[jvj+10]=s[x[jvj+7]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+7];
pile[v[22]]=365; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1969])( );     /*FNDEND0(365,jvj+10,jvj+11)*/
x[jvj+22]=x[jvj+11] ;z[jvj+22]=z[jvj+11];
goto l10;
}
