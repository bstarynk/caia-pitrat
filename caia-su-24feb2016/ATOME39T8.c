#include "dx.h"
void ATOME39T8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V6=0,V7=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=20039;z[jvj+1]=(-100);
x[jvj+2]=8;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3345&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6!=2)) goto l5;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1274,R,V3)*/
V3=pile[WZ2]; 
if((V3!=0)) goto l5;
l2:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(868,R,jvj+6)*/
if((x[jvj+6]==55)) goto l5;
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l3:if((x[jvj+4]<=0)) goto l5;
x[jvj+7]=s[x[jvj+4]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+4];
pile[v[22]]=489; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(489,jvj+7,jvj+8)*/
if((x[jvj+8]!=0)) goto l4;
pile[v[22]]=498; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+7,jvj+9)*/
pile[v[22]]=473; pile[WZ1]=jvj+9; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(473,jvj+9,V7)*/
V7=pile[WZ2]; 
if((V7!=1)) goto l4;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+14)*/
pile[WZ1]=jvj+7; pile[WZ3]=(-2829); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,jvj+7,110,(-2829),jvj+15)*/
pile[v[22]]=602; pile[WZ1]=715; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(602,715,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3310; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3310,246,jvj+13)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20039; pile[WZ4]=jvj+13; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(158,289,218,20039,jvj+13,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=159; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+15)*/
(*f[481])( );     /*STOCKER0(jvj+10)*/
l4:x[jvj+4]=t[x[jvj+4]];
goto l3;
}
