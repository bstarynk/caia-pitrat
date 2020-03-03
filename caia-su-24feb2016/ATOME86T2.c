#include "dx.h"
void ATOME86T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0;
int G;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=20086;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3114&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
G=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[v[22]]=1182; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1182,jvj+4,jvj+5)*/
if((68!=x[jvj+5])) goto l5;
pile[v[22]]=997; pile[WZ1]=G; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(997,G,L)*/
L=pile[WZ2]; 
x[jvj+7]=incon;
if((L==1)) goto l1;
if((L<2)) goto l5;
if((L<=3)) goto l2;
if((L<=6)) goto l3;
if((L<=12)) goto l4;
x[jvj+7]=603 ;z[jvj+7]=603;
l6:pile[v[22]]=jvj+7; pile[WZ1]=715; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,715,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,v[13],642,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=3113; pile[WZ2]=246; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,3113,246,jvj+10)*/
pile[v[22]]=158; pile[WZ1]=187; pile[WZ2]=218; pile[WZ3]=20086; pile[WZ4]=jvj+10; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(158,187,218,20086,jvj+10,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[481])( );     /*STOCKER0(jvj+6)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+7]=606 ;z[jvj+7]=606;
goto l6;
l2:x[jvj+7]=605 ;z[jvj+7]=605;
goto l6;
l3:x[jvj+7]=604 ;z[jvj+7]=604;
goto l6;
l4:x[jvj+7]=206 ;z[jvj+7]=206;
goto l6;
}
