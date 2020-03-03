#include "dx.h"
void ATOME158T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,RZ=0,II=0,V19=0,V21=0,V16=0,V17=0,V18=0,V20=0,V6=0,V14=0;
int D,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=20158;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3504&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6!=2)) goto l9;
pile[v[22]]=868; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(868,R,jvj+14)*/
if((x[jvj+14]!=25)) goto l9;
pile[v[22]]=202; pile[WZ1]=D; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,D,jvj+15)*/
if((x[jvj+15]!=68)) goto l9;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+16,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l9;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
if((x[jvj+4]!=x[D])) goto l2;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l2:pile[v[22]]=202; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(202,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l9;
l8:pile[v[22]]=R; pile[WZ1]=jvj+4; pile[WZ2]=68; pile[WZ3]=jvj+9; 
(*f[1931])( );if(v[102]) goto l9;     /*ISOLONS0(R,jvj+4,68,jvj+9)*/
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+6)*/
pile[v[22]]=D; pile[WZ1]=jvj+7; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(D,jvj+7)*/
l3:if((x[jvj+6]<=0)) goto l5;
x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+8,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+7; pile[WZ2]=V10; 
(*f[3505])( );if(v[102]) goto l4;     /*INTERPRETATION0(jvj+9,jvj+7,V10,RZ)*/
RZ=pile[WZ3]; 
pile[v[22]]=jvj+10; pile[WZ1]=RZ; 
(*f[207])( );     /*PLUE2(jvj+10,RZ)*/
l4:x[jvj+6]=t[x[jvj+6]];
goto l3;
l5:pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+4,jvj+11)*/
l6:if((x[jvj+10]<=0)) goto l7;
II=s[x[jvj+10]];
pile[v[22]]=jvj+11; pile[WZ1]=II; pile[WZ2]=jvj+12; 
(*f[1765])( );     /*AJARR0(jvj+11,II,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+21)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[v[22]]=V14; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V14,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3504; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3504,246,jvj+20)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20158; pile[WZ4]=jvj+20; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,1,218,20158,jvj+20,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=159; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+22)*/
pile[WZ1]=365; pile[WZ2]=jvj+4; pile[WZ3]=jvj+12; 
(*f[1753])( );     /*LIER1(jvj+13,365,jvj+4,jvj+12)*/
x[jvj+10]=t[x[jvj+10]];
goto l6;
l7:if((v[225]<=0)) goto l10;
V19=x[jvj+4];
V21=x[R];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1395; 
(*f[42])( );     /*SRA1(135,0,1395,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=20158; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,20158,V16,V17)*/
V17=pile[WZ3]; 
pile[WZ1]=V19; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V19,V17,V18)*/
V18=pile[WZ3]; 
pile[WZ1]=V21; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(20,V21,V18,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
l10:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+26)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[v[22]]=V14; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V14,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3504; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3504,246,jvj+25)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20158; pile[WZ4]=jvj+25; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,1,218,20158,jvj+25,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+27)*/
pile[WZ1]=202; pile[WZ2]=jvj+4; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+17,202,jvj+4,68)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
