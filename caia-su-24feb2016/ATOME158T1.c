#include "dx.h"
void ATOME158T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=20158;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3506&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=D; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(202,D,jvj+9)*/
if((x[jvj+9]!=68)) goto l6;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=509; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l4;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==475) goto l3;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==475) goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+3)*/
goto l2;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l4:if((x[jvj+8]<=0)) goto l6;
x[jvj+10]=s[x[jvj+8]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+8];
pile[v[22]]=870; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,jvj+10,V3)*/
V3=pile[WZ2]; 
if((V3!=2)) goto l5;
pile[v[22]]=868; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(868,jvj+10,jvj+11)*/
if((x[jvj+11]!=25)) goto l5;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+16)*/
pile[WZ1]=jvj+10; pile[WZ3]=(-601); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,jvj+10,110,(-601),jvj+17)*/
pile[v[22]]=603; pile[WZ1]=715; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(603,715,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,v[13],642,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=3504; pile[WZ2]=246; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,3504,246,jvj+15)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20158; pile[WZ4]=jvj+15; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,289,218,20158,jvj+15,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=159; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+17)*/
(*f[481])( );     /*STOCKER0(jvj+12)*/
l5:x[jvj+8]=t[x[jvj+8]];
goto l4;
}
