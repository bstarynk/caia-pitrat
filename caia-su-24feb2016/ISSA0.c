#include "dx.h"
void ISSA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V10=0;
int TL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=10423;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2015&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(302,TL,jvj+6)*/
l1:if((x[jvj+6]>0)) goto l2;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(302,TL,jvj+28)*/
l9:if((x[jvj+28]>0)) goto l10;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+7,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]==39)) goto l4;
if((x[jvj+9]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+8,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+10,jvj+11)*/
pile[v[22]]=135; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(135,jvj+7,jvj+12)*/
pile[v[22]]=248; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(248,jvj+12,jvj+13)*/
for(i=x[jvj+13],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=1)) goto l6;
x[jvj+16]=x[jvj+11] ;z[jvj+16]=z[jvj+11];
pile[v[22]]=134; pile[WZ1]=jvj+7; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(134,jvj+7,jvj+14)*/
pile[v[22]]=248; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(248,jvj+14,jvj+15)*/
for(i=x[jvj+15],V10=0;i>0;i=t[i],V10++)  ;
if((V10<=1)) goto l6;
pile[v[22]]=103; pile[WZ1]=jvj+8; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+8,jvj+2)*/
if(x[jvj+16]!=44&&x[jvj+16]!=45) goto l5;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==128)) goto l5;
l6:pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+8,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==500)) goto l7;
if((x[jvj+23]!=45)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+8; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+8,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]==128)) goto l3;
l8:pile[v[22]]=jvj+4; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+24)*/
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+8,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
x[jvj+41]=x[jvj+24] ;z[jvj+41]=z[jvj+24];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+42; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+42,jvj+27)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+27; 
(*f[2103])( );     /*ISSM0(jvj+7,jvj+27)*/
l3:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:pile[v[22]]=jvj+7; 
(*f[2104])( );     /*ISSM1(jvj+7)*/
goto l6;
l5:pile[v[22]]=268; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+16,jvj+17)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+18)*/
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+8,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
x[jvj+37]=x[jvj+18] ;z[jvj+37]=z[jvj+18];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+17; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=103; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,103,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+38; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+38,jvj+21)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+21; 
(*f[2103])( );     /*ISSM0(jvj+7,jvj+21)*/
goto l6;
l7:pile[v[22]]=jvj+7; 
(*f[2104])( );     /*ISSM1(jvj+7)*/
goto l3;
l10:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+29,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=73)) goto l11;
pile[v[22]]=128; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(128,jvj+30,jvj+32)*/
if((x[jvj+32]!=0)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+30,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=255)) goto l11;
pile[v[22]]=jvj+29; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(jvj+29,TL)*/
l11:x[jvj+28]=t[x[jvj+28]];
goto l9;
}
