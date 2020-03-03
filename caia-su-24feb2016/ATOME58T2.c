#include "dx.h"
void ATOME58T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V12=0,V29=0,V2=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=20058;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3223&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=29)) goto l1;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,R,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+7,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,R,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=484)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+8,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+10,V12)*/
V12=pile[WZ2]; 
if((V23!=V12)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+8,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+11,jvj+12)*/
if(x[jvj+12]!=96&&x[jvj+12]!=89&&x[jvj+12]!=41&&x[jvj+12]!=20&&x[jvj+12]!=128&&x[jvj+12]!=570&&x[jvj+12]!=1317) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+5,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+13,jvj+14)*/
if(x[jvj+14]!=96&&x[jvj+14]!=89&&x[jvj+14]!=41&&x[jvj+14]!=20&&x[jvj+14]!=128&&x[jvj+14]!=570&&x[jvj+14]!=1317) goto l1;
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+15,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l1;     /*NDD0(jvj+5,jvj+16)*/
pile[v[22]]=498; pile[WZ2]=jvj+17; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+16,jvj+17)*/
pile[v[22]]=688; pile[WZ1]=jvj+17; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(688,jvj+17,V2)*/
V2=pile[WZ2]; 
if((V2!=1)) goto l1;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+23)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V29,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3223; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3223,246,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=20058; pile[WZ2]=218; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,20058,218,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-20); pile[WZ2]=jvj+22; pile[WZ3]=159; pile[WZ4]=jvj+24; 
(*f[298])( );     /*TRIENS1(jvj+23,(-20),jvj+22,159,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+24,1,158,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=27; pile[WZ2]=jvj+16; 
(*f[1047])( );     /*EVENEMENT0(jvj+18,27,jvj+16)*/
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
