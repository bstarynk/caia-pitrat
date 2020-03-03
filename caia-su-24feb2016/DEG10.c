#include "dx.h"
void DEG10(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V16=0,V15=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+36]=incon;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=25)) goto l1;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,A,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+37)*/
pile[WZ3]=52; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+48; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+48,jvj+38)*/
pile[WZ2]=111; pile[WZ3]=jvj+37; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+37,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=107; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+4)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+38)*/
l13:pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[887])( );     /*VARND0(jvj+21,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[B]) goto l14;
l25:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
l17:pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+21,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]==485)) goto l18;
if((x[jvj+30]!=486)) goto l21;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+34; 
(*f[887])( );     /*VARND0(jvj+21,jvj+34)*/
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==x[B]) goto l20;
l21:if(x[R]==incon) goto l22;
l24:v[0]=jvj; v[22]-=3; return;
l1:x[jvj+21]=x[A] ;z[jvj+21]=z[A];
goto l13;
l3:pile[v[22]]=B; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[3842])( );     /*DEG10(B,jvj+7,jvj+9)*/
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+9)*/
l7:if((x[jvj+12]>0)) goto l8;
x[jvj+17]=0 ;z[jvj+17]=0;
l9:if((x[jvj+13]>0)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+17; pile[WZ2]=107; pile[WZ3]=jvj+46; 
(*f[301])( );     /*TRI11(jvj+45,jvj+17,107,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+46,22,100,jvj+36)*/
goto l21;
l5:x[jvj+10]=s[x[jvj+49]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+49];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[B]) goto l6;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+10)*/
l6:x[jvj+49]=t[x[jvj+49]];
l4:if((x[jvj+49]>0)) goto l5;
for(i=x[jvj+12],V15=0;i>0;i=t[i],V15++)  ;
if((V15==V16)) goto l2;
goto l21;
l8:x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
x[jvj+12]=t[x[jvj+12]];
goto l7;
l10:x[jvj+15]=s[x[jvj+13]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+13];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+16)*/
x[jvj+13]=t[x[jvj+13]];
goto l9;
l12:x[jvj+18]=s[x[jvj+32]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+32];
pile[v[22]]=B; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[3842])( );     /*DEG10(B,jvj+18,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+19)*/
x[jvj+32]=t[x[jvj+32]];
l11:if((x[jvj+32]>0)) goto l12;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+33; 
(*f[299])( );     /*COPEL0(jvj+20,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+33; pile[WZ2]=107; pile[WZ3]=jvj+43; 
(*f[301])( );     /*TRI11(jvj+42,jvj+33,107,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+43,22,100,jvj+36)*/
goto l21;
l14:for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[B]) goto l15;
goto l17;
l15:pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+21,jvj+23)*/
if((x[jvj+23]!=484)) goto l16;
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,1,R)*/
goto l17;
l16:pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+21,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]==596)) goto l25;
if((x[jvj+25]!=52)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+21,jvj+26)*/
pile[v[22]]=B; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[3842])( );     /*DEG10(B,jvj+26,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+40; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+40,R)*/
goto l17;
l18:pile[v[22]]=jvj+21; pile[WZ1]=jvj+31; 
(*f[887])( );     /*VARND0(jvj+21,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[B]) goto l19;
goto l21;
l19:pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+32)*/
x[jvj+20]=0 ;z[jvj+20]=0;
goto l11;
l20:pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+35)*/
for(i=x[jvj+35],V17=0;i>0;i=t[i],V17++)  ;
V16=V17-1;
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+49]=x[jvj+35] ;z[jvj+49]=z[jvj+35];
goto l4;
l22:if(x[jvj+36]!=incon) goto l23;
l26:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l24;
l23:pile[v[22]]=jvj+36; pile[WZ1]=R; 
(*f[965])( );if(v[102]) goto l26;     /*NORM0(jvj+36,R)*/
goto l24;
l2:if((x[jvj+35]<=0)) goto l21;
x[jvj+7]=s[x[jvj+35]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+35];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(jvj+7,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[B]) goto l3;
x[jvj+35]=t[x[jvj+35]];
goto l2;
}
