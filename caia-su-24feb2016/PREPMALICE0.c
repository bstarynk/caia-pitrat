#include "dx.h"
void PREPMALICE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V7=0,V8=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11473;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==167&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
vv[198]=1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=33; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,33,jvj+20)*/
pile[WZ3]=1; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1155; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,1155,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+20,jvj+19,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=337; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,337,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+15; 
(*f[298])( );     /*TRIENS1(jvj+14,(-20),jvj+13,105,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+15,42,100,jvj+8)*/
pile[v[22]]=10589; pile[WZ1]=184; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(10589,184,jvj+8)*/
x[jvj+9]=vo[20];z[jvj+9]=vz[20];
pile[v[22]]=240; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(240,218,68)*/
pile[v[22]]=jvj+9; pile[WZ1]=502; 
(*f[35])( );     /*CHGC1(jvj+9,502,68)*/
pile[v[22]]=1414; pile[WZ1]=324; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1414,324,jvj+10)*/
l6:if((x[jvj+10]>0)) goto l7;
pile[v[22]]=87; pile[WZ1]=85; 
(*f[139])( );     /*EDITE1(87,85)*/
l9:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+4]=s[x[jvj+21]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+21];
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+4,V4)*/
V4=pile[WZ2]; 
if((V4!=(-7141))) goto l3;
V5=x[jvj+4];
pile[v[22]]=878; pile[WZ1]=jvj+2; pile[WZ2]=V5; 
(*f[134])( );     /*OTA0(878,jvj+2,V5)*/
l3:x[jvj+21]=t[x[jvj+21]];
l1:if((x[jvj+21]>0)) goto l2;
pile[v[22]]=878; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+5,jvj+6)*/
x[jvj+22]=x[jvj+6] ;z[jvj+22]=z[jvj+6];
l4:if((x[jvj+22]<=0)) goto l8;
x[jvj+7]=s[x[jvj+22]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+22];
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+7,V7)*/
V7=pile[WZ2]; 
if((V7!=(-7141))) goto l5;
V8=x[jvj+7];
pile[v[22]]=878; pile[WZ1]=jvj+5; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(878,jvj+5,V8)*/
l5:x[jvj+22]=t[x[jvj+22]];
goto l4;
l7:x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=983; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+2,jvj+11)*/
x[jvj+5]=x[jvj+11] ;z[jvj+5]=z[jvj+11];
pile[v[22]]=878; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(878,jvj+2,jvj+3)*/
x[jvj+21]=x[jvj+3] ;z[jvj+21]=z[jvj+3];
goto l1;
l8:x[jvj+10]=t[x[jvj+10]];
goto l6;
}
