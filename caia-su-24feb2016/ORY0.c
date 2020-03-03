#include "dx.h"
void ORY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V1=0,V11=0,V10=0,V9=0,V3=0,V14=0,V15=0,C=0,H=0,L=0,V4=0;
int P,R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10688;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2209&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=122; pile[WZ1]=P; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(122,P,jvj+7)*/
if((x[jvj+7]==105)) goto l7;
if((x[jvj+7]!=107)) goto l9;
pile[v[22]]=218; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(218,P,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=R; 
(*f[2108])( );if(v[102]) goto l9;     /*ORW0(jvj+8,R,C,H,L)*/
C=pile[WZ2]; H=pile[WZ3]; L=pile[WZ4]; 
V1=incon;
if((L<=0)) goto l1;
if((C<=0)) goto l1;
V7=C*L;
V1=V7;
l8:pile[v[22]]=P; pile[WZ1]=238; pile[WZ2]=L; 
(*f[43])( );     /*CHGC2(P,238,L)*/
pile[WZ1]=528; pile[WZ2]=H; 
(*f[43])( );     /*CHGC2(P,528,H)*/
pile[WZ1]=204; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(P,204,V1)*/
x[jvj+5]=0 ;z[jvj+5]=0;
V4=incon;
pile[v[22]]=226; pile[WZ1]=P; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(226,P,jvj+2)*/
l3:if((x[jvj+2]>0)) goto l4;
if((x[jvj+5]<=0)) goto l9;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=204; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(204,jvj+6,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=528; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(528,jvj+6,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=204; pile[WZ2]=V14; 
(*f[186])( );     /*BTC0(P,204,V14)*/
pile[WZ1]=528; pile[WZ2]=V15; 
(*f[186])( );     /*BTC0(P,528,V15)*/
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:if((C==0)) goto l2;
V1=C;
goto l8;
l2:V1=1;
goto l8;
l4:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=122; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(122,jvj+3,jvj+4)*/
if((x[jvj+4]!=107)) goto l5;
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(204,jvj+3,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=528; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(528,jvj+3,V10)*/
V10=pile[WZ2]; 
V9=V10*1000000;
V3=V9/V11;
if(V4==incon) goto l10;
if((V3==V4)) goto l6;
if((V3>=V4)) goto l10;
l5:x[jvj+2]=t[x[jvj+2]];
goto l3;
l7:pile[v[22]]=P; pile[WZ1]=204; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(P,204,1)*/
pile[WZ1]=528; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(P,528,0)*/
pile[WZ1]=238; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(P,238,1)*/
goto l9;
l10:V4=V3;
x[jvj+5]=0 ;z[jvj+5]=0;
l6:pile[v[22]]=jvj+5; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+3)*/
goto l5;
}
