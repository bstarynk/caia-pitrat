#include "dx.h"
void SQUELCOND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int FF=0;
int X,A;
int RS;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=51;
x[jvj+1]=10922;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==534&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; A=pile[v[22]+1]; RS=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,X,jvj+17)*/
if((x[jvj+17]!=22)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,X,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+18,jvj+19)*/
if(x[jvj+19]!=55&&x[jvj+19]!=48&&x[jvj+19]!=50&&x[jvj+19]!=54) goto l12;
pile[v[22]]=A; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[492])( );     /*FIGURE0(A,X,jvj+20)*/
if((x[jvj+20]==135)) goto l11;
l12:if(x[jvj+19]!=25&&x[jvj+19]!=26&&x[jvj+19]!=29&&x[jvj+19]!=30&&x[jvj+19]!=27&&x[jvj+19]!=28&&x[jvj+19]!=625&&x[jvj+19]!=44&&x[jvj+19]!=45&&x[jvj+19]!=278&&x[jvj+19]!=910) goto l15;
if((x[jvj+19]!=25)) goto l13;
x[jvj+2]=d[20];z[jvj+2]=0;
l1:if((x[jvj+2]<=0)) goto l13;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=268; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+4,X,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
FF=x[jvj+8];
if(FF==267||FF==1272||FF==156) goto l15;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+9]=s[x[jvj+21]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+21];
pile[v[22]]=jvj+9; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[534])( );if(v[102]) goto l5;     /*SQUELCOND0(jvj+9,A,jvj+10)*/
pile[v[22]]=A; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[492])( );     /*FIGURE0(A,jvj+9,jvj+11)*/
if((x[jvj+11]==135)) goto l6;
l5:x[jvj+21]=t[x[jvj+21]];
l3:if((x[jvj+21]>0)) goto l4;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+22; 
(*f[299])( );     /*COPEL0(jvj+12,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+22; pile[WZ2]=107; pile[WZ3]=jvj+42; 
(*f[301])( );     /*TRI11(jvj+41,jvj+22,107,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RS; 
(*f[58])( );     /*TRI3(jvj+42,22,100,RS)*/
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l6:pile[v[22]]=jvj+12; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+10)*/
goto l5;
l8:x[jvj+13]=s[x[jvj+51]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+51];
pile[v[22]]=jvj+13; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[534])( );if(v[102]) goto l9;     /*SQUELCOND0(jvj+13,A,jvj+14)*/
pile[v[22]]=A; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[492])( );     /*FIGURE0(A,jvj+13,jvj+15)*/
if((x[jvj+15]==135)) goto l10;
l9:x[jvj+51]=t[x[jvj+51]];
l7:if((x[jvj+51]>0)) goto l8;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+35; 
(*f[299])( );     /*COPEL0(jvj+16,jvj+35)*/
pile[v[22]]=jvj+28; pile[WZ1]=X; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+28,X,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+37)*/
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+30,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+43)*/
pile[WZ3]=jvj+50; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+50,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+35; pile[WZ2]=107; pile[WZ3]=jvj+49; 
(*f[301])( );     /*TRI11(jvj+48,jvj+35,107,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+49; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+49,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+46; pile[WZ5]=RS; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+46,RS)*/
goto l20;
l10:pile[v[22]]=jvj+16; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+14)*/
goto l9;
l11:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,X,jvj+21)*/
x[jvj+12]=0 ;z[jvj+12]=0;
goto l3;
l13:pile[v[22]]=A; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[492])( );     /*FIGURE0(A,X,jvj+23)*/
if((x[jvj+23]==135)) goto l14;
l15:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,X,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=25)) goto l19;
pile[v[22]]=A; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[492])( );     /*FIGURE0(A,X,jvj+26)*/
if((x[jvj+26]==135)) goto l17;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l14:x[RS]=x[X] ;z[RS]=z[X];
goto l20;
l17:x[jvj+27]=d[20];z[jvj+27]=0;
l16:if((x[jvj+27]<=0)) goto l19;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=268; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(268,jvj+28,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=X; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+29,X,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=22)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+30,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+32,jvj+33)*/
x[jvj+50]=x[jvj+33] ;z[jvj+50]=z[jvj+33];
if(x[jvj+50]!=267&&x[jvj+50]!=1272&&x[jvj+50]!=156) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+34)*/
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+51]=x[jvj+34] ;z[jvj+51]=z[jvj+34];
goto l7;
l18:x[jvj+27]=t[x[jvj+27]];
goto l16;
}
