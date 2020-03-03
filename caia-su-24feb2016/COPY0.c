#include "dx.h"
void COPY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V2=0,V8=0,B1=0,B2=0;
int N,X,R,Z,RM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=10573;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2163&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; X=pile[v[22]+1]; R=pile[v[22]+2]; Z=pile[v[22]+3]; RM=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+10)*/
pile[v[22]]=N; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(N,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+19)*/
pile[WZ3]=41; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+22; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+22,jvj+12)*/
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(128,X,jvj+8)*/
x[jvj+50]=x[jvj+8] ;z[jvj+50]=z[jvj+8];
l3:if((x[jvj+50]<=0)) goto l5;
x[jvj+3]=s[x[jvj+50]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+50];
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
V6=x[jvj+4];
x[jvj+49]=x[jvj+8] ;z[jvj+49]=z[jvj+8];
l1:if((x[jvj+49]<=0)) goto l4;
x[jvj+5]=s[x[jvj+49]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+49];
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
V2=x[jvj+6];
if((V2>=V6)) goto l2;
x[jvj+50]=t[x[jvj+50]];
goto l3;
l2:x[jvj+49]=t[x[jvj+49]];
goto l1;
l4:V8=x[jvj+3];
x[jvj+14]=x[jvj+3] ;z[jvj+14]=z[jvj+3];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(128,X,V8)*/
pile[v[22]]=N; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(N,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
(*f[1817])( );     /*NOUV2(B1)*/
B1=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(B2)*/
B2=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10572; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,10572,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=103; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+31; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+9,jvj+31,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-624); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,(-624),jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=103; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+33; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+11,jvj+33,jvj+25)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=103; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+35; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+13,jvj+35,jvj+26)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+39)*/
pile[WZ3]=41; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+42; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+42,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=103; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+38,jvj+37,jvj+27)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=B1; pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,B1,jvj+45)*/
pile[WZ3]=(-608); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=103; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+45,jvj+44,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=B2; pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,B2,jvj+48)*/
pile[WZ3]=(-659); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(100,21,140,(-659),jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=103; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+48,jvj+47,jvj+29)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+23,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=114; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+16,114,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+16,114,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+16,114,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+16,114,jvj+27)*/
pile[WZ1]=113; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+16,113,jvj+28)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+16,113,jvj+29)*/
pile[v[22]]=RM; pile[WZ1]=105; pile[WZ2]=Z; pile[WZ3]=R; pile[WZ4]=jvj+16; 
(*f[1818])( );     /*COPV0(RM,105,Z,R,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=B2; pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(100,21,140,B2,jvj+17)*/
pile[WZ3]=B1; pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,B1,jvj+18)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=N; pile[WZ3]=X; pile[WZ4]=R; pile[WZ5]=Z; pile[v[22]+6]=RM; 
(*f[2204])( );     /*COPY1(jvj+17,jvj+18,N,X,R,Z,RM)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
}
