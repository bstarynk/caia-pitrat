#include "dx.h"
void ATOME32T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V21=0,V24=0,T=0,TT=0,V14=0,V15=0,V27=0,V17=0,V16=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20032;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3053&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=472; pile[WZ1]=N; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(472,N,V14)*/
V14=pile[WZ2]; 
if((V14!=1)) goto l7;
pile[v[22]]=473; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(473,N,V15)*/
V15=pile[WZ2]; 
if((V15!=1)) goto l7;
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+13,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=750; pile[WZ1]=N; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(750,N,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=688; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(688,N,V16)*/
V16=pile[WZ2]; 
if((V16!=V17)) goto l7;
pile[v[22]]=N; pile[WZ1]=jvj+14; 
(*f[3032])( );if(v[102]) goto l7;     /*ENSDEP0(N,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[3036])( );if(v[102]) goto l7;     /*VALENS0(jvj+14,jvj+15)*/
x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=N; pile[WZ1]=jvj+8; 
(*f[3033])( );if(v[102]) goto l5;     /*ENSARR0(N,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[3036])( );if(v[102]) goto l5;     /*VALENS0(jvj+8,jvj+9)*/
x[jvj+10]=d[29];z[jvj+10]=0;
l4:if((x[jvj+9]<=0)) goto l5;
TT=s[x[jvj+9]];
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=TT; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,TT,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[196])( );     /*PLUF0(jvj+10,jvj+11,jvj+12)*/
x[jvj+9]=t[x[jvj+9]];
goto l4;
l5:pile[v[22]]=jvj+12; pile[WZ1]=jvj+16; 
(*f[299])( );     /*COPEL0(jvj+12,jvj+16)*/
x[jvj+7]=0 ;z[jvj+7]=0;
V22=r[x[jvj+15]];
V21=(-V22);
pile[v[22]]=436; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,N,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+2,V24)*/
V24=pile[WZ2]; 
x[jvj+3]=d[118];z[jvj+3]=0;
l1:if((x[jvj+15]<=0)) goto l6;
T=s[x[jvj+15]];
x[jvj+4]=incon;
if((V21==41)) goto l8;
if((V21==89)) goto l9;
x[jvj+4]=(-99999998);
l2:x[jvj+15]=t[x[jvj+15]];
goto l1;
l6:pile[v[22]]=jvj+7; pile[WZ1]=jvj+17; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+20)*/
pile[WZ3]=485; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+17; pile[WZ2]=107; pile[WZ3]=jvj+29; 
(*f[301])( );     /*TRI11(jvj+28,jvj+17,107,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+29,22,100,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V16; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V16,jvj+31)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[301])( );     /*TRI11(jvj+34,jvj+16,107,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+35,22,100,jvj+32)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+30,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+32)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+23,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+18,1070,68)*/
pile[WZ1]=1411; 
(*f[35])( );     /*CHGC1(jvj+18,1411,68)*/
pile[v[22]]=101; pile[WZ1]=N; pile[WZ2]=110; pile[WZ3]=(-625); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,N,110,(-625),jvj+40)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V27,858,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3053; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3053,246,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=20032; pile[WZ2]=218; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,20032,218,jvj+39)*/
pile[v[22]]=jvj+40; pile[WZ1]=(-20); pile[WZ2]=jvj+39; pile[WZ3]=159; pile[WZ4]=jvj+41; 
(*f[298])( );     /*TRIENS1(jvj+40,(-20),jvj+39,159,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+41,1,158,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[1296])( );     /*NOUVCONTR0(jvj+18,jvj+19)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l8:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=T; pile[WZ4]=jvj+4; 
(*f[192])( );     /*QUADRI4(100,41,130,T,jvj+4)*/
l3:if((x[jvj+4]==(-99999998))) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V24; pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,V24,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+26; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+5,jvj+26,jvj+6)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[196])( );     /*PLUF0(jvj+3,jvj+6,jvj+7)*/
goto l2;
l9:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=T; pile[WZ4]=jvj+4; 
(*f[272])( );     /*QUADRI9(100,89,162,T,jvj+4)*/
goto l3;
}
