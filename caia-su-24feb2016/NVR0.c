#include "dx.h"
void NVR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V10=0,V19=0,V23=0,V24=0,V17=0,V30=0,V27=0,V26=0;
int N,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=10409;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==377&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=311; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(311,N,jvj+2)*/
V2=x[N];
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=365; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,N,jvj+4)*/
V10=x[N];
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=363; pile[WZ1]=N; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(363,N,jvj+12)*/
V19=x[N];
l9:if((x[jvj+12]>0)) goto l10;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(494,324,jvj+14)*/
l11:if((x[jvj+14]>0)) goto l12;
pile[v[22]]=311; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(311,N,jvj+17)*/
l14:if((x[jvj+17]>0)) goto l15;
if((x[T]==68)) goto l26;
if((x[T]!=67)) goto l28;
V27=t[x[N]];
V26=t[V27];
pile[v[22]]=109; pile[WZ1]=N; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(109,N,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=T; 
(*f[377])( );     /*NVR0(jvj+29,T)*/
l27:t[V26]=0;
x[jvj+24]=d[2];z[jvj+24]=0;
l21:if((x[jvj+24]>0)) goto l22;
pile[v[22]]=240; pile[WZ1]=670; pile[WZ2]=N; 
(*f[36])( );     /*PLUSC0(240,670,N)*/
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=311; pile[WZ1]=jvj+3; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(311,jvj+3,V2)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=279; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(279,jvj+5,jvj+6)*/
x[jvj+30]=x[jvj+6] ;z[jvj+30]=z[jvj+6];
l5:if((x[jvj+30]>0)) goto l6;
x[jvj+4]=t[x[jvj+4]];
goto l3;
l6:x[jvj+7]=s[x[jvj+30]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+30];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+7,jvj+8)*/
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
pile[v[22]]=365; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(365,jvj+9,jvj+10)*/
x[jvj+31]=x[jvj+10] ;z[jvj+31]=z[jvj+10];
l8:if((x[jvj+31]<=0)) goto l7;
x[jvj+11]=s[x[jvj+31]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+31];
pile[v[22]]=313; pile[WZ1]=jvj+11; pile[WZ2]=V10; 
(*f[134])( );     /*OTA0(313,jvj+11,V10)*/
x[jvj+31]=t[x[jvj+31]];
goto l8;
l7:x[jvj+30]=t[x[jvj+30]];
goto l5;
l10:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=474; pile[WZ1]=jvj+13; pile[WZ2]=V19; 
(*f[134])( );     /*OTA0(474,jvj+13,V19)*/
x[jvj+12]=t[x[jvj+12]];
goto l9;
l12:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=109; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+15,jvj+16)*/
if((x[jvj+16]!=x[N])) goto l13;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(246,jvj+15,V23)*/
V23=pile[WZ2]; 
V24=x[jvj+15];
pres[V23]=1;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=V24; 
(*f[134])( );     /*OTA0(494,324,V24)*/
l13:x[jvj+14]=t[x[jvj+14]];
goto l11;
l15:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=365; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(365,jvj+18,jvj+19)*/
x[jvj+32]=x[jvj+19] ;z[jvj+32]=z[jvj+19];
l16:if((x[jvj+32]>0)) goto l17;
x[jvj+17]=t[x[jvj+17]];
goto l14;
l17:x[jvj+20]=s[x[jvj+32]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+32];
pile[v[22]]=279; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(279,jvj+20,jvj+21)*/
x[jvj+33]=x[jvj+21] ;z[jvj+33]=z[jvj+21];
l18:if((x[jvj+33]>0)) goto l19;
x[jvj+32]=t[x[jvj+32]];
goto l16;
l19:x[jvj+22]=s[x[jvj+33]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+33];
pile[v[22]]=109; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(109,jvj+22,jvj+23)*/
if((x[jvj+23]!=x[N])) goto l20;
V17=x[jvj+22];
pile[v[22]]=279; pile[WZ1]=jvj+20; pile[WZ2]=V17; 
(*f[134])( );     /*OTA0(279,jvj+20,V17)*/
l20:x[jvj+33]=t[x[jvj+33]];
goto l18;
l22:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=240; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(jvj+25,240,jvj+26)*/
x[jvj+34]=x[jvj+26] ;z[jvj+34]=z[jvj+26];
l23:if((x[jvj+34]>0)) goto l24;
x[jvj+24]=t[x[jvj+24]];
goto l21;
l24:x[jvj+27]=s[x[jvj+34]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+34];
pile[v[22]]=109; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(109,jvj+27,jvj+28)*/
if((x[jvj+28]!=x[N])) goto l25;
V30=x[jvj+27];
pile[v[22]]=jvj+25; pile[WZ1]=240; pile[WZ2]=V30; 
(*f[134])( );     /*OTA0(jvj+25,240,V30)*/
l25:x[jvj+34]=t[x[jvj+34]];
goto l23;
l26:r[x[N]]=0;
t[x[N]]=0;
s[x[N]]=0;
goto l28;
}
