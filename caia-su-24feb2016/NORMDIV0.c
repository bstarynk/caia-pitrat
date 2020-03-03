#include "dx.h"
void NORMDIV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V53=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,A,jvj+7)*/
if((x[jvj+7]==41)) goto l6;
if((x[jvj+7]==484)) goto l7;
if((x[jvj+7]!=22)) goto l12;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,A,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==52)) goto l9;
pile[v[22]]=118; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(118,jvj+10,V38)*/
V38=pile[WZ2]; 
if((V38!=1)) goto l8;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,A,jvj+11)*/
pile[v[22]]=B; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[1971])( );if(v[102]) goto l8;     /*NORMDIV0(B,jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+33; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+33,R)*/
l15:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+21]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+21];
pile[v[22]]=B; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[1971])( );if(v[102]) goto l3;     /*NORMDIV0(B,jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
l3:x[jvj+21]=t[x[jvj+21]];
l1:if((x[jvj+21]>0)) goto l2;
x[jvj+6]=0 ;z[jvj+6]=0;
l4:if((x[jvj+3]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+6,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+39,22,100,R)*/
goto l15;
l5:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l4;
l6:x[R]=x[A] ;z[R]=z[A];
goto l15;
l7:pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(A,B,jvj+8)*/
if((x[jvj+8]==134)) goto l6;
if((x[jvj+8]==135)) goto l16;
l12:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,A,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==52)) goto l13;
if((x[jvj+23]!=596)) goto l14;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,A,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,A,jvj+29)*/
pile[v[22]]=B; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[1971])( );if(v[102]) goto l14;     /*NORMDIV0(B,jvj+29,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,jvj+28,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+44; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+44,R)*/
goto l15;
l8:if((x[jvj+10]!=596)) goto l9;
l10:pile[v[22]]=1675; pile[WZ1]=1714; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1675,1714,jvj+20)*/
for(a=x[jvj+20];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l11;
goto l12;
l9:pile[v[22]]=118; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(118,jvj+10,V53)*/
V53=pile[WZ2]; 
if((V53!=2)) goto l10;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,A,jvj+14)*/
pile[v[22]]=B; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1971])( );if(v[102]) goto l10;     /*NORMDIV0(B,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,A,jvj+17)*/
pile[v[22]]=B; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[1971])( );if(v[102]) goto l10;     /*NORMDIV0(B,jvj+17,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,jvj+19,103,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+36; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+36,R)*/
goto l15;
l11:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,A,jvj+21)*/
x[jvj+3]=0 ;z[jvj+3]=0;
goto l1;
l13:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,A,jvj+24)*/
pile[v[22]]=B; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[1971])( );if(v[102]) goto l14;     /*NORMDIV0(B,jvj+24,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+41; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+41,R)*/
goto l15;
l14:v[0]=jvj; v[22]-=3; v[102]=1;return;
l16:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l15;
}
