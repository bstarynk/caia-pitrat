#include "dx.h"
void VE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V5=0,V9=0;
int BK,N;
int L;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10214;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==744&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BK=pile[v[22]]; N=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(494,324,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
if((x[BK]!=10061)) goto l4;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3!=N)) goto l3;
pile[v[22]]=109; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[BK])) goto l3;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(246,jvj+3,V4)*/
V4=pile[WZ2]; 
L=V4;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=L; v[102]=0;return;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:V5=incon;
if((x[BK]==11040)) goto l5;
if((x[BK]==10833)) goto l6;
pile[v[22]]=1; pile[WZ1]=240; pile[WZ2]=246; 
(*f[1113])( );     /*INCM0(1,240,246,V5)*/
V5=pile[WZ3]; 
l10:V9=x[BK];
L=V5;
vbl[L]=V9;
pres[L]=0;
pile[v[22]]=L; pile[WZ1]=246; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(L,246,jvj+12)*/
pile[v[22]]=109; pile[WZ1]=BK; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+12; pile[WZ5]=jvj+11; 
(*f[47])( );     /*QUADRI0(109,BK,130,N,jvj+12,jvj+11)*/
pile[v[22]]=324; pile[WZ1]=494; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(324,494,jvj+11)*/
pile[v[22]]=240; pile[WZ1]=242; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(240,242,68)*/
if((v[90]!=0)) goto l12;
x[jvj+5]=vo[20];z[jvj+5]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(301,jvj+5,jvj+6)*/
if((x[jvj+6]==68)) goto l12;
l7:x[jvj+7]=vo[20];z[jvj+7]=vz[20];
pile[v[22]]=346; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(346,jvj+7,jvj+8)*/
goto l12;
l5:V5=1;
goto l10;
l6:V5=2;
goto l10;
l8:x[jvj+9]=vo[20];z[jvj+9]=vz[20];
pile[v[22]]=685; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(685,jvj+9,jvj+10)*/
goto l12;
l9:
(*f[91])( );     /*MND0()*/
goto l12;
}
