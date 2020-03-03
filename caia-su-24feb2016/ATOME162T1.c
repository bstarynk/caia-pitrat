#include "dx.h"
void ATOME162T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20162;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3521&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1353,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l7;
pile[v[22]]=498; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+9,jvj+11)*/
pile[v[22]]=1182; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1182,jvj+11,jvj+12)*/
if((68!=x[jvj+12])) goto l7;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(280,D,V3)*/
V3=pile[WZ2]; 
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=509; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+7)*/
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=D; pile[WZ1]=jvj+13; 
(*f[1290])( );if(v[102]) goto l7;     /*DEPEXP0(D,jvj+13)*/
l5:if((x[jvj+8]<=0)) goto l7;
x[jvj+14]=s[x[jvj+8]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+8];
pile[v[22]]=870; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(870,jvj+14,V5)*/
V5=pile[WZ2]; 
if((V5!=1)) goto l6;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; pile[WZ2]=jvj+14; pile[WZ3]=jvj+16; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+13,jvj+15,jvj+14,jvj+16)*/
pile[v[22]]=1294; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1294,jvj+14,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==1483) goto l8;
l6:x[jvj+8]=t[x[jvj+8]];
goto l5;
l2:x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==486) goto l4;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==486) goto l4;
l3:x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+3)*/
goto l3;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l8:pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,jvj+14,110,(-601),jvj+22)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+23)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(206,715,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3520; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3520,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20162; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,289,218,20162,jvj+21,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+23)*/
(*f[481])( );     /*STOCKER0(jvj+18)*/
goto l6;
}
