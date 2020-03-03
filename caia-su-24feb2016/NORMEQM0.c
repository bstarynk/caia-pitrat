#include "dx.h"
void NORMEQM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V40=0,V55=0,V70=0,V25=0,V24=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=53;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,A,jvj+7)*/
if((x[jvj+7]==484)) goto l6;
if((x[jvj+7]!=22)) goto l12;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,A,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==52)) goto l8;
pile[v[22]]=118; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(118,jvj+9,V40)*/
V40=pile[WZ2]; 
if((V40!=1)) goto l7;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,A,jvj+10)*/
pile[v[22]]=B; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1968])( );if(v[102]) goto l7;     /*NORMEQM0(B,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+39; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+39,R)*/
l16:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+27]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+27];
pile[v[22]]=B; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[1968])( );if(v[102]) goto l3;     /*NORMEQM0(B,jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
l3:x[jvj+27]=t[x[jvj+27]];
l1:if((x[jvj+27]>0)) goto l2;
x[jvj+6]=0 ;z[jvj+6]=0;
l4:if((x[jvj+3]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+48; 
(*f[301])( );     /*TRI11(jvj+47,jvj+6,107,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+48,22,100,R)*/
goto l16;
l5:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l4;
l6:x[R]=x[A] ;z[R]=z[A];
goto l16;
l7:if((x[jvj+9]!=596)) goto l8;
l9:pile[v[22]]=118; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(118,jvj+9,V70)*/
V70=pile[WZ2]; 
if((V70!=3)) goto l10;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,A,jvj+19)*/
pile[v[22]]=102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,A,jvj+20)*/
pile[v[22]]=B; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[1968])( );if(v[102]) goto l10;     /*NORMEQM0(B,jvj+20,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,A,jvj+23)*/
pile[v[22]]=B; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[1968])( );if(v[102]) goto l10;     /*NORMEQM0(B,jvj+23,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,jvj+25,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+45; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+45,R)*/
goto l16;
l8:pile[v[22]]=118; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(118,jvj+9,V55)*/
V55=pile[WZ2]; 
if((V55!=2)) goto l9;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+13)*/
pile[v[22]]=B; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1968])( );if(v[102]) goto l9;     /*NORMEQM0(B,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,A,jvj+16)*/
pile[v[22]]=B; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[1968])( );if(v[102]) goto l9;     /*NORMEQM0(B,jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,jvj+18,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+42; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+42,R)*/
goto l16;
l10:pile[v[22]]=1675; pile[WZ1]=1714; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1675,1714,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l11;
l12:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,A,V25)*/
V25=pile[WZ2]; 
V24=V25%B;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,R)*/
goto l16;
l11:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,A,jvj+27)*/
x[jvj+3]=0 ;z[jvj+3]=0;
goto l1;
l13:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,A,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]==52)) goto l14;
if((x[jvj+29]!=596)) goto l15;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,A,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+33,jvj+34)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,A,jvj+35)*/
pile[v[22]]=B; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[1968])( );if(v[102]) goto l15;     /*NORMEQM0(B,jvj+35,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+52,jvj+34,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+53; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+53,R)*/
goto l16;
l14:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,A,jvj+30)*/
pile[v[22]]=B; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[1968])( );if(v[102]) goto l15;     /*NORMEQM0(B,jvj+30,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+31,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+50; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+50,R)*/
goto l16;
l15:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
