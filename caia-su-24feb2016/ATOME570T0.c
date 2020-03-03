#include "dx.h"
void ATOME570T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V15=0,V7=0,V17=0,V26=0,V27=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=20570;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3951&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(202,V,jvj+6)*/
if((x[jvj+6]!=68)) goto l4;
pile[v[22]]=365; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(365,V,jvj+7)*/
for(i=x[jvj+7],V8=0;i>0;i=t[i],V8++)  ;
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+8,jvj+9)*/
pile[v[22]]=1182; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+9,jvj+10)*/
if((68!=x[jvj+10])) goto l4;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+11,V15)*/
V15=pile[WZ2]; 
x[jvj+5]=0 ;z[jvj+5]=0;
l1:if((x[jvj+7]>0)) goto l2;
for(i=x[jvj+5],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=V8)) goto l4;
if((x[jvj+5]==0)) goto l4;
V26=(-999999);
x[jvj+21]=x[jvj+5] ;z[jvj+21]=z[jvj+5];
l5:if((x[jvj+21]>0)) goto l6;
if((V26==(-999999))) goto l4;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V26; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V26,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+12,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+18)*/
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V15,858,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3951; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3951,246,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=20570; pile[WZ2]=218; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,20570,218,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=(-20); pile[WZ2]=jvj+17; pile[WZ3]=159; pile[WZ4]=jvj+19; 
(*f[298])( );     /*TRIENS1(jvj+18,(-20),jvj+17,159,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+19,1,158,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=164; pile[WZ2]=V; pile[WZ3]=V17; 
(*f[2056])( );     /*VAUT0(jvj+13,164,V,V17)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1291])( );if(v[102]) goto l3;     /*CONVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+4)*/
l3:x[jvj+7]=t[x[jvj+7]];
goto l1;
l6:x[jvj+20]=s[x[jvj+21]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+21];
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+20,V27)*/
V27=pile[WZ2]; 
if(V27>V26) V26=V27;
l7:x[jvj+21]=t[x[jvj+21]];
goto l5;
}
