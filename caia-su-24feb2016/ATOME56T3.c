#include "dx.h"
void ATOME56T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V3=0,V8=0;
int DD;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=20056;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3214&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DD=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=489; pile[WZ1]=DD; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(489,DD,jvj+4)*/
if((x[jvj+4]!=0)) goto l4;
pile[v[22]]=498; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,DD,jvj+5)*/
pile[v[22]]=473; pile[WZ1]=jvj+5; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(473,jvj+5,V3)*/
V3=pile[WZ2]; 
if((V3!=1)) goto l4;
pile[v[22]]=509; pile[WZ1]=DD; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,DD,jvj+6)*/
l1:if((x[jvj+6]<=0)) goto l4;
x[jvj+3]=s[x[jvj+6]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+6];
pile[v[22]]=870; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(870,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8!=3)) goto l2;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1274,jvj+3,V6)*/
V6=pile[WZ2]; 
if((V6!=0)) goto l2;
l3:pile[v[22]]=868; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(868,jvj+3,jvj+7)*/
if((x[jvj+7]==55)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(jvj+3,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[DD]) goto l5;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l5:pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+13)*/
pile[WZ1]=DD; pile[WZ3]=(-2829); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,DD,110,(-2829),jvj+14)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(206,715,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,v[13],642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=3080; pile[WZ2]=246; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,3080,246,jvj+12)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20056; pile[WZ4]=jvj+12; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(158,289,218,20056,jvj+12,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=159; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+9,159,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+9,159,jvj+14)*/
(*f[481])( );     /*STOCKER0(jvj+9)*/
goto l2;
}
