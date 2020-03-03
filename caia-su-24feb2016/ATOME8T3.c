#include "dx.h"
void ATOME8T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V12=0,I=0,V22=0,V4=0,QQ=0,V6=0,Q=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20008;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3164&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,RR,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l19;
pile[v[22]]=869; pile[WZ1]=RR; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(869,RR,jvj+8)*/
if((x[jvj+8]!=769)) goto l19;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1274,RR,V9)*/
V9=pile[WZ2]; 
if((V9!=0)) goto l19;
l10:pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(870,RR,QQ)*/
QQ=pile[WZ2]; 
V4=incon;
if((QQ<0)) goto l19;
if((QQ<=1)) goto l4;
if((QQ<=3)) goto l5;
V4=0;
l11:pile[v[22]]=RR; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(RR,jvj+9)*/
l12:if((x[jvj+9]<=0)) goto l19;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=509; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1969])( );     /*FNDEND0(509,jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[RR]) goto l14;
l13:x[jvj+9]=t[x[jvj+9]];
goto l12;
l1:pile[v[22]]=1006; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,jvj+3,jvj+4)*/
pile[WZ1]=RR; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+5)*/
V22=x[jvj+4];
l2:if((V22>0)) goto l3;
pile[v[22]]=V4; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[1552])( );     /*PROG0(V4,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+23)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+24)*/
pile[WZ1]=jvj+10; pile[WZ3]=(-656); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,jvj+10,110,(-656),jvj+25)*/
pile[v[22]]=jvj+18; pile[WZ1]=715; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+18,715,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3161; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3161,246,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20008; pile[WZ4]=jvj+22; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,289,218,20008,jvj+22,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+25)*/
(*f[481])( );     /*STOCKER0(jvj+19)*/
l16:x[jvj+26]=t[x[jvj+26]];
l15:if((x[jvj+26]<=0)) goto l13;
x[jvj+3]=s[x[jvj+26]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+26];
if((x[jvj+3]==x[RR])) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+3,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=25)) goto l16;
pile[v[22]]=869; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(869,jvj+3,jvj+15)*/
if((x[jvj+15]!=769)) goto l16;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1274,jvj+3,V12)*/
V12=pile[WZ2]; 
if((V12!=0)) goto l16;
l17:pile[v[22]]=870; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(870,jvj+3,V6)*/
V6=pile[WZ2]; 
Q=V6;
x[jvj+17]=incon;
if((Q<3)) goto l9;
if((Q<=4)) goto l6;
if((Q==5)) goto l7;
if((Q==6)) goto l8;
if((Q!=7)) goto l9;
x[jvj+17]=606 ;z[jvj+17]=606;
l18:pile[v[22]]=jvj+3; pile[WZ1]=jvj+16; 
(*f[887])( );     /*VARND0(jvj+3,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l1;
goto l16;
l3:I=s[V22];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==I) goto l16;
V22=t[V22];
goto l2;
l4:V4=3;
goto l11;
l5:V4=1;
goto l11;
l6:x[jvj+17]=206 ;z[jvj+17]=206;
goto l18;
l7:x[jvj+17]=604 ;z[jvj+17]=604;
goto l18;
l8:x[jvj+17]=605 ;z[jvj+17]=605;
goto l18;
l9:x[jvj+17]=(-99999998);
goto l16;
l14:pile[v[22]]=RR; pile[WZ1]=jvj+10; pile[WZ2]=67; pile[WZ3]=jvj+12; 
(*f[1931])( );if(v[102]) goto l13;     /*ISOLONS0(RR,jvj+10,67,jvj+12)*/
x[jvj+26]=x[jvj+11] ;z[jvj+26]=z[jvj+11];
goto l15;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
