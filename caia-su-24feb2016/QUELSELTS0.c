#include "dx.h"
void QUELSELTS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V13=0,V12=0,V5=0,V14=0,V9=0;
int R,EY;
int E,VA,VB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=11371;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3649&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; EY=pile[v[22]+1]; E=pile[v[22]+2]; VA=pile[v[22]+3]; VB=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+40]=0 ;z[jvj+40]=0;
x[E]=x[jvj+40] ;z[E]=z[jvj+40];
x[jvj+41]=x[EY] ;z[jvj+41]=z[EY];
l1:if((x[jvj+41]<=0)) goto l14;
x[jvj+2]=s[x[jvj+41]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+41];
pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+2,jvj+3)*/
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=596)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+3,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=484)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+3,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=41)) goto l2;
x[jvj+21]=x[jvj+2] ;z[jvj+21]=z[jvj+2];
x[VA]=x[jvj+6] ;z[VA]=z[jvj+6];
x[jvj+42]=x[EY] ;z[jvj+42]=z[EY];
l3:if((x[jvj+42]<=0)) goto l14;
x[jvj+10]=s[x[jvj+42]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+42];
if((x[jvj+10]==x[jvj+21])) goto l4;
pile[v[22]]=218; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+10,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=596)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+11,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+11,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=41)) goto l4;
x[jvj+23]=x[jvj+10] ;z[jvj+23]=z[jvj+10];
x[VB]=x[jvj+14] ;z[VB]=z[jvj+14];
pile[v[22]]=1261; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1261,jvj+21,jvj+22)*/
pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1261,jvj+23,jvj+24)*/
pile[v[22]]=218; pile[WZ1]=jvj+21; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(218,jvj+21,jvj+25)*/
pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(218,jvj+23,jvj+26)*/
x[jvj+27]=d[197];z[jvj+27]=0;
l5:if((x[jvj+22]<=0)) goto l15;
x[jvj+28]=s[x[jvj+22]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+22];
pile[v[22]]=510; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+28,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=1260; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1260,jvj+28,jvj+29)*/
x[jvj+43]=x[jvj+24] ;z[jvj+43]=z[jvj+24];
l7:if((x[jvj+43]<=0)) goto l6;
x[jvj+30]=s[x[jvj+43]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+43];
pile[v[22]]=510; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(510,jvj+30,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=1260; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1260,jvj+30,jvj+31)*/
x[jvj+44]=x[jvj+29] ;z[jvj+44]=z[jvj+29];
l9:if((x[jvj+44]<=0)) goto l8;
x[jvj+32]=s[x[jvj+44]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+44];
pile[v[22]]=510; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+32,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(515,jvj+32,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+33)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+33; pile[WZ2]=R; pile[WZ3]=jvj+34; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+25,jvj+33,R,jvj+34)*/
x[jvj+45]=x[jvj+31] ;z[jvj+45]=z[jvj+31];
l11:if((x[jvj+45]<=0)) goto l10;
x[jvj+35]=s[x[jvj+45]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+45];
pile[v[22]]=510; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(510,jvj+35,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(515,jvj+35,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+36)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+36; pile[WZ2]=jvj+34; pile[WZ3]=jvj+18; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+26,jvj+36,jvj+34,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[799])( );if(v[102]) goto l16;     /*NORME0(jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]==134)) goto l12;
l16:pile[v[22]]=V14; pile[WZ1]=610; pile[WZ2]=jvj+38; 
(*f[46])( );     /*TRI0(V14,610,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=V13; pile[WZ2]=609; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,V13,609,jvj+39)*/
pile[v[22]]=510; pile[WZ1]=V11; pile[WZ2]=515; pile[WZ3]=V12; pile[WZ4]=jvj+39; pile[WZ5]=jvj+37; 
(*f[190])( );     /*QUADRI3(510,V11,515,V12,jvj+39,jvj+37)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+37; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+27,jvj+37,E)*/
l12:x[jvj+45]=t[x[jvj+45]];
goto l11;
l2:x[jvj+41]=t[x[jvj+41]];
goto l1;
l4:x[jvj+42]=t[x[jvj+42]];
goto l3;
l6:x[jvj+22]=t[x[jvj+22]];
goto l5;
l8:x[jvj+43]=t[x[jvj+43]];
goto l7;
l10:x[jvj+44]=t[x[jvj+44]];
goto l9;
l14:x[E]=x[VA]=x[VB]=incon;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
}
