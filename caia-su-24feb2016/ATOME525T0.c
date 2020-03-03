#include "dx.h"
void ATOME525T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V13=0,V29=0,V27=0;
int V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=20525;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3797&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+2,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=V; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,V,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[3798])( );if(v[102]) goto l8;     /*NEWVAR0(jvj+7)*/
pile[v[22]]=V; pile[WZ1]=jvj+8; 
(*f[1290])( );if(v[102]) goto l8;     /*DEPEXP0(V,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+10)*/
l4:if((x[jvj+6]<=0)) goto l8;
x[jvj+4]=s[x[jvj+6]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=625)) goto l5;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V24; 
(*f[207])( );     /*PLUE2(jvj+3,V24)*/
l1:pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V29=x[jvj+5];
l2:if((V29>0)) goto l3;
pile[v[22]]=160; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,jvj+4,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
x[jvj+15]=d[20];z[jvj+15]=0;
l6:if((x[jvj+15]<=0)) goto l5;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+16,jvj+4,jvj+17)*/
if((x[V]!=x[jvj+17])) goto l7;
pile[v[22]]=268; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+16,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+4; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+18,jvj+4,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=41)) goto l7;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+24)*/
pile[WZ3]=485; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+28)*/
pile[WZ3]=486; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+30)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+30,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+14)*/
pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+28; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+28,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=107; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+29)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+21)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+27; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+27,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+22,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+35)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V27,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3797; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3797,246,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=20525; pile[WZ2]=218; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,20525,218,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=jvj+34; pile[WZ3]=159; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,159,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+36,1,158,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1296])( );     /*NOUVCONTR0(jvj+22,jvj+23)*/
l7:x[jvj+15]=t[x[jvj+15]];
goto l6;
l3:V13=s[V29];
pile[v[22]]=jvj+3; pile[WZ1]=V13; 
(*f[207])( );     /*PLUE2(jvj+3,V13)*/
V29=t[V29];
goto l2;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
