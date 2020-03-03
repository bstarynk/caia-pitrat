#include "dx.h"
void RESTVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V22=0,V=0,V49=0,V54=0,V30=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=11591;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1903&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+5; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(454,jvj+5,jvj+16)*/
l5:if((x[jvj+16]>0)) goto l6;
x[jvj+22]=vo[16];z[jvj+22]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+22; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(454,jvj+22,jvj+35)*/
l12:if((x[jvj+35]>0)) goto l13;
x[jvj+42]=301 ;z[jvj+42]=301;
l15:x[jvj+41]=vo[14];z[jvj+41]=vz[14];
pile[v[22]]=jvj+41; pile[WZ1]=1551; pile[WZ2]=jvj+42; 
(*f[35])( );     /*CHGC1(jvj+41,1551,jvj+42)*/
l16:x[jvj+1]=incon; v[0]=jvj; return;
l1:pile[v[22]]=480; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(480,jvj+2,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==473) goto l2;
l8:x[jvj+42]=67 ;z[jvj+42]=67;
goto l15;
l2:pile[v[22]]=448; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(448,jvj+5,jvj+6)*/
x[jvj+43]=x[jvj+6] ;z[jvj+43]=z[jvj+6];
l3:if((x[jvj+43]<=0)) goto l8;
x[jvj+7]=s[x[jvj+43]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+43];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=448)) goto l4;
pile[v[22]]=436; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(436,jvj+7,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+9,V17)*/
V17=pile[WZ2]; 
if((V!=V17)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=61)) goto l4;
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+10,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=828)) goto l4;
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+7,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]==128)) goto l7;
l4:x[jvj+43]=t[x[jvj+43]];
goto l3;
l6:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=454)) goto l7;
pile[v[22]]=103; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+17,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+19,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+17,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+20,jvj+21)*/
V=V22;
x[jvj+2]=x[jvj+21] ;z[jvj+2]=z[jvj+21];
pile[v[22]]=480; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(480,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==472) goto l1;
goto l8;
l7:x[jvj+16]=t[x[jvj+16]];
goto l5;
l10:x[jvj+24]=s[x[jvj+44]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=448)) goto l11;
pile[v[22]]=436; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,jvj+24,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+26,V49)*/
V49=pile[WZ2]; 
if((V30!=V49)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+24,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=61)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+27,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=833)) goto l11;
pile[v[22]]=103; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+27,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=828)) goto l11;
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+24,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]==128)) goto l14;
l11:x[jvj+44]=t[x[jvj+44]];
l9:if((x[jvj+44]>0)) goto l10;
x[jvj+42]=365 ;z[jvj+42]=365;
goto l15;
l13:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=454)) goto l14;
pile[v[22]]=103; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+36,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+38,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+36; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+36,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+39,jvj+40)*/
V30=V54;
pile[v[22]]=448; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(448,jvj+22,jvj+23)*/
x[jvj+44]=x[jvj+23] ;z[jvj+44]=z[jvj+23];
goto l9;
l14:x[jvj+35]=t[x[jvj+35]];
goto l12;
}
