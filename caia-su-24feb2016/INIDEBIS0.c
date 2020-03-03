#include "dx.h"
void INIDEBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V26=0,V48=0,V49=0;
int Z;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=11586;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1692&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Z=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=160; pile[WZ1]=Z; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,Z,jvj+2)*/
l1:pile[v[22]]=160; pile[WZ1]=Z; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(160,Z,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+4,jvj+5,jvj+6)*/
l2:if((x[jvj+6]<=0)) goto l4;
x[jvj+40]=s[x[jvj+6]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+6];
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,Z,jvj+29)*/
pile[v[22]]=103; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,Z,jvj+30)*/
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,Z,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+29,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+30,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=246; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(246,Z,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+31,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+32; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+32,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V48; pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(100,21,140,V48,jvj+35)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+33; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+33,jvj+36)*/
pile[v[22]]=0; pile[WZ1]=858; pile[WZ2]=jvj+37; 
(*f[46])( );     /*TRI0(0,858,jvj+37)*/
pile[v[22]]=158; pile[WZ1]=696; pile[WZ2]=642; pile[WZ3]=0; pile[WZ4]=jvj+37; pile[WZ5]=jvj+38; 
(*f[47])( );     /*QUADRI0(158,696,642,0,jvj+37,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=746; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,746,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=319; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,319,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=V49; pile[WZ2]=246; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,V49,246,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+36; pile[WZ2]=111; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+36,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+35; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,jvj+35,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+44; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+34,jvj+44,jvj+45)*/
x[jvj+46]=vo[13];z[jvj+46]=vz[13];
pile[v[22]]=jvj+46; pile[WZ1]=696; pile[WZ2]=jvj+47; 
(*f[1781])( );if(v[102]) goto l3;     /*INSVAL1(jvj+46,696,jvj+47)*/
pile[v[22]]=287; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(287,jvj+47,jvj+48)*/
pile[v[22]]=jvj+45; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+45,120,jvj+48)*/
l8:pile[v[22]]=107; pile[WZ1]=Z; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,Z,jvj+49)*/
if((x[jvj+49]==0)) goto l9;
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; 
(*f[195])( );     /*CPE0(jvj+49,jvj+50)*/
pile[v[22]]=jvj+45; pile[WZ1]=107; pile[WZ2]=jvj+50; 
(*f[34])( );     /*CHGC0(jvj+45,107,jvj+50)*/
l9:pile[v[22]]=jvj+47; pile[WZ1]=287; pile[WZ2]=jvj+45; 
(*f[35])( );     /*CHGC1(jvj+47,287,jvj+45)*/
l3:x[jvj+6]=t[x[jvj+6]];
goto l2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l5:x[jvj+18]=250 ;z[jvj+18]=250;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,Z,jvj+7)*/
pile[v[22]]=103; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,Z,jvj+8)*/
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,Z,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+7,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+8,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=246; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(246,Z,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+9,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+12)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V25; pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,V25,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+11; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+11,jvj+14)*/
pile[v[22]]=0; pile[WZ1]=858; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(0,858,jvj+15)*/
pile[v[22]]=158; pile[WZ1]=696; pile[WZ2]=642; pile[WZ3]=0; pile[WZ4]=jvj+15; pile[WZ5]=jvj+16; 
(*f[47])( );     /*QUADRI0(158,696,642,0,jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=746; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,746,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=319; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,319,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=V26; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,V26,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+14; pile[WZ2]=111; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,jvj+14,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,jvj+13,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+22; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+12,jvj+22,jvj+23)*/
x[jvj+24]=vo[13];z[jvj+24]=vz[13];
pile[v[22]]=jvj+24; pile[WZ1]=696; pile[WZ2]=jvj+25; 
(*f[1781])( );if(v[102]) goto l1;     /*INSVAL1(jvj+24,696,jvj+25)*/
pile[v[22]]=287; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(287,jvj+25,jvj+26)*/
pile[v[22]]=jvj+23; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+23,120,jvj+26)*/
l6:pile[v[22]]=107; pile[WZ1]=Z; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,Z,jvj+27)*/
if((x[jvj+27]==0)) goto l7;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[195])( );     /*CPE0(jvj+27,jvj+28)*/
pile[v[22]]=jvj+23; pile[WZ1]=107; pile[WZ2]=jvj+28; 
(*f[34])( );     /*CHGC0(jvj+23,107,jvj+28)*/
l7:pile[v[22]]=jvj+25; pile[WZ1]=287; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(jvj+25,287,jvj+23)*/
goto l1;
}
