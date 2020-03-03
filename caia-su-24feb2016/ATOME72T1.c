#include "dx.h"
void ATOME72T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=20072;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3203&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=208; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(208,P,jvj+3)*/
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l1;
pile[v[22]]=1081; pile[WZ1]=P; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1081,P,jvj+6)*/
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+3,jvj+7)*/
pile[v[22]]=103; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+3,jvj+8)*/
pile[v[22]]=971; pile[WZ1]=P; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(971,P,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==301) goto l2;
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=110; pile[WZ3]=(-624); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,P,110,(-624),jvj+15)*/
pile[v[22]]=603; pile[WZ1]=715; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(603,715,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3201; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3201,246,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=20072; pile[WZ2]=218; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+13,20072,218,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=(-20); pile[WZ2]=jvj+14; pile[WZ3]=159; pile[WZ4]=jvj+16; 
(*f[298])( );     /*TRIENS1(jvj+15,(-20),jvj+14,159,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+16,289,158,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[481])( );     /*STOCKER0(jvj+10)*/
goto l1;
}
