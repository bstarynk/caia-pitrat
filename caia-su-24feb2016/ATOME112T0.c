#include "dx.h"
void ATOME112T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V25=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=20112;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3513&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l10;
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1948])( );if(v[102]) goto l10;     /*FNDOND0(498,jvj+13,jvj+14)*/
pile[v[22]]=1182; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1182,jvj+14,jvj+15)*/
if((68!=x[jvj+15])) goto l10;
pile[v[22]]=1300; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1300,R,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==636) goto l10;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l10;     /*FNDCND0(280,D,V13)*/
V13=pile[WZ2]; 
if((V13<=0)) goto l10;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+17,V25)*/
V25=pile[WZ2]; 
x[jvj+18]=d[20];z[jvj+18]=0;
l5:if((x[jvj+18]<=0)) goto l10;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+19,R,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+20; 
(*f[887])( );     /*VARND0(jvj+3,jvj+20)*/
for(a=x[jvj+20];a>0;a=t[a]) if(s[a]==x[D]) goto l7;
l6:x[jvj+18]=t[x[jvj+18]];
goto l5;
l1:pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l6;
l9:pile[v[22]]=jvj+7; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+26)*/
x[jvj+33]=x[jvj+24] ;z[jvj+33]=z[jvj+24];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+26,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+27)*/
pile[v[22]]=D; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[3514])( );if(v[102]) goto l6;     /*DIVFACTEUR0(D,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+38)*/
pile[v[22]]=V25; pile[WZ1]=858; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V25,858,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3513; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3513,246,jvj+36)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20112; pile[WZ4]=jvj+36; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(158,1,218,20112,jvj+36,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=159; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+29,159,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+29,159,jvj+38)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[1296])( );     /*NOUVCONTR0(jvj+28,jvj+29)*/
goto l6;
l2:x[jvj+39]=incon;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,R,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+3,jvj+10)*/
if((x[jvj+10]==135)) goto l3;
l4:x[jvj+39]=103 ;z[jvj+39]=103;
l8:x[jvj+23]=x[jvj+39] ;z[jvj+23]=z[jvj+39];
pile[v[22]]=jvj+3; pile[WZ1]=D; pile[WZ2]=29; pile[WZ3]=R; pile[WZ4]=jvj+23; pile[WZ5]=jvj+4; 
(*f[3510])( );if(v[102]) goto l6;     /*BORNINC0(jvj+3,D,29,R,jvj+23,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+24)*/
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+23,jvj+25)*/
pile[v[22]]=jvj+6; pile[WZ1]=D; pile[WZ2]=27; pile[WZ3]=R; pile[WZ4]=jvj+25; pile[WZ5]=jvj+7; 
(*f[3510])( );if(v[102]) goto l6;     /*BORNINC0(jvj+6,D,27,R,jvj+25,jvj+7)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l1;
goto l9;
l3:x[jvj+39]=102 ;z[jvj+39]=102;
goto l8;
l7:pile[v[22]]=268; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+19,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+21,R,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+22; 
(*f[887])( );     /*VARND0(jvj+6,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[D]) goto l2;
goto l6;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
