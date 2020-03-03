#include "dx.h"
void ATOME78T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=20078;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3145&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=48)) goto l3;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+7,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,R,jvj+8)*/
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[v[22]]=V7; pile[WZ1]=858; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V7,858,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3145; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3145,246,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=20078; pile[WZ2]=218; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,20078,218,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-20); pile[WZ2]=jvj+19; pile[WZ3]=159; pile[WZ4]=jvj+21; 
(*f[298])( );     /*TRIENS1(jvj+20,(-20),jvj+19,159,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+21,1,158,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=R; 
(*f[966])( );     /*ELIMINE0(jvj+9,R)*/
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+8]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+8];
pile[v[22]]=1070; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1070,R,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+3,1070,jvj+2)*/
l4:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+14)*/
pile[v[22]]=V7; pile[WZ1]=858; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(V7,858,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,v[13],642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=3145; pile[WZ2]=246; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,3145,246,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=20078; pile[WZ2]=218; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,20078,218,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-20); pile[WZ2]=jvj+13; pile[WZ3]=159; pile[WZ4]=jvj+15; 
(*f[298])( );     /*TRIENS1(jvj+14,(-20),jvj+13,159,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+4; 
(*f[58])( );     /*TRI3(jvj+15,1,158,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1296])( );     /*NOUVCONTR0(jvj+3,jvj+4)*/
x[jvj+8]=t[x[jvj+8]];
goto l1;
}
