#include "dx.h"
void AJOULISNOUV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V31=0,V30=0,V39=0,DC=0,V8=0,WW=0,W=0,V24=0;
int HIST,VB,Q,TY,XX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=11808;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1782&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; VB=pile[v[22]+1]; Q=pile[v[22]+2]; TY=pile[v[22]+3]; XX=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+28]=W=DC=incon;
pile[v[22]]=683; pile[WZ1]=XX; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(683,XX,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(583,XX,jvj+2)*/
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(645,597,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l9;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+4,V30)*/
V30=pile[WZ2]; 
if((V30!=V31)) goto l2;
pile[v[22]]=265; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(265,jvj+4,jvj+5)*/
x[jvj+44]=x[jvj+5] ;z[jvj+44]=z[jvj+5];
l3:if((x[jvj+44]<=0)) goto l2;
x[jvj+6]=s[x[jvj+44]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+44];
pile[v[22]]=158; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+6,jvj+7)*/
if((x[jvj+7]!=576)) goto l4;
pile[v[22]]=120; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+6,jvj+8)*/
x[jvj+10]=x[jvj+8] ;z[jvj+10]=z[jvj+8];
l5:x[jvj+9]=x[jvj+10] ;z[jvj+9]=z[jvj+10];
pile[v[22]]=287; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(287,jvj+9,jvj+11)*/
x[jvj+13]=x[jvj+11] ;z[jvj+13]=z[jvj+11];
l7:x[jvj+12]=x[jvj+13] ;z[jvj+12]=z[jvj+13];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+12,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=x[jvj+2])) goto l8;
pile[v[22]]=1547; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1547,jvj+12,V39)*/
V39=pile[WZ2]; 
DC=V39;
l9:pile[v[22]]=159; pile[WZ1]=Q; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(159,Q,jvj+16)*/
pile[v[22]]=222; pile[WZ1]=XX; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(222,XX,jvj+17)*/
l10:if((x[jvj+16]<=0)) goto l14;
x[jvj+18]=s[x[jvj+16]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+16];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=1725)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+18,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+21,V8)*/
V8=pile[WZ2]; 
WW=V8;
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==WW) goto l12;
l11:x[jvj+16]=t[x[jvj+16]];
goto l10;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+44]=t[x[jvj+44]];
goto l3;
l6:pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+9,jvj+10)*/
goto l5;
l8:pile[v[22]]=120; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+12,jvj+13)*/
goto l7;
l12:pile[v[22]]=103; pile[WZ1]=jvj+18; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+18,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=43)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+22,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+24,jvj+25)*/
pile[v[22]]=103; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+22,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=21)) goto l11;
pile[v[22]]=jvj+25; pile[WZ1]=VB; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(jvj+25,VB,jvj+28)*/
W=WW;
l14:if(x[jvj+28]!=incon) goto l15;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l13:if((x[jvj+34]!=187)) goto l20;
pile[v[22]]=959; pile[WZ1]=XX; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(959,XX,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+31)*/
pile[v[22]]=jvj+30; pile[WZ1]=959; pile[WZ2]=jvj+31; 
(*f[35])( );     /*CHGC1(jvj+30,959,jvj+31)*/
l20:pile[v[22]]=jvj+35; pile[WZ1]=HIST; pile[WZ2]=jvj+30; pile[WZ3]=jvj+32; 
(*f[1594])( );     /*AJOULISBIS0(jvj+35,HIST,jvj+30,jvj+32)*/
l19:x[jvj+45]=t[x[jvj+45]];
l18:if((x[jvj+45]<=0)) goto l21;
x[jvj+35]=s[x[jvj+45]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+45];
pile[v[22]]=1417; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1417,jvj+35,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==DC) goto l13;
goto l19;
l15:if(W!=incon) goto l16;
goto l21;
l16:if(DC!=incon) goto l17;
goto l21;
l17:pile[v[22]]=337; pile[WZ1]=XX; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(337,XX,jvj+32)*/
pile[v[22]]=583; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(583,XX,jvj+33)*/
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(246,XX,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(288,XX,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+33; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+33,jvj+39)*/
pile[WZ3]=jvj+34; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+34,jvj+43)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+41)*/
pile[v[22]]=DC; pile[WZ1]=1547; pile[WZ2]=jvj+37; 
(*f[46])( );     /*TRI0(DC,1547,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=V24; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,V24,246,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=111; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+43,jvj+42,jvj+30)*/
x[jvj+45]=x[jvj+28] ;z[jvj+45]=z[jvj+28];
goto l18;
}
