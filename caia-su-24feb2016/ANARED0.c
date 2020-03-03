#include "dx.h"
void ANARED0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V15=0,V14=0,V4=0,V6=0,V5=0,V16=0,V9=0,V8=0,TG=0,V21=0,AG=0,V22=0,IG=0,V23=0,EG=0,V24=0;
int TA,LA;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11655;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==871&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TA=pile[v[22]]; LA=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=(time(tzt)-inccc);
V1=V2-TA;
pile[v[22]]=LA; pile[WZ1]=1058; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(LA,1058,V1)*/
pile[v[22]]=1202; pile[WZ1]=LA; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1202,LA,jvj+9)*/
pile[v[22]]=905; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(905,jvj+9,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(457,324,jvj+10)*/
l7:if((x[jvj+10]<=0)) goto l12;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=905; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(905,jvj+11,V8)*/
V8=pile[WZ2]; 
if((V8!=V9)) goto l8;
pile[v[22]]=983; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+11,jvj+12)*/
pile[v[22]]=878; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(878,jvj+12,jvj+13)*/
x[jvj+16]=x[jvj+13] ;z[jvj+16]=z[jvj+13];
l9:if((x[jvj+16]<=0)) goto l8;
x[jvj+2]=s[x[jvj+16]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+16];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+14; 
(*f[1179])( );if(v[102]) goto l10;     /*TRDESSAIS0(jvj+2,jvj+14)*/
pile[v[22]]=642; pile[WZ1]=LA; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,LA,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=1543; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1543,jvj+2,jvj+3)*/
x[jvj+15]=x[jvj+3] ;z[jvj+15]=z[jvj+3];
l1:if((x[jvj+15]<=0)) goto l10;
x[jvj+4]=s[x[jvj+15]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+15];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+4,V14)*/
V14=pile[WZ2]; 
if((V14!=V15)) goto l2;
x[jvj+6]=x[jvj+14] ;z[jvj+6]=z[jvj+14];
pile[v[22]]=1335; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1335,jvj+4,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=297; pile[WZ1]=1335; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(297,1335,jvj+5)*/
pile[v[22]]=LA; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(LA,1335,1)*/
pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(LA,jvj+5,jvj+6)*/
l4:pile[v[22]]=1005; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1005,jvj+4,V16)*/
V16=pile[WZ2]; 
if((V16==1000)) goto l3;
if((V16>=1000)) goto l11;
pile[v[22]]=1335; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1335,jvj+4,V6)*/
V6=pile[WZ2]; 
l11:pile[v[22]]=LA; pile[WZ1]=1527; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(LA,1527,1)*/
l10:x[jvj+16]=t[x[jvj+16]];
goto l9;
l2:x[jvj+15]=t[x[jvj+15]];
goto l1;
l3:pile[v[22]]=1335; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1335,jvj+4,V4)*/
V4=pile[WZ2]; 
goto l11;
l5:pile[v[22]]=297; pile[WZ1]=1005; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(297,1005,jvj+7)*/
pile[v[22]]=LA; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(LA,1005,1)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(LA,jvj+7,jvj+6)*/
goto l11;
l6:pile[v[22]]=297; pile[WZ1]=876; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(297,876,jvj+8)*/
pile[v[22]]=LA; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(LA,876,1)*/
pile[WZ1]=jvj+8; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(LA,jvj+8,jvj+6)*/
goto l11;
l8:x[jvj+10]=t[x[jvj+10]];
goto l7;
l12:V21=incon;
pile[v[22]]=1527; pile[WZ1]=LA; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1527,LA,TG)*/
TG=pile[WZ2]; 
V21=TG;
l14:V22=incon;
pile[v[22]]=1005; pile[WZ1]=LA; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(1005,LA,AG)*/
AG=pile[WZ2]; 
V22=AG;
l16:V23=incon;
pile[v[22]]=1335; pile[WZ1]=LA; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1335,LA,IG)*/
IG=pile[WZ2]; 
V23=IG;
l18:V24=incon;
pile[v[22]]=876; pile[WZ1]=LA; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(876,LA,EG)*/
EG=pile[WZ2]; 
V24=EG;
l20:pile[v[22]]=LA; pile[WZ1]=1527; pile[WZ2]=V21; 
(*f[43])( );     /*CHGC2(LA,1527,V21)*/
pile[WZ1]=1335; pile[WZ2]=V23; 
(*f[43])( );     /*CHGC2(LA,1335,V23)*/
pile[WZ1]=876; pile[WZ2]=V24; 
(*f[43])( );     /*CHGC2(LA,876,V24)*/
pile[WZ1]=1005; pile[WZ2]=V22; 
(*f[43])( );     /*CHGC2(LA,1005,V22)*/
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l13:V21=0;
goto l14;
l15:V22=0;
goto l16;
l17:V23=0;
goto l18;
l19:V24=0;
goto l20;
}
