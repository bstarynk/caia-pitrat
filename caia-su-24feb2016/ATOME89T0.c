#include "dx.h"
void ATOME89T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0,V29=0,V5=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=20089;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3208&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l8;
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+5,jvj+6)*/
pile[v[22]]=1182; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+6,jvj+7)*/
if((68!=x[jvj+7])) goto l8;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[R]) goto l2;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(R,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[D]) goto l3;
goto l8;
l3:x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+10,V29)*/
V29=pile[WZ2]; 
x[jvj+11]=d[20];z[jvj+11]=0;
l4:if((x[jvj+11]<=0)) goto l8;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+12,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=1214)) goto l5;
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+12,R,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=484)) goto l5;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+17,jvj+19)*/
x[jvj+20]=x[jvj+19] ;z[jvj+20]=z[jvj+19];
pile[v[22]]=365; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[1969])( );     /*FNDEND0(365,jvj+20,jvj+21)*/
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+2; 
(*f[2031])( );if(v[102]) goto l5;     /*POSCARD0(jvj+22,jvj+2)*/
x[jvj+30]=x[jvj+21] ;z[jvj+30]=z[jvj+21];
l6:if((x[jvj+30]<=0)) goto l5;
x[jvj+23]=s[x[jvj+30]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+30];
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+23,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(280,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V5<V6)) goto l9;
l1:pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(164,jvj+2,V8)*/
V8=pile[WZ2]; 
if((V5>V8)) goto l9;
l7:x[jvj+30]=t[x[jvj+30]];
goto l6;
l5:x[jvj+11]=t[x[jvj+11]];
goto l4;
l9:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+28)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+29)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V29,858,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3208; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3208,246,jvj+27)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20089; pile[WZ4]=jvj+27; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(158,1,218,20089,jvj+27,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=159; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+28)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+29)*/
pile[v[22]]=365; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; pile[WZ3]=jvj+24; 
(*f[1569])( );     /*DELIER0(365,jvj+20,jvj+23,jvj+24)*/
goto l7;
}
