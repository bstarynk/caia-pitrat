#include "dx.h"
void ISOLARITHA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V42=0,V3=0;
int D,X,Y,Z;
int A,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=67;
x[jvj+1]=11307;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4025&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; Z=pile[v[22]+3]; A=pile[v[22]+4]; B=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=x[Y] ;z[jvj+7]=z[Y];
x[jvj+2]=x[X] ;z[jvj+2]=z[X];
l5:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=484)) goto l7;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+2,jvj+4)*/
for(i=x[jvj+4],V3=0;i>0;i=t[i],V3++)  ;
if((V3!=1)) goto l7;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[D]) goto l6;
l7:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==52)) goto l8;
if((x[jvj+6]==486)) goto l9;
if((x[jvj+6]!=485)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+21)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+22)*/
pile[v[22]]=Z; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(Z,jvj+23)*/
x[jvj+61]=x[jvj+21] ;z[jvj+61]=z[jvj+21];
l13:if((x[jvj+61]<=0)) goto l17;
x[jvj+24]=s[x[jvj+61]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+61];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+24,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[D]) goto l28;
l14:x[jvj+61]=t[x[jvj+61]];
goto l13;
l2:x[jvj+36]=x[jvj+58] ;z[jvj+36]=z[jvj+58];
l15:x[jvj+28]=x[jvj+36] ;z[jvj+28]=z[jvj+36];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+44)*/
pile[WZ3]=52; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+46)*/
pile[WZ3]=486; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+49)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+49,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+48,107,jvj+23)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+48,107,jvj+29)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+47,jvj+45)*/
pile[WZ2]=111; pile[WZ3]=jvj+44; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+44,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+22)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+45)*/
pile[v[22]]=D; pile[WZ1]=jvj+24; pile[WZ2]=jvj+30; pile[WZ3]=Z; pile[WZ4]=jvj+31; pile[WZ5]=jvj+32; 
(*f[4025])( );if(v[102]) goto l14;     /*ISOLARITHA0(D,jvj+24,jvj+30,Z,jvj+31,jvj+32)*/
x[A]=x[jvj+31] ;z[A]=z[jvj+31];
x[B]=x[jvj+32] ;z[B]=z[jvj+32];
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; v[102]=0;return;
l4:x[jvj+40]=x[jvj+59] ;z[jvj+40]=z[jvj+59];
l12:x[jvj+16]=x[jvj+40] ;z[jvj+16]=z[jvj+40];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+43)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+43; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+43,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=107; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+18,107,jvj+11)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+18,107,jvj+17)*/
pile[v[22]]=D; pile[WZ1]=jvj+12; pile[WZ2]=jvj+7; pile[WZ3]=jvj+18; pile[WZ4]=jvj+19; pile[WZ5]=jvj+20; 
(*f[4025])( );if(v[102]) goto l11;     /*ISOLARITHA0(D,jvj+12,jvj+7,jvj+18,jvj+19,jvj+20)*/
x[A]=x[jvj+19] ;z[A]=z[jvj+19];
x[B]=x[jvj+20] ;z[B]=z[jvj+20];
goto l18;
l6:x[A]=x[jvj+7] ;z[A]=z[jvj+7];
x[B]=x[Z] ;z[B]=z[Z];
goto l18;
l8:pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+2,jvj+9)*/
x[jvj+2]=x[jvj+9] ;z[jvj+2]=z[jvj+9];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+42; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+42,jvj+7)*/
goto l5;
l9:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+10)*/
pile[v[22]]=Z; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(Z,jvj+11)*/
x[jvj+60]=x[jvj+10] ;z[jvj+60]=z[jvj+10];
l10:if((x[jvj+60]<=0)) goto l17;
x[jvj+12]=s[x[jvj+60]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+60];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[887])( );     /*VARND0(jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[D]) goto l21;
l11:x[jvj+60]=t[x[jvj+60]];
goto l10;
l17:x[A]=x[B]=incon;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
l19:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+27; pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[301])( );     /*TRI11(jvj+34,jvj+27,107,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,22,100,jvj+36)*/
goto l15;
l20:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+15; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+15,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+39,22,100,jvj+40)*/
goto l12;
l21:x[jvj+62]=x[jvj+10] ;z[jvj+62]=z[jvj+10];
l22:if((x[jvj+62]>0)) goto l23;
goto l11;
l23:x[jvj+50]=s[x[jvj+62]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+62];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+12; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+50,jvj+12,jvj+51)*/
if((x[jvj+51]==135)) goto l24;
x[jvj+62]=t[x[jvj+62]];
goto l22;
l24:x[jvj+52]=0 ;z[jvj+52]=0;
x[jvj+63]=x[jvj+10] ;z[jvj+63]=z[jvj+10];
l25:if((x[jvj+63]>0)) goto l26;
x[jvj+14]=x[jvj+52] ;z[jvj+14]=z[jvj+52];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[299])( );     /*COPEL0(jvj+14,jvj+15)*/
x[jvj+40]=incon;
for(i=x[jvj+10],V42=0;i>0;i=t[i],V42++)  ;
if((V42!=2)) goto l20;
x[jvj+67]=x[jvj+10] ;z[jvj+67]=z[jvj+10];
l3:if((x[jvj+67]<=0)) goto l20;
x[jvj+59]=s[x[jvj+67]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+67];
if((x[jvj+59]!=x[jvj+12])) goto l4;
x[jvj+67]=t[x[jvj+67]];
goto l3;
l26:x[jvj+53]=s[x[jvj+63]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+63];
if((x[jvj+53]==x[jvj+50])) goto l27;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[68])( );     /*PLUE0(jvj+52,jvj+53)*/
l27:x[jvj+63]=t[x[jvj+63]];
goto l25;
l28:x[jvj+64]=x[jvj+21] ;z[jvj+64]=z[jvj+21];
l29:if((x[jvj+64]>0)) goto l30;
goto l14;
l30:x[jvj+54]=s[x[jvj+64]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+64];
pile[v[22]]=jvj+54; pile[WZ1]=jvj+24; pile[WZ2]=jvj+55; 
(*f[760])( );     /*MEMEX0(jvj+54,jvj+24,jvj+55)*/
if((x[jvj+55]==135)) goto l31;
x[jvj+64]=t[x[jvj+64]];
goto l29;
l31:x[jvj+56]=0 ;z[jvj+56]=0;
x[jvj+65]=x[jvj+21] ;z[jvj+65]=z[jvj+21];
l32:if((x[jvj+65]>0)) goto l33;
x[jvj+26]=x[jvj+56] ;z[jvj+26]=z[jvj+56];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[299])( );     /*COPEL0(jvj+26,jvj+27)*/
x[jvj+36]=incon;
for(i=x[jvj+21],V21=0;i>0;i=t[i],V21++)  ;
if((V21!=2)) goto l19;
x[jvj+66]=x[jvj+21] ;z[jvj+66]=z[jvj+21];
l1:if((x[jvj+66]<=0)) goto l19;
x[jvj+58]=s[x[jvj+66]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+66];
if((x[jvj+58]!=x[jvj+24])) goto l2;
x[jvj+66]=t[x[jvj+66]];
goto l1;
l33:x[jvj+57]=s[x[jvj+65]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+65];
if((x[jvj+57]==x[jvj+54])) goto l34;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[68])( );     /*PLUE0(jvj+56,jvj+57)*/
l34:x[jvj+65]=t[x[jvj+65]];
goto l32;
}
