#include "dx.h"
void EVALUATE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RES=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11784;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1973&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=jvj+2; pile[WZ1]=A; pile[WZ3]=jvj+3; 
(*f[110])( );if(v[102]) goto l3;     /*EVL2(jvj+2,A,RES,jvj+3)*/
RES=pile[WZ2]; 
x[jvj+4]=incon;
if((x[jvj+3]==41)) goto l5;
if((x[jvj+3]==20)) goto l1;
if((x[jvj+3]!=89)) goto l3;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=RES; pile[WZ4]=jvj+4; 
(*f[272])( );     /*QUADRI9(100,89,162,RES,jvj+4)*/
l2:if((x[jvj+4]==(-99999998))) goto l3;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:x[jvj+5]=RES ;z[jvj+5]=(RES<=sepcte) ? RES : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+5; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+5,jvj+4)*/
goto l2;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l5:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RES; pile[WZ4]=jvj+4; 
(*f[192])( );     /*QUADRI4(100,41,130,RES,jvj+4)*/
goto l2;
}
