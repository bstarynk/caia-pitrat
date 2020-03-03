#include "dx.h"
void COPY1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V2=0,V8=0,B1=0,B2=0;
int W2,W1,N,X,R,Z,RM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=10573;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2204&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
W2=pile[v[22]]; W1=pile[v[22]+1]; N=pile[v[22]+2]; X=pile[v[22]+3]; R=pile[v[22]+4]; Z=pile[v[22]+5]; RM=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=x[W1] ;z[jvj+11]=z[W1];
x[jvj+9]=x[W2] ;z[jvj+9]=z[W2];
l3:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(128,X,jvj+7)*/
x[jvj+43]=x[jvj+7] ;z[jvj+43]=z[jvj+7];
l4:if((x[jvj+43]>0)) goto l5;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; return;
l2:x[jvj+42]=t[x[jvj+42]];
l1:if((x[jvj+42]<=0)) goto l6;
x[jvj+5]=s[x[jvj+42]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+42];
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
V2=x[jvj+6];
if((V2>=V6)) goto l2;
x[jvj+43]=t[x[jvj+43]];
goto l4;
l5:x[jvj+3]=s[x[jvj+43]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+43];
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+3,jvj+4)*/
V6=x[jvj+4];
x[jvj+42]=x[jvj+7] ;z[jvj+42]=z[jvj+7];
goto l1;
l6:V8=x[jvj+3];
x[jvj+13]=x[jvj+3] ;z[jvj+13]=z[jvj+3];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(128,X,V8)*/
pile[v[22]]=N; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(N,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
(*f[1817])( );     /*NOUV2(B1)*/
B1=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(B2)*/
B2=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10572; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,10572,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=103; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+24; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+8,jvj+24,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-624); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-624),jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=103; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+26; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+10,jvj+26,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=103; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+28; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+12,jvj+28,jvj+19)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+32)*/
pile[WZ3]=41; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+35; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+35,jvj+31)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=103; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+31,jvj+30,jvj+20)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=B1; pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,B1,jvj+38)*/
pile[WZ3]=(-608); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=103; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+38,jvj+37,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=B2; pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,B2,jvj+41)*/
pile[WZ3]=(-659); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-659),jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=103; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+41,jvj+40,jvj+22)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+16,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=114; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+15,114,jvj+17)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+15,114,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+15,114,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+15,114,jvj+20)*/
pile[WZ1]=113; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+15,113,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+15,113,jvj+22)*/
pile[v[22]]=RM; pile[WZ1]=105; pile[WZ2]=Z; pile[WZ3]=R; pile[WZ4]=jvj+15; 
(*f[1818])( );     /*COPV0(RM,105,Z,R,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=B2; pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,21,140,B2,jvj+9)*/
pile[WZ3]=B1; pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(100,21,140,B1,jvj+11)*/
goto l3;
}
