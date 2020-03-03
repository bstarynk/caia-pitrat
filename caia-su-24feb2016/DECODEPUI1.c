#include "dx.h"
void DECODEPUI1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V36=0,V20=0,V53=0,V52=0,V56=0,V55=0,V59=0,V58=0;
int A,BT,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; BT=pile[v[22]+1]; B=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,A,jvj+4)*/
l3:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=1356)) goto l6;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,A,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+7,V36)*/
V36=pile[WZ2]; 
if((V36!=0)) goto l4;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,A,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[1446])( );     /*NONUL0(jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l15;
l4:if((V36==0)) goto l5;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,A,jvj+1)*/
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
J=1;
l1:if((J<=V36)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+10; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+10; pile[WZ2]=107; pile[WZ3]=jvj+21; 
(*f[301])( );     /*TRI11(jvj+20,jvj+10,107,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,22,100,jvj+22)*/
if((V56=w[x[BT]][1])==incon) goto l14;
if((V56!=23)) goto l17;
V55=x[A];
pile[v[22]]=BT; pile[WZ1]=B; pile[WZ2]=V55; 
(*f[134])( );     /*OTA0(BT,B,V55)*/
pile[v[22]]=B; pile[WZ1]=BT; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(B,BT,jvj+22)*/
l14:v[0]=jvj; v[22]-=3; return;
l2:pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+2)*/
J++;
goto l1;
l5:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,A,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+11,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V20; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,V20,jvj+26)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,jvj+12,103,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+25,jvj+27)*/
if((V59=w[x[BT]][1])==incon) goto l14;
if((V59!=23)) goto l18;
V58=x[A];
pile[v[22]]=BT; pile[WZ1]=B; pile[WZ2]=V58; 
(*f[134])( );     /*OTA0(BT,B,V58)*/
pile[v[22]]=B; pile[WZ1]=BT; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(B,BT,jvj+27)*/
goto l14;
l6:if(x[jvj+4]!=incon) goto l7;
goto l14;
l7:x[jvj+28]=w[x[jvj+4]][9];
l8:if((x[jvj+28]>0)) goto l9;
x[jvj+29]=w[x[jvj+4]][8];
l11:if((x[jvj+29]<=0)) goto l14;
x[jvj+15]=s[x[jvj+29]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+29];
pile[v[22]]=jvj+15; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+15,A,jvj+16)*/
x[jvj+30]=x[jvj+16] ;z[jvj+30]=z[jvj+16];
l12:if((x[jvj+30]>0)) goto l13;
x[jvj+29]=t[x[jvj+29]];
goto l11;
l9:x[jvj+13]=s[x[jvj+28]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+28];
pile[v[22]]=jvj+13; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+13,A,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+13; pile[WZ2]=A; 
(*f[1666])( );     /*DECODEPUI1(jvj+14,jvj+13,A)*/
l10:x[jvj+28]=t[x[jvj+28]];
goto l8;
l13:x[jvj+17]=s[x[jvj+30]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+30];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+15; pile[WZ2]=A; 
(*f[1666])( );     /*DECODEPUI1(jvj+17,jvj+15,A)*/
x[jvj+30]=t[x[jvj+30]];
goto l12;
l15:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+18)*/
if((V53=w[x[BT]][1])==incon) goto l14;
if((V53!=23)) goto l16;
V52=x[A];
pile[v[22]]=BT; pile[WZ1]=B; pile[WZ2]=V52; 
(*f[134])( );     /*OTA0(BT,B,V52)*/
pile[v[22]]=B; pile[WZ1]=BT; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(B,BT,jvj+18)*/
goto l14;
l16:pile[v[22]]=B; pile[WZ1]=BT; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(B,BT,jvj+18)*/
goto l14;
l17:pile[v[22]]=B; pile[WZ1]=BT; pile[WZ2]=jvj+22; 
(*f[35])( );     /*CHGC1(B,BT,jvj+22)*/
goto l14;
l18:pile[v[22]]=B; pile[WZ1]=BT; pile[WZ2]=jvj+27; 
(*f[35])( );     /*CHGC1(B,BT,jvj+27)*/
goto l14;
}
