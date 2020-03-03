#include "dx.h"
void ISLAZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V=0,VA=0,V10=0,V14=0,V26=0;
int S,W,AT,M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=48;
x[jvj+1]=10242;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2013&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; W=pile[v[22]+1]; AT=pile[v[22]+2]; M=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=M; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,M,jvj+2)*/
if(x[jvj+2]!=96&&x[jvj+2]!=89&&x[jvj+2]!=41&&x[jvj+2]!=20&&x[jvj+2]!=128&&x[jvj+2]!=570&&x[jvj+2]!=1317) goto l1;
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=M; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(M,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10546; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,10546,jvj+13)*/
pile[WZ3]=AT; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,AT,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=103; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+19,jvj+18,jvj+14)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V4; pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,V4,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=103; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+21; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+3,jvj+21,jvj+15)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+24)*/
pile[WZ3]=(-596); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=103; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+24,jvj+23,jvj+16)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+13,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=114; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+4,114,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+4,114,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+4,114,jvj+16)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+4,S)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
l1:pile[v[22]]=140; pile[WZ1]=M; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,M,VA)*/
VA=pile[WZ2]; 
x[jvj+5]=vo[15];z[jvj+5]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(283,jvj+5,jvj+6)*/
pile[v[22]]=M; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(M,jvj+7)*/
l2:if((x[jvj+6]<=0)) goto l5;
x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+8,V10)*/
V10=pile[WZ2]; 
if((V10!=VA)) goto l3;
pile[v[22]]=158; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+8,jvj+9)*/
if((x[jvj+9]!=23)) goto l4;
if((x[jvj+11]=w[x[AT]][2])==incon) goto l3;
pile[v[22]]=190; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(190,jvj+11,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10352; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,10352,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V26; pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,V26,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=103; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+42; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+7,jvj+42,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+45)*/
pile[WZ3]=(-596); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=103; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+45,jvj+44,jvj+39)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=AT; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,AT,jvj+48)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=103; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+48,jvj+47,jvj+40)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+37; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+37,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=114; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+12,114,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+12,114,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+12,114,jvj+40)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+12,S)*/
l3:x[jvj+6]=t[x[jvj+6]];
goto l2;
l4:pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+9,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10546; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,10546,jvj+25)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+31)*/
pile[WZ3]=(-596); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=103; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+31,jvj+30,jvj+26)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V14; pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,V14,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=103; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+33; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+7,jvj+33,jvj+27)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=AT; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,AT,jvj+36)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=103; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+36,jvj+35,jvj+28)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+25,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=114; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+10,114,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+10,114,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+10,114,jvj+28)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+10,S)*/
goto l3;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
