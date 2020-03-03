#include "dx.h"
void COMPINFSUP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AA,BB,K;
int T,RK;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=31;
if(v[0]>99700) (*f[6])( );

AA=pile[v[22]]; BB=pile[v[22]+1]; K=pile[v[22]+2]; T=pile[v[22]+3]; RK=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[T]=incon;
pile[v[22]]=AA; pile[WZ1]=BB; pile[WZ2]=25; pile[WZ3]=jvj+1; 
(*f[2051])( );if(v[102]) goto l4;     /*COMPREL0(AA,BB,25,jvj+1)*/
if((x[K]==29)) goto l12;
if((x[K]!=25)) goto l13;
if((x[jvj+1]!=29)) goto l13;
pile[WZ1]=jvj+19; 
(*f[1290])( );if(v[102]) goto l15;     /*DEPEXP0(AA,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=BB; pile[WZ1]=jvj+21; 
(*f[1290])( );if(v[102]) goto l15;     /*DEPEXP0(BB,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
x[T]=580 ;z[T]=580;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,jvj+22,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+31; pile[WZ5]=RK; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+31,RK)*/
l17:if((x[RK]==250)) goto l18;
pile[v[22]]=RK; pile[WZ1]=929; pile[WZ2]=999999; 
(*f[43])( );     /*CHGC2(RK,929,999999)*/
l18:if((x[K]!=25)) goto l19;
pile[v[22]]=AA; pile[WZ1]=BB; 
(*f[2052])( );     /*COMPMENAGE0(AA,BB)*/
l19:if(x[T]!=incon) goto l20;
x[T]=x[RK]=incon;
v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=497; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(497,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[AA])) goto l3;
pile[v[22]]=145; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(145,jvj+3,jvj+5)*/
if((x[jvj+5]==x[K])) goto l16;
l3:x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]>0)) goto l2;
x[T]=51 ;z[T]=51;
pile[v[22]]=145; pile[WZ1]=K; pile[WZ2]=497; pile[WZ3]=AA; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(145,K,497,AA,jvj+7)*/
pile[v[22]]=BB; pile[WZ1]=1331; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(BB,1331,jvj+7)*/
pile[v[22]]=145; pile[WZ1]=jvj+6; pile[WZ2]=497; pile[WZ3]=BB; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(145,jvj+6,497,BB,jvj+8)*/
pile[v[22]]=AA; pile[WZ1]=1332; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(AA,1332,jvj+8)*/
l16:x[RK]=250 ;z[RK]=250;
goto l18;
l4:pile[v[22]]=844; pile[WZ1]=K; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(844,K,jvj+6)*/
pile[v[22]]=1331; pile[WZ1]=BB; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1331,BB,jvj+2)*/
goto l1;
l6:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=497; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(497,jvj+10,jvj+11)*/
if((x[jvj+11]!=x[AA])) goto l7;
x[jvj+24]=x[jvj+10] ;z[jvj+24]=z[jvj+10];
l8:x[jvj+25]=incon;
pile[v[22]]=1332; pile[WZ1]=AA; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1332,AA,jvj+12)*/
l9:if((x[jvj+12]>0)) goto l10;
pile[v[22]]=BB; pile[WZ1]=497; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(BB,497,jvj+25)*/
l14:x[T]=38 ;z[T]=38;
pile[v[22]]=BB; pile[WZ1]=1331; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(BB,1331,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=145; pile[WZ2]=K; 
(*f[35])( );     /*CHGC1(jvj+24,145,K)*/
pile[v[22]]=AA; pile[WZ1]=1332; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(AA,1332,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=145; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(jvj+25,145,jvj+23)*/
goto l16;
l7:x[jvj+9]=t[x[jvj+9]];
l5:if((x[jvj+9]>0)) goto l6;
pile[v[22]]=AA; pile[WZ1]=497; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(AA,497,jvj+24)*/
goto l8;
l10:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=497; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(497,jvj+13,jvj+14)*/
if((x[jvj+14]!=x[BB])) goto l11;
x[jvj+25]=x[jvj+13] ;z[jvj+25]=z[jvj+13];
goto l14;
l11:x[jvj+12]=t[x[jvj+12]];
goto l9;
l12:if((x[jvj+1]!=25)) goto l13;
pile[v[22]]=AA; pile[WZ1]=jvj+15; 
(*f[1290])( );if(v[102]) goto l15;     /*DEPEXP0(AA,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=BB; pile[WZ1]=jvj+17; 
(*f[1290])( );if(v[102]) goto l15;     /*DEPEXP0(BB,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
x[T]=580 ;z[T]=580;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,jvj+18,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+28; pile[WZ5]=RK; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+28,RK)*/
goto l17;
l13:if((x[jvj+1]!=30)) goto l15;
if((x[K]!=29)) goto l15;
pile[v[22]]=844; pile[WZ1]=K; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(844,K,jvj+23)*/
x[jvj+24]=incon;
pile[v[22]]=1331; pile[WZ1]=BB; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1331,BB,jvj+9)*/
goto l5;
l15:x[T]=67 ;z[T]=67;
goto l16;
l20:v[0]=jvj; v[22]-=5; v[102]=0;return;
}
