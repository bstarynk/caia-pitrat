#include "dx.h"
void ORU2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V8=0,Z=0,V=0,V20=0,V28=0;
int R,ZZ,Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10683;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2169&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; ZZ=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=ZZ; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,ZZ,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==44)) goto l1;
if((x[jvj+4]!=25)) goto l9;
pile[v[22]]=110; pile[WZ1]=Y; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(110,Y,V)*/
V=pile[WZ2]; 
x[jvj+8]=d[20];z[jvj+8]=0;
l3:if((x[jvj+8]<=0)) goto l9;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=ZZ; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+9,ZZ,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+10,V20)*/
V20=pile[WZ2]; 
if((V!=V20)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+9,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=ZZ; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+11,ZZ,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+26)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=436; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,436,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=111; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+27; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+13,jvj+27,jvj+18)*/
l2:Z=x[ZZ];
V28=Z;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V28; 
(*f[134])( );     /*OTA0(107,R,V28)*/
pile[v[22]]=159; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(159,R,jvj+14)*/
x[jvj+15]=d[121];z[jvj+15]=0;
l5:if((x[jvj+15]>0)) goto l6;
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(R,107,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[938])( );     /*USE0(jvj+18,jvj+19)*/
pile[WZ1]=253; pile[WZ2]=jvj+19; 
(*f[34])( );     /*CHGC0(jvj+18,253,jvj+19)*/
pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[2208])( );     /*ORA1(jvj+18,R,jvj+18)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=102; pile[WZ1]=ZZ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,ZZ,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+5,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=110; pile[WZ1]=Y; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(110,Y,V8)*/
V8=pile[WZ2]; 
if((V11!=V8)) goto l9;
pile[v[22]]=103; pile[WZ1]=ZZ; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,ZZ,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=180; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,180,jvj+22)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V11; pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,V11,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=436; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,436,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=111; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,111,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+23; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+7,jvj+23,jvj+18)*/
goto l2;
l4:x[jvj+8]=t[x[jvj+8]];
goto l3;
l6:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
x[jvj+28]=x[jvj+14] ;z[jvj+28]=z[jvj+14];
l7:if((x[jvj+28]>0)) goto l8;
x[jvj+15]=t[x[jvj+15]];
goto l5;
l8:x[jvj+17]=s[x[jvj+28]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+28];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=V28; 
(*f[134])( );     /*OTA0(jvj+16,jvj+17,V28)*/
x[jvj+28]=t[x[jvj+28]];
goto l7;
}
