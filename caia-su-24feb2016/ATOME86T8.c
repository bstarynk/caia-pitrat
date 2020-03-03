#include "dx.h"
void ATOME86T8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=20086;z[jvj+1]=(-100);
x[jvj+2]=8;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3265&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[v[22]]=1182; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+4,jvj+5)*/
if((68!=x[jvj+5])) goto l4;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+6)*/
l1:if((x[jvj+6]<=0)) goto l4;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=30)) goto l2;
pile[v[22]]=869; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(869,jvj+7,jvj+10)*/
if((x[jvj+10]!=769)) goto l2;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(870,jvj+7,V6)*/
V6=pile[WZ2]; 
if((V6<4)) goto l2;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+7,jvj+11)*/
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+7,jvj+12)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+13; 
(*f[887])( );     /*VARND0(jvj+7,jvj+13)*/
x[jvj+21]=x[jvj+13] ;z[jvj+21]=z[jvj+13];
l3:if((x[jvj+21]<=0)) goto l2;
x[jvj+20]=s[x[jvj+21]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+21];
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,jvj+7,110,(-601),jvj+18)*/
pile[WZ1]=jvj+20; pile[WZ3]=(-637); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,jvj+20,110,(-637),jvj+19)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(206,715,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3112; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3112,246,jvj+17)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20086; pile[WZ4]=jvj+17; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(158,289,218,20086,jvj+17,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=159; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+14,159,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+14,159,jvj+19)*/
(*f[481])( );     /*STOCKER0(jvj+14)*/
x[jvj+21]=t[x[jvj+21]];
goto l3;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
