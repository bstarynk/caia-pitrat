#include "dx.h"
void ATOME204T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V14=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20204;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3667&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,R,jvj+2)*/
if((x[jvj+2]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]!=29&&x[jvj+4]!=30) goto l3;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(870,R,V4)*/
V4=pile[WZ2]; 
if((V4<=1)) goto l3;
if((V4>=8)) goto l3;
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(498,jvj+5,jvj+6)*/
pile[v[22]]=1182; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1182,jvj+6,jvj+7)*/
if((68!=x[jvj+7])) goto l3;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+8,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(R,jvj+9)*/
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,R,jvj+10)*/
pile[v[22]]=103; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,R,jvj+11)*/
l1:if((x[jvj+9]<=0)) goto l3;
x[jvj+12]=s[x[jvj+9]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+9];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[3109])( );if(v[102]) goto l2;     /*INFG0(jvj+12,jvj+10,jvj+13)*/
pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[3108])( );if(v[102]) goto l2;     /*SUPG0(jvj+12,jvj+11,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+21)*/
pile[v[22]]=V14; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V14,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3667; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3667,246,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=20204; pile[WZ2]=218; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,20204,218,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ2]=jvj+20; pile[WZ3]=159; pile[WZ4]=jvj+22; 
(*f[298])( );     /*TRIENS1(jvj+21,(-20),jvj+20,159,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+22,1,158,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+4; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+4,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,jvj+14,103,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+25; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+25,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+15)*/
l2:x[jvj+9]=t[x[jvj+9]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
