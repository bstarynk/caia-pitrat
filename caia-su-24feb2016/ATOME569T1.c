#include "dx.h"
void ATOME569T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V9=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=20569;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3950&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(202,V,jvj+7)*/
if((x[jvj+7]!=68)) goto l4;
pile[v[22]]=365; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,V,jvj+8)*/
for(i=x[jvj+8],V10=0;i>0;i=t[i],V10++)  ;
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+9,jvj+10)*/
pile[v[22]]=1182; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+10,jvj+11)*/
if((68!=x[jvj+11])) goto l4;
x[jvj+6]=0 ;z[jvj+6]=0;
l1:if((x[jvj+8]>0)) goto l2;
for(i=x[jvj+6],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=V10)) goto l4;
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+17)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(206,715,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,v[13],642,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=3948; pile[WZ2]=246; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,3948,246,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=20569; pile[WZ2]=218; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+15,20569,218,jvj+16)*/
pile[v[22]]=jvj+17; pile[WZ1]=(-20); pile[WZ2]=jvj+16; pile[WZ3]=159; pile[WZ4]=jvj+18; 
(*f[298])( );     /*TRIENS1(jvj+17,(-20),jvj+16,159,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+18,289,158,jvj+12)*/
pile[v[22]]=jvj+12; 
(*f[481])( );     /*STOCKER0(jvj+12)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+8]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+8];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1291])( );if(v[102]) goto l3;     /*CONVEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+5)*/
l3:x[jvj+8]=t[x[jvj+8]];
goto l1;
}
