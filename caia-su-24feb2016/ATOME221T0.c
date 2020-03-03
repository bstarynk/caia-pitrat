#include "dx.h"
void ATOME221T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V12=0,V36=0,M=0,V38=0,V31=0,V7=0,V39=0,V22=0,I=0,D=0,PP=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20221;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3746&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l12;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,RR,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=625)) goto l12;
pile[v[22]]=1358; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1358,R,jvj+15)*/
if((x[jvj+15]!=68)) goto l12;
pile[v[22]]=160; pile[WZ1]=RR; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(160,RR,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+16,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=1101; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1101,R,V7)*/
V7=pile[WZ2]; 
if((V7<=1)) goto l12;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+17,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=763; pile[WZ1]=1396; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(763,1396,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l12;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+4,V10)*/
V10=pile[WZ2]; 
if((V10!=V31)) goto l2;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,R,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,R,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
x[jvj+22]=d[20];z[jvj+22]=0;
l9:if((x[jvj+22]<=0)) goto l12;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; pile[WZ1]=RR; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+23,RR,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=484)) goto l10;
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+23,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=RR; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+26,RR,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+27,V22)*/
V22=pile[WZ2]; 
I=V22;
pile[v[22]]=jvj+24; pile[WZ1]=R; 
(*f[3747])( );     /*CHDEG0(jvj+24,R,D)*/
D=pile[WZ2]; 
pile[v[22]]=1481; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1481,jvj+4,jvj+5)*/
x[jvj+40]=x[jvj+5] ;z[jvj+40]=z[jvj+5];
l3:if((x[jvj+40]<=0)) goto l10;
x[jvj+6]=s[x[jvj+40]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+40];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+6,V12)*/
V12=pile[WZ2]; 
if((V12!=D)) goto l4;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=159; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(159,jvj+6,jvj+7)*/
x[jvj+41]=x[jvj+7] ;z[jvj+41]=z[jvj+7];
l6:if((x[jvj+41]<=0)) goto l11;
x[jvj+8]=s[x[jvj+41]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+41];
pile[v[22]]=609; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(609,jvj+8,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+8,jvj+9)*/
M=x[jvj+9];
if((M==68)) goto l5;
if((M!=67)) goto l7;
if((V36!=I)) goto l8;
l7:x[jvj+41]=t[x[jvj+41]];
goto l6;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+40]=t[x[jvj+40]];
goto l3;
l5:if((V36==I)) goto l8;
goto l7;
l8:pile[v[22]]=510; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(510,jvj+8,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V38; 
(*f[207])( );     /*PLUE2(jvj+10,V38)*/
goto l7;
l10:x[jvj+22]=t[x[jvj+22]];
goto l9;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l11:if((x[jvj+10]<=0)) goto l10;
PP=s[x[jvj+10]];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+33)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+34)*/
pile[v[22]]=V39; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V39,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=3746; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,3746,246,jvj+32)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20221; pile[WZ4]=jvj+32; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(158,1,218,20221,jvj+32,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=159; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+28,159,jvj+33)*/
pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+28,159,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=PP; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=160; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,160,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=111; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,jvj+21,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+39; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+39,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+28; 
(*f[1296])( );     /*NOUVCONTR0(jvj+29,jvj+28)*/
x[jvj+10]=t[x[jvj+10]];
goto l11;
}
