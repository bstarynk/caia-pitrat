#include "dx.h"
void ATOME42T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,F=0,V31=0,V7=0,V37=0,V6=0,L=0,V62=0,V61=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=20042;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3445&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+19; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,D,jvj+19)*/
pile[v[22]]=688; pile[WZ1]=jvj+19; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(688,jvj+19,V7)*/
V7=pile[WZ2]; 
if((V7!=1)) goto l4;
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+20,V37)*/
V37=pile[WZ2]; 
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
for(i=x[jvj+18],V6=0;i>0;i=t[i],V6++)  ;
if((V6<=2)) goto l4;
x[jvj+37]=515 ;z[jvj+37]=515;
x[jvj+36]=0 ;z[jvj+36]=0;
x[jvj+38]=incon;
if((x[jvj+37]==510)) goto l12;
x[jvj+38]=103 ;z[jvj+38]=103;
l6:x[jvj+44]=x[jvj+18] ;z[jvj+44]=z[jvj+18];
l7:if((x[jvj+44]>0)) goto l8;
for(i=x[jvj+18],V62=0;i>0;i=t[i],V62++)  ;
pile[v[22]]=jvj+36; pile[WZ1]=V62; pile[WZ2]=jvj+37; 
(*f[3193])( );if(v[102]) goto l4;     /*NIEME0(jvj+36,V62,jvj+37,L)*/
L=pile[WZ3]; 
pile[v[22]]=D; pile[WZ1]=jvj+21; 
(*f[1290])( );if(v[102]) goto l4;     /*DEPEXP0(D,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=971; pile[WZ1]=D; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(971,D,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==29) goto l5;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=29)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+7,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+9,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+4,jvj+10)*/
F=V20;
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+10,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+12,V31)*/
V31=pile[WZ2]; 
if((F!=V31)) goto l3;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+13; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+7,jvj+13)*/
if((x[jvj+13]!=x[D])) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+7,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+14,jvj+15)*/
if(x[jvj+15]!=96&&x[jvj+15]!=89&&x[jvj+15]!=41&&x[jvj+15]!=20&&x[jvj+15]!=128&&x[jvj+15]!=570&&x[jvj+15]!=1317) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+10,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+16,jvj+17)*/
if(x[jvj+17]!=96&&x[jvj+17]!=89&&x[jvj+17]!=41&&x[jvj+17]!=20&&x[jvj+17]!=128&&x[jvj+17]!=570&&x[jvj+17]!=1317) goto l3;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+4)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+30)*/
pile[v[22]]=V37; pile[WZ1]=858; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V37,858,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=3445; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,3445,246,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=20042; pile[WZ2]=218; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+28,20042,218,jvj+29)*/
pile[v[22]]=jvj+30; pile[WZ1]=(-20); pile[WZ2]=jvj+29; pile[WZ3]=159; pile[WZ4]=jvj+31; 
(*f[298])( );     /*TRIENS1(jvj+30,(-20),jvj+29,159,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+31,1,158,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+35; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+35,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+24; 
(*f[1296])( );     /*NOUVCONTR0(jvj+25,jvj+24)*/
goto l4;
l8:x[jvj+39]=s[x[jvj+44]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+44];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+38,jvj+39,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(jvj+40,jvj+41)*/
pile[v[22]]=365; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(365,jvj+41,jvj+42)*/
x[jvj+45]=x[jvj+42] ;z[jvj+45]=z[jvj+42];
l9:if((x[jvj+45]<=0)) goto l11;
x[jvj+43]=s[x[jvj+45]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+45];
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+43,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=V61; 
(*f[207])( );     /*PLUE2(jvj+36,V61)*/
l10:x[jvj+45]=t[x[jvj+45]];
goto l9;
l11:x[jvj+44]=t[x[jvj+44]];
goto l7;
l12:x[jvj+38]=102 ;z[jvj+38]=102;
goto l6;
}
