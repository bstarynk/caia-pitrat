#include "dx.h"
void ATOME198T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V29=0,I=0,PP=0,V10=0,V6=0,V31=0,Q=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20198;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3744&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=25)) goto l10;
pile[v[22]]=1474; pile[WZ1]=D; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1474,D,jvj+22)*/
pile[v[22]]=117; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+22,V10)*/
V10=pile[WZ2]; 
x[jvj+23]=vo[14];z[jvj+23]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+23,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+24; 
(*f[3517])( );     /*DECSOM2(R,jvj+24)*/
x[jvj+12]=0 ;z[jvj+12]=0;
l1:if((x[jvj+24]>0)) goto l2;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,R,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,R,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1294,R,jvj+29)*/
for(a=x[jvj+29];a>0;a=t[a]) if(s[a]==1483) goto l4;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=s[x[jvj+24]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+24];
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+3,jvj+4)*/
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=596)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+5,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=41)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+5,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+10,jvj+11)*/
if((x[jvj+11]!=x[D])) goto l3;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+5)*/
l3:x[jvj+24]=t[x[jvj+24]];
goto l1;
l4:x[jvj+19]=0 ;z[jvj+19]=0;
l5:if((x[jvj+12]<=0)) goto l9;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=596)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+16,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+13,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+17,jvj+18)*/
if((x[jvj+18]!=x[D])) goto l6;
I=V29;
PP=2;
l8:pile[v[22]]=PP; pile[WZ1]=V10; pile[WZ2]=I; 
(*f[1041])( );if(v[102]) goto l7;     /*MODPUI0(PP,V10,I,V6)*/
V6=pile[WZ3]; 
if((V6!=1)) goto l7;
pile[v[22]]=jvj+19; pile[WZ1]=PP; 
(*f[207])( );     /*PLUE2(jvj+19,PP)*/
l7:PP++;
if((PP<=25)) goto l8;
l6:x[jvj+12]=t[x[jvj+12]];
goto l5;
l9:if((x[jvj+19]<=0)) goto l10;
Q=s[x[jvj+19]];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+35)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+36)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(V31,858,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,v[13],642,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=3744; pile[WZ2]=246; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,3744,246,jvj+34)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20198; pile[WZ4]=jvj+34; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(158,1,218,20198,jvj+34,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=159; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+35)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Q; pile[WZ4]=jvj+37; 
(*f[192])( );     /*QUADRI4(100,41,130,Q,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=160; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,160,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=111; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+40,jvj+28,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+41; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+41,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+30; 
(*f[1296])( );     /*NOUVCONTR0(jvj+31,jvj+30)*/
x[jvj+19]=t[x[jvj+19]];
goto l9;
}
