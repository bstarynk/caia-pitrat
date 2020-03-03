#include "dx.h"
void ATOME39T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V2=0;
int DD;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=20039;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3079&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DD=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=489; pile[WZ1]=DD; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(489,DD,jvj+3)*/
if((x[jvj+3]!=0)) goto l6;
pile[v[22]]=498; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,DD,jvj+4)*/
pile[v[22]]=473; pile[WZ1]=jvj+4; 
(*f[1975])( );if(v[102]) goto l6;     /*FNDCND0(473,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5!=1)) goto l6;
pile[v[22]]=365; pile[WZ1]=DD; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(365,DD,jvj+5)*/
for(i=x[jvj+5],V2=0;i>0;i=t[i],V2++)  ;
x[jvj+7]=incon;
if((V2<=3)) goto l1;
if((V2<=5)) goto l2;
if((V2<=8)) goto l3;
if((V2<=12)) goto l4;
if((V2<=20)) goto l5;
x[jvj+7]=606 ;z[jvj+7]=606;
l7:pile[v[22]]=101; pile[WZ1]=DD; pile[WZ2]=110; pile[WZ3]=(-2829); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(101,DD,110,(-2829),jvj+12)*/
pile[v[22]]=jvj+7; pile[WZ1]=715; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,715,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,v[13],642,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=3078; pile[WZ2]=246; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,3078,246,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=20039; pile[WZ2]=218; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+10,20039,218,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=(-20); pile[WZ2]=jvj+11; pile[WZ3]=159; pile[WZ4]=jvj+13; 
(*f[298])( );     /*TRIENS1(jvj+12,(-20),jvj+11,159,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=187; pile[WZ2]=158; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+13,187,158,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[481])( );     /*STOCKER0(jvj+6)*/
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+7]=602 ;z[jvj+7]=602;
goto l7;
l2:x[jvj+7]=603 ;z[jvj+7]=603;
goto l7;
l3:x[jvj+7]=206 ;z[jvj+7]=206;
goto l7;
l4:x[jvj+7]=604 ;z[jvj+7]=604;
goto l7;
l5:x[jvj+7]=605 ;z[jvj+7]=605;
goto l7;
}
