#include "dx.h"
void ATOME103T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V29=0,I=0,V34=0,V42=0,V44=0,V46=0,V41=0,V43=0,V45=0,V33=0,V17=0,V31=0,V7=0,P=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=20103;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3509&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=408)) goto l8;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,R,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+7,jvj+17)*/
if((x[jvj+17]!=484)) goto l8;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l8;     /*NDD0(jvj+7,jvj+18)*/
if((x[D]!=x[jvj+18])) goto l8;
x[jvj+19]=vo[16];z[jvj+19]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+19,jvj+20)*/
pile[v[22]]=1182; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+20,jvj+21)*/
if((68!=x[jvj+21])) goto l8;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(280,D,V17)*/
V17=pile[WZ2]; 
if((V17<=0)) goto l8;
x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+22,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,R,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[1161])( );if(v[102]) goto l8;     /*INF0(jvj+3,V7)*/
V7=pile[WZ1]; 
if((V7<=0)) goto l8;
pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=548; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,548,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+31; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+31,jvj+24)*/
pile[v[22]]=jvj+3; pile[WZ1]=D; pile[WZ2]=27; pile[WZ3]=jvj+24; pile[WZ4]=102; pile[WZ5]=jvj+4; 
(*f[3510])( );if(v[102]) goto l8;     /*BORNINC0(jvj+3,D,27,jvj+24,102,jvj+4)*/
pile[v[22]]=129; pile[WZ1]=jvj+4; pile[WZ2]=jvj+25; 
(*f[1157])( );if(v[102]) goto l8;     /*NORME1(129,jvj+4,jvj+25)*/
pile[v[22]]=D; pile[WZ1]=jvj+25; pile[WZ2]=27; pile[WZ3]=jvj+26; 
(*f[3511])( );if(v[102]) goto l8;     /*DIVFACTEURA0(D,jvj+25,27,jvj+26)*/
pile[v[22]]=129; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[1157])( );if(v[102]) goto l8;     /*NORME1(129,jvj+26,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+27,P)*/
P=pile[WZ2]; 
x[jvj+11]=0 ;z[jvj+11]=0;
V13=incon;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l1;
V29=P-1;
V13=V29;
l2:pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
x[jvj+9]=d[76];z[jvj+9]=0;
I=1;
l3:if((I<=V13)) goto l9;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+28; 
(*f[299])( );     /*COPEL0(jvj+11,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+28; pile[WZ2]=107; pile[WZ3]=jvj+34; 
(*f[301])( );     /*TRI11(jvj+33,jvj+28,107,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+34,22,100,jvj+13)*/
pile[v[22]]=1338; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1338,R,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=1338; 
(*f[35])( );     /*CHGC1(jvj+13,1338,jvj+12)*/
l7:pile[v[22]]=1189; pile[WZ1]=jvj+19; 
(*f[71])( );     /*ENLV0(1189,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+44)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+45)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V31,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3509; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3509,246,jvj+43)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20103; pile[WZ4]=jvj+43; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(158,1,218,20103,jvj+43,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=159; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+29,159,jvj+44)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+29,159,jvj+45)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+29; 
(*f[1296])( );     /*NOUVCONTR0(jvj+13,jvj+29)*/
V33=g[618];
if((V33<=0)) goto l8;
V34=vg[618];
if((V34!=0)) goto l4;
if((V33<3)) goto l6;
l4:pile[v[22]]=618; pile[WZ1]=20103; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=R; pile[WZ5]=(-656); pile[v[22]+6]=D; pile[v[22]+7]=(-706); pile[v[22]+8]=jvj+13; pile[v[22]+9]=jvj+14; 
(*f[188])( );     /*INTERP1(618,20103,0,(-601),R,(-656),D,(-706),jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l5;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:V13=P;
goto l2;
l5:if((V33<4)) goto l6;
goto l8;
l6:V42=x[R];
V44=x[D];
V46=x[jvj+13];
pile[v[22]]=20; pile[WZ1]=V42; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V42,0,V41)*/
V41=pile[WZ3]; 
pile[WZ1]=V44; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(20,V44,V41,V43)*/
V43=pile[WZ3]; 
pile[WZ1]=V46; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,V46,V43,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
if((V33!=2)) goto l8;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l8;
l9:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+35)*/
pile[WZ3]=486; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+40)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+39; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+39,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=107; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+40)*/
pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+8)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=103; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,103,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+38; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+38,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+10,jvj+11)*/
I++;
goto l3;
}
