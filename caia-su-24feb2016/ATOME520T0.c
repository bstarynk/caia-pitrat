#include "dx.h"
void ATOME520T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V4=0,V19=0,V17=0,V12=0,K=0,V22=0;
int V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20520;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3789&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+2,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=1310; pile[WZ1]=V; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1310,V,jvj+6)*/
pile[v[22]]=509; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(509,V,jvj+7)*/
l4:if((x[jvj+7]<=0)) goto l9;
x[jvj+4]=s[x[jvj+7]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+7];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=408)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+10)*/
if((x[V]!=x[jvj+10])) goto l5;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V14; 
(*f[207])( );     /*PLUE2(jvj+3,V14)*/
l1:pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V19=x[jvj+5];
l2:if((V19>0)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+4,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
x[jvj+32]=x[jvj+6] ;z[jvj+32]=z[jvj+6];
l6:if((x[jvj+32]<=0)) goto l5;
x[jvj+13]=s[x[jvj+32]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+32];
pile[v[22]]=195; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(195,jvj+13,jvj+14)*/
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+13,V12)*/
V12=pile[WZ2]; 
V22=x[jvj+14];
l8:if((V22<=0)) goto l7;
K=s[V22];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+17)*/
pile[WZ3]=596; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V12; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V12,jvj+25)*/
pile[WZ3]=K; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+20)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,jvj+12,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+19,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+15,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+30)*/
pile[v[22]]=V17; pile[WZ1]=858; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V17,858,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=3789; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,3789,246,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=20520; pile[WZ2]=218; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+28,20520,218,jvj+29)*/
pile[v[22]]=jvj+30; pile[WZ1]=(-20); pile[WZ2]=jvj+29; pile[WZ3]=159; pile[WZ4]=jvj+31; 
(*f[298])( );     /*TRIENS1(jvj+30,(-20),jvj+29,159,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+31,1,158,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1296])( );     /*NOUVCONTR0(jvj+15,jvj+16)*/
V22=t[V22];
goto l8;
l3:V4=s[V19];
pile[v[22]]=jvj+3; pile[WZ1]=V4; 
(*f[207])( );     /*PLUE2(jvj+3,V4)*/
V19=t[V19];
goto l2;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l7:x[jvj+32]=t[x[jvj+32]];
goto l6;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
