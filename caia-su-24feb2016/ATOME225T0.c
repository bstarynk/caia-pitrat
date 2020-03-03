#include "dx.h"
void ATOME225T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=20225;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3769&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1347; pile[WZ1]=D; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1347,D,jvj+23)*/
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+6,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,D,jvj+2)*/
pile[v[22]]=1348; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1348,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l14;
l5:x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(454,jvj+13,jvj+14)*/
l6:if((x[jvj+14]>0)) goto l7;
pile[v[22]]=D; pile[WZ1]=jvj+24; 
(*f[1290])( );if(v[102]) goto l14;     /*DEPEXP0(D,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=1435; pile[WZ1]=D; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1435,D,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+18]=d[72];z[jvj+18]=0;
l11:if((x[jvj+16]>0)) goto l12;
pile[v[22]]=1374; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1374,jvj+6,jvj+7)*/
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+34)*/
pile[v[22]]=V24; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V24,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=3769; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,3769,246,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=20225; pile[WZ2]=218; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,20225,218,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=(-20); pile[WZ2]=jvj+33; pile[WZ3]=159; pile[WZ4]=jvj+35; 
(*f[298])( );     /*TRIENS1(jvj+34,(-20),jvj+33,159,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+35,1,158,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+40,jvj+27,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+41; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+41,jvj+37)*/
pile[v[22]]=jvj+10; pile[WZ1]=1260; pile[WZ2]=jvj+36; 
(*f[300])( );     /*TRI10(jvj+10,1260,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=(-20); pile[WZ3]=509; pile[WZ4]=jvj+38; 
(*f[298])( );     /*TRIENS1(jvj+37,(-20),jvj+36,509,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1350; pile[WZ2]=277; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+38,1350,277,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=489; pile[WZ2]=jvj+23; 
(*f[1753])( );     /*LIER1(jvj+28,489,jvj+23,jvj+29)*/
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[D]) goto l4;
l3:x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; pile[WZ2]=jvj+4; 
(*f[1355])( );if(v[102]) goto l3;     /*SUBSTOTAL0(jvj+8,jvj+10,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l3;
goto l14;
l7:x[jvj+11]=s[x[jvj+14]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+14];
pile[v[22]]=1348; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1348,jvj+11,jvj+12)*/
if((x[jvj+12]==68)) goto l8;
l9:pile[v[22]]=480; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(480,jvj+11,jvj+15)*/
x[jvj+42]=x[jvj+15] ;z[jvj+42]=z[jvj+15];
l10:if((x[jvj+42]<=0)) goto l8;
x[jvj+17]=s[x[jvj+42]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+42];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+17)*/
x[jvj+42]=t[x[jvj+42]];
goto l10;
l8:x[jvj+14]=t[x[jvj+14]];
goto l6;
l12:x[jvj+19]=s[x[jvj+16]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+16];
pile[v[22]]=1435; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1435,jvj+19,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[1290])( );if(v[102]) goto l13;     /*DEPEXP0(jvj+19,jvj+21)*/
pile[v[22]]=447; pile[WZ2]=459; pile[WZ3]=jvj+20; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(447,jvj+21,459,jvj+20,jvj+22)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+22; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+18,jvj+22,jvj+10)*/
l13:x[jvj+16]=t[x[jvj+16]];
goto l11;
}
