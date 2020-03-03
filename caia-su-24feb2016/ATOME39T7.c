#include "dx.h"
void ATOME39T7(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V6=0,V5=0;
int DD;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=20039;z[jvj+1]=(-100);
x[jvj+2]=7;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3311&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DD=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=489; pile[WZ1]=DD; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(489,DD,jvj+10)*/
if((x[jvj+10]!=0)) goto l7;
pile[v[22]]=498; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,DD,jvj+11)*/
pile[v[22]]=473; pile[WZ1]=jvj+11; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(473,jvj+11,V6)*/
V6=pile[WZ2]; 
if((V6!=1)) goto l7;
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=509; pile[WZ1]=DD; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(509,DD,jvj+8)*/
l1:if((x[jvj+8]<=0)) goto l4;
x[jvj+4]=s[x[jvj+8]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+8];
pile[v[22]]=1417; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1417,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==117) goto l3;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1545,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==117) goto l3;
l2:x[jvj+8]=t[x[jvj+8]];
goto l1;
l3:pile[v[22]]=jvj+9; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+4)*/
goto l2;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l4:if((x[jvj+9]<=0)) goto l7;
x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=870; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5!=2)) goto l5;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1274,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=0)) goto l5;
l6:pile[v[22]]=868; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(868,jvj+3,jvj+12)*/
if((x[jvj+12]==55)) goto l5;
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+17)*/
pile[WZ1]=DD; pile[WZ3]=(-2829); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,DD,110,(-2829),jvj+18)*/
pile[v[22]]=602; pile[WZ1]=715; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(602,715,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3310; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3310,246,jvj+16)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20039; pile[WZ4]=jvj+16; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,289,218,20039,jvj+16,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=159; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+17)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+18)*/
(*f[481])( );     /*STOCKER0(jvj+13)*/
l5:x[jvj+9]=t[x[jvj+9]];
goto l4;
}
