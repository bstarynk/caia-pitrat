#include "dx.h"
void ATOME34T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V20=0,V3=0,V5=0,V4=0,V6=0,PP=0,QQ=0,V47=0,V48=0,V49=0,V50=0,V56=0,V55=0,V54=0,V57=0,V62=0,V63=0,V65=0,V61=0,V59=0,V58=0,V53=0,V51=0,V52=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=20034;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3226&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=625)) goto l2;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(160,R,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+7,V17)*/
V17=pile[WZ2]; 
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+8,jvj+9)*/
pile[v[22]]=1182; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1182,jvj+9,jvj+10)*/
if((68!=x[jvj+10])) goto l2;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+11,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,R,jvj+12)*/
pile[v[22]]=jvj+12; 
(*f[1161])( );if(v[102]) goto l2;     /*INF0(jvj+12,V3)*/
V3=pile[WZ1]; 
(*f[1160])( );if(v[102]) goto l2;     /*SUP0(jvj+12,V5)*/
V5=pile[WZ1]; 
pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,R,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[1161])( );if(v[102]) goto l2;     /*INF0(jvj+14,V4)*/
V4=pile[WZ1]; 
(*f[1160])( );if(v[102]) goto l2;     /*SUP0(jvj+14,V6)*/
V6=pile[WZ1]; 
V47=V5-V3;
if((V47>=V17)) goto l2;
V48=V6-V4;
if((V48>=V17)) goto l2;
V49=V4-V3;
V50=V49;
if((V50>=0)) goto l7;
V56=(-V50);
V55=V56/V17;
V54=V55*V17;
V57=V54;
V62=V6+V57;
if((V62>V5)) goto l2;
V63=V4+V57;
if((V63>=V3)) goto l8;
if((V5>V62)) goto l2;
V65=V4+V57;
if((V3<V65)) goto l2;
PP=0;
l4:QQ=V57;
l1:pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+18)*/
pile[WZ3]=485; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=PP; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+24)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+13)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=QQ; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,QQ,jvj+26)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+25,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=107; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+15)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+26)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+4)*/
pile[v[22]]=1070; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1070,R,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+4,1070,jvj+3)*/
l3:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+31)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+27; 
(*f[46])( );     /*TRI0(V20,858,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3226; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3226,246,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=20034; pile[WZ2]=218; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,20034,218,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=(-20); pile[WZ2]=jvj+30; pile[WZ3]=159; pile[WZ4]=jvj+32; 
(*f[298])( );     /*TRIENS1(jvj+31,(-20),jvj+30,159,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+32,1,158,jvj+16)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+16; 
(*f[1296])( );     /*NOUVCONTR0(jvj+4,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V20,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3226; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3226,246,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=20034; pile[WZ2]=218; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,20034,218,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=(-20); pile[WZ2]=jvj+36; pile[WZ3]=159; pile[WZ4]=jvj+38; 
(*f[298])( );     /*TRIENS1(jvj+37,(-20),jvj+36,159,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+38,1,158,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=R; 
(*f[966])( );     /*ELIMINE0(jvj+17,R)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l6:PP=V53;
l5:QQ=0;
goto l1;
l7:V52=V50/V17;
V51=V52*V17;
V53=V51;
V58=V5+V53;
if((V6>V58)) goto l2;
V59=V3+V53;
if((V4>=V59)) goto l6;
if((V58>V6)) goto l2;
V61=V3+V53;
if((V61<V3)) goto l2;
PP=V53;
goto l5;
l8:PP=0;
goto l4;
}
