#include "dx.h"
void DEG20(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V63=0,V62=0,V61=0,V38=0,V37=0,V36=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=66;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+49]=incon;
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
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+50)*/
pile[WZ3]=52; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+64; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+64,jvj+51)*/
pile[WZ2]=111; pile[WZ3]=jvj+50; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+50,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+4)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+51)*/
l24:pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[887])( );     /*VARND0(jvj+30,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[B]) goto l25;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
l29:pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+30,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]==485)) goto l30;
if((x[jvj+42]!=486)) goto l33;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+46; 
(*f[887])( );     /*VARND0(jvj+30,jvj+46)*/
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==x[B]) goto l32;
l33:if(x[R]==incon) goto l34;
l36:v[0]=jvj; v[22]-=3; return;
l1:x[jvj+30]=x[A] ;z[jvj+30]=z[A];
goto l24;
l3:x[jvj+7]=s[x[jvj+44]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+44];
pile[v[22]]=B; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[3841])( );     /*DEG20(B,jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+44]=t[x[jvj+44]];
l2:if((x[jvj+44]>0)) goto l3;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+45; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=111; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(jvj+57,111,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+45; pile[WZ2]=107; pile[WZ3]=jvj+59; 
(*f[301])( );     /*TRI11(jvj+58,jvj+45,107,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+59,22,100,jvj+49)*/
goto l33;
l5:x[jvj+10]=s[x[jvj+65]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+65];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[B]) goto l6;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+10)*/
l6:x[jvj+65]=t[x[jvj+65]];
l4:if((x[jvj+65]>0)) goto l5;
for(i=x[jvj+12],V36=0;i>0;i=t[i],V36++)  ;
if((V36!=V37)) goto l33;
x[jvj+16]=0 ;z[jvj+16]=0;
l7:if((x[jvj+47]>0)) goto l8;
x[jvj+17]=0 ;z[jvj+17]=0;
l11:if((x[jvj+12]<=0)) goto l12;
x[jvj+18]=s[x[jvj+12]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+12];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+18)*/
x[jvj+12]=t[x[jvj+12]];
goto l11;
l8:x[jvj+13]=s[x[jvj+47]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+47];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(jvj+13,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[B]) goto l10;
l9:x[jvj+47]=t[x[jvj+47]];
goto l7;
l10:pile[v[22]]=B; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[3841])( );     /*DEG20(B,jvj+13,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
goto l9;
l13:x[jvj+19]=s[x[jvj+16]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+19)*/
x[jvj+16]=t[x[jvj+16]];
l12:if((x[jvj+16]>0)) goto l13;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+48; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+48; pile[WZ2]=107; pile[WZ3]=jvj+62; 
(*f[301])( );     /*TRI11(jvj+61,jvj+48,107,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+62,22,100,jvj+49)*/
goto l33;
l15:x[jvj+20]=s[x[jvj+66]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+66];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[887])( );     /*VARND0(jvj+20,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==x[B]) goto l16;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+20)*/
l16:x[jvj+66]=t[x[jvj+66]];
l14:if((x[jvj+66]>0)) goto l15;
for(i=x[jvj+22],V61=0;i>0;i=t[i],V61++)  ;
if((V61!=V62)) goto l29;
x[jvj+26]=0 ;z[jvj+26]=0;
l17:if((x[jvj+39]>0)) goto l18;
x[jvj+27]=0 ;z[jvj+27]=0;
l21:if((x[jvj+22]<=0)) goto l22;
x[jvj+28]=s[x[jvj+22]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+22];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+27,jvj+28)*/
x[jvj+22]=t[x[jvj+22]];
goto l21;
l18:x[jvj+23]=s[x[jvj+39]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+39];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[887])( );     /*VARND0(jvj+23,jvj+24)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==x[B]) goto l20;
l19:x[jvj+39]=t[x[jvj+39]];
goto l17;
l20:pile[v[22]]=B; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[3842])( );     /*DEG10(B,jvj+23,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+25)*/
goto l19;
l23:x[jvj+29]=s[x[jvj+26]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+27,jvj+29)*/
x[jvj+26]=t[x[jvj+26]];
l22:if((x[jvj+26]>0)) goto l23;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+40; 
(*f[299])( );     /*COPEL0(jvj+27,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+40; pile[WZ2]=107; pile[WZ3]=jvj+56; 
(*f[301])( );     /*TRI11(jvj+55,jvj+40,107,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+56,22,100,R)*/
goto l29;
l25:for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[B]) goto l26;
goto l29;
l26:pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+30,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]==596)) goto l27;
if((x[jvj+33]==52)) goto l28;
if((x[jvj+33]!=486)) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+39)*/
for(i=x[jvj+39],V63=0;i>0;i=t[i],V63++)  ;
V62=V63-2;
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+66]=x[jvj+39] ;z[jvj+66]=z[jvj+39];
goto l14;
l27:pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+30,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=484)) goto l29;
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,1,R)*/
goto l29;
l28:pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+30,jvj+36)*/
pile[v[22]]=B; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[3841])( );     /*DEG20(B,jvj+36,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+53; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+53,R)*/
goto l29;
l30:pile[v[22]]=jvj+30; pile[WZ1]=jvj+43; 
(*f[887])( );     /*VARND0(jvj+30,jvj+43)*/
for(a=x[jvj+43];a>0;a=t[a]) if(s[a]==x[B]) goto l31;
goto l33;
l31:pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+44)*/
x[jvj+9]=0 ;z[jvj+9]=0;
goto l2;
l32:pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+47)*/
for(i=x[jvj+47],V38=0;i>0;i=t[i],V38++)  ;
V37=V38-1;
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+65]=x[jvj+47] ;z[jvj+65]=z[jvj+47];
goto l4;
l34:if(x[jvj+49]!=incon) goto l35;
l37:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l36;
l35:pile[v[22]]=jvj+49; pile[WZ1]=R; 
(*f[965])( );if(v[102]) goto l37;     /*NORM0(jvj+49,R)*/
goto l36;
}
