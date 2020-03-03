#include "dx.h"
void STEXPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V16=0,V8=0,V9=0,V10=0,V11=0;
int RT,R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

RT=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[R] ;z[jvj+2]=z[R];
l20:x[jvj+8]=incon;
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+2,jvj+3)*/
pile[v[22]]=1261; pile[WZ1]=RT; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1261,RT,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=109; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[jvj+3])) goto l2;
x[jvj+8]=x[jvj+5] ;z[jvj+8]=z[jvj+5];
l4:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+2,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=510; pile[WZ2]=V16; 
(*f[186])( );     /*BTC0(jvj+8,510,V16)*/
l5:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(109,jvj+2,jvj+9)*/
pile[v[22]]=1260; pile[WZ1]=RT; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1260,RT,jvj+10)*/
l6:if((x[jvj+10]<=0)) goto l15;
x[jvj+1]=s[x[jvj+10]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+10];
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+1,jvj+11)*/
if((x[jvj+11]!=x[jvj+9])) goto l7;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+1,V4)*/
V4=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+2,V5)*/
V5=pile[WZ2]; 
if((V4!=V5)) goto l7;
l8:x[jvj+12]=x[jvj+1] ;z[jvj+12]=z[jvj+1];
l17:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,jvj+2,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=117; pile[WZ2]=V11; 
(*f[186])( );     /*BTC0(jvj+12,117,V11)*/
l18:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(120,jvj+2,jvj+17)*/
x[jvj+2]=x[jvj+17] ;z[jvj+2]=z[jvj+17];
goto l20;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+2,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=109; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,109,jvj+8)*/
pile[v[22]]=RT; pile[WZ1]=1261; 
(*f[36])( );     /*PLUSC0(RT,1261,jvj+8)*/
pile[WZ1]=609; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RT,609,1)*/
goto l4;
l7:x[jvj+10]=t[x[jvj+10]];
goto l6;
l12:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+14,jvj+2,jvj+15)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+12,jvj+14,jvj+15)*/
l14:x[jvj+13]=t[x[jvj+13]];
l11:if((x[jvj+13]>0)) goto l12;
pile[v[22]]=RT; pile[WZ1]=1260; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(RT,1260,jvj+12)*/
pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RT,515,1)*/
pile[v[22]]=jvj+8; 
(*f[186])( );     /*BTC0(jvj+8,515,1)*/
goto l17;
l15:if(x[jvj+8]!=incon) goto l16;
goto l18;
l16:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(109,jvj+2,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=109; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+16,109,jvj+12)*/
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+2,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=163; pile[WZ2]=V8; 
(*f[177])( );     /*CHGC4(jvj+12,163,V8)*/
l9:pile[v[22]]=610; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(610,jvj+2,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=610; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+12,610,V9)*/
l10:pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(164,jvj+2,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=164; pile[WZ2]=V10; 
(*f[43])( );     /*CHGC2(jvj+12,164,V10)*/
l13:x[jvj+13]=d[74];z[jvj+13]=0;
goto l11;
l19:v[0]=jvj; v[22]-=2; return;
}
