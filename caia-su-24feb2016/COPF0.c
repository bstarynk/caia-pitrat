#include "dx.h"
void COPF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V=0,V26=0,SS=0,C=0,I=0,V39=0;
int X,RM,S,NV;
int Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=10504;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1986&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; RM=pile[v[22]+1]; S=pile[v[22]+2]; NV=pile[v[22]+3]; Q=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=incon;
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=Q; 
(*f[54])( );     /*TRI1(69,100,Q)*/
pile[v[22]]=101; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,X,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+7; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+7,jvj+12)*/
l6:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,X,jvj+10)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=100; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+27)*/
pile[WZ3]=jvj+10; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=103; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+27,jvj+26,jvj+11)*/
pile[v[22]]=Q; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(Q,108,jvj+11)*/
if(x[jvj+12]!=incon) goto l7;
l8:x[jvj+35]=w[x[jvj+10]][9];
l9:if((x[jvj+35]>0)) goto l10;
x[jvj+36]=w[x[jvj+10]][8];
l12:if((x[jvj+36]<=0)) goto l16;
x[jvj+20]=s[x[jvj+36]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+36];
pile[v[22]]=jvj+20; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(jvj+20,X,jvj+21)*/
x[jvj+37]=x[jvj+21] ;z[jvj+37]=z[jvj+21];
l13:if((x[jvj+37]>0)) goto l14;
x[jvj+36]=t[x[jvj+36]];
goto l12;
l1:pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,X,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V26; pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,96,163,V26,jvj+12)*/
goto l6;
l2:pile[v[22]]=163; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,X,SS)*/
SS=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=SS; pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,96,163,SS,jvj+12)*/
goto l6;
l3:pile[v[22]]=162; pile[WZ1]=X; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(162,X,C)*/
C=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=C; pile[WZ4]=jvj+12; 
(*f[272])( );     /*QUADRI9(100,89,162,C,jvj+12)*/
goto l6;
l4:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,X,I)*/
I=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+12)*/
goto l6;
l5:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,X,jvj+8)*/
if((x[jvj+8]!=1317)) goto l6;
pile[v[22]]=X; pile[WZ1]=1352; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(X,1352,V39,jvj+9)*/
V39=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=1427; pile[WZ2]=1352; pile[WZ3]=V39; pile[WZ4]=jvj+12; 
(*f[271])( );     /*QUADRI8(100,1427,1352,V39,jvj+12)*/
goto l6;
l7:pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
if((x[jvj+30]=w[x[jvj+10]][3])==incon) goto l8;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+29)*/
pile[v[22]]=jvj+13; pile[WZ1]=103; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+13,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+29,jvj+28,jvj+14)*/
pile[v[22]]=Q; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(Q,108,jvj+14)*/
goto l8;
l10:x[jvj+15]=s[x[jvj+35]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+35];
pile[v[22]]=jvj+15; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+15,X,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=RM; pile[WZ2]=S; pile[WZ3]=NV; pile[WZ4]=jvj+17; 
(*f[1823])( );if(v[102]) goto l11;     /*COPE0(jvj+16,RM,S,NV,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+15; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+15,jvj+32)*/
pile[v[22]]=jvj+18; pile[WZ1]=103; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+18,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+32,jvj+31,jvj+19)*/
pile[v[22]]=Q; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(Q,108,jvj+19)*/
l11:x[jvj+35]=t[x[jvj+35]];
goto l9;
l14:x[jvj+2]=s[x[jvj+37]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+37];
pile[v[22]]=jvj+2; pile[WZ1]=RM; pile[WZ2]=S; pile[WZ3]=NV; pile[WZ4]=jvj+22; 
(*f[1823])( );if(v[102]) goto l15;     /*COPE0(jvj+2,RM,S,NV,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=295)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+2,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+5,V19)*/
V19=pile[WZ2]; 
if((x[jvj+6]=w[x[jvj+20]][2])==incon) goto l17;
V=V19;
pile[v[22]]=V; pile[WZ1]=jvj+6; 
(*f[1791])( );     /*DVF0(V,jvj+6)*/
l17:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+20; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+20,jvj+34)*/
pile[v[22]]=jvj+23; pile[WZ1]=103; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+23,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+34,jvj+33,jvj+24)*/
pile[v[22]]=Q; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(Q,108,jvj+24)*/
l15:x[jvj+37]=t[x[jvj+37]];
goto l13;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
}
