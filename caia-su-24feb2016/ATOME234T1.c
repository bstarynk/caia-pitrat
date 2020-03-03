#include "dx.h"
void ATOME234T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=20234;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3752&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l7;
pile[v[22]]=1188; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1188,R,jvj+3)*/
if((x[jvj+3]==68)) goto l7;
l6:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,R,jvj+13)*/
pile[v[22]]=103; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,R,jvj+14)*/
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(R,jvj+8)*/
l4:if((x[jvj+8]>0)) goto l5;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+15; 
(*f[3671])( );if(v[102]) goto l7;     /*PRDPOS0(jvj+9,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(605,715,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3750; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3750,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20234; pile[WZ2]=218; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20234,218,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=(-20); pile[WZ2]=jvj+21; pile[WZ3]=159; pile[WZ4]=jvj+23; 
(*f[298])( );     /*TRIENS1(jvj+22,(-20),jvj+21,159,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+23,289,158,jvj+16)*/
pile[v[22]]=jvj+16; 
(*f[481])( );     /*STOCKER0(jvj+16)*/
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+6]=s[x[jvj+24]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+24];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+6,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=195; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,jvj+6,jvj+7)*/
l8:pile[v[22]]=jvj+4; pile[WZ1]=218; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+4,218,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+7; pile[WZ2]=195; pile[WZ3]=jvj+10; 
(*f[301])( );     /*TRI11(jvj+17,jvj+7,195,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
x[jvj+8]=t[x[jvj+8]];
goto l4;
l3:x[jvj+24]=t[x[jvj+24]];
l1:if((x[jvj+24]>0)) goto l2;
pile[v[22]]=195; pile[WZ1]=1280; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,1280,jvj+7)*/
goto l8;
l5:x[jvj+4]=s[x[jvj+8]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+8];
x[jvj+7]=incon;
pile[v[22]]=1310; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1310,jvj+4,jvj+5)*/
x[jvj+24]=x[jvj+5] ;z[jvj+24]=z[jvj+5];
goto l1;
}
