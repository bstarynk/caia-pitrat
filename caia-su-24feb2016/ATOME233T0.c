#include "dx.h"
void ATOME233T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,I=0,J=0,V45=0,V29=0,V38=0,V40=0,V42=0,V33=0,V34=0,V36=0,V37=0,V39=0,V41=0,V4=0,V31=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=20233;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3572&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,R,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=55)) goto l11;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,R,V4)*/
V4=pile[WZ2]; 
if((V4!=1)) goto l11;
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(642,jvj+19,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+22; 
(*f[887])( );     /*VARND0(R,jvj+22)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,R,jvj+23)*/
x[jvj+13]=0 ;z[jvj+13]=0;
l1:if((x[jvj+23]>0)) goto l2;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1294,R,jvj+24)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==1598) goto l9;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+4]=s[x[jvj+23]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+23];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l3;
x[jvj+7]=d[20];z[jvj+7]=0;
l4:if((x[jvj+7]<=0)) goto l3;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,jvj+4,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+8,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+11,jvj+4,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+12,V17)*/
V17=pile[WZ2]; 
I=V17;
pile[v[22]]=jvj+13; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+13,I)*/
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l3:x[jvj+23]=t[x[jvj+23]];
goto l1;
l8:if((v[225]<=0)) goto l12;
pile[v[22]]=746; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(746,R,jvj+17)*/
pile[v[22]]=218; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(218,jvj+17,jvj+18)*/
pile[v[22]]=929; pile[WZ1]=jvj+19; 
(*f[1975])( );if(v[102]) goto l12;     /*FNDCND0(929,jvj+19,V29)*/
V29=pile[WZ2]; 
V38=x[jvj+2];
V40=x[R];
V42=x[jvj+18];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1395; 
(*f[42])( );     /*SRA1(135,0,1395,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V29; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,V29,V33,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=20233; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(20,20233,V34,V36)*/
V36=pile[WZ3]; 
pile[WZ1]=V38; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,V38,V36,V37)*/
V37=pile[WZ3]; 
pile[WZ1]=V40; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V40,V37,V39)*/
V39=pile[WZ3]; 
pile[WZ1]=V42; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(20,V42,V39,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; 
(*f[40])( );     /*SLG0(V41)*/
l12:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+36)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(V31,858,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,v[13],642,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=3572; pile[WZ2]=246; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,3572,246,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=20233; pile[WZ2]=218; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,20233,218,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=(-20); pile[WZ2]=jvj+35; pile[WZ3]=159; pile[WZ4]=jvj+37; 
(*f[298])( );     /*TRIENS1(jvj+36,(-20),jvj+35,159,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+37,1,158,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=202; pile[WZ2]=jvj+2; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+25,202,jvj+2,68)*/
l10:x[jvj+22]=t[x[jvj+22]];
l9:if((x[jvj+22]<=0)) goto l11;
x[jvj+2]=s[x[jvj+22]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+22];
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(202,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l10;
l6:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+2,jvj+14)*/
V45=x[jvj+13];
l7:if((V45<=0)) goto l8;
J=s[V45];
pile[v[22]]=jvj+14; pile[WZ1]=J; pile[WZ2]=jvj+15; 
(*f[1765])( );     /*AJARR0(jvj+14,J,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+30)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V31,858,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=3572; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,3572,246,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=20233; pile[WZ2]=218; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+28,20233,218,jvj+29)*/
pile[v[22]]=jvj+30; pile[WZ1]=(-20); pile[WZ2]=jvj+29; pile[WZ3]=159; pile[WZ4]=jvj+31; 
(*f[298])( );     /*TRIENS1(jvj+30,(-20),jvj+29,159,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+31,1,158,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=365; pile[WZ2]=jvj+2; pile[WZ3]=jvj+15; 
(*f[1753])( );     /*LIER1(jvj+16,365,jvj+2,jvj+15)*/
V45=t[V45];
goto l7;
}
