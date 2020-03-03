#include "dx.h"
void ATOME6T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,LL=0,V5=0,Q=0,V17=0;
int DY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20006;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3125&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DY=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l15;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[v[22]]=1182; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1182,jvj+4,jvj+5)*/
if((68!=x[jvj+5])) goto l15;
pile[v[22]]=998; pile[WZ1]=DY; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(998,DY,LL)*/
LL=pile[WZ2]; 
V3=incon;
if((LL<1)) goto l15;
if((LL<=2)) goto l1;
if((LL<=5)) goto l2;
if((LL<=12)) goto l3;
V3=3;
l9:pile[v[22]]=509; pile[WZ1]=DY; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,DY,jvj+6)*/
l10:if((x[jvj+6]<=0)) goto l15;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l11;
pile[v[22]]=870; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,jvj+7,V5)*/
V5=pile[WZ2]; 
Q=V5;
x[jvj+10]=incon;
if((Q==2)) goto l4;
if((Q==3)) goto l5;
if((Q==4)) goto l6;
if((Q==5)) goto l7;
if((Q==6)) goto l8;
x[jvj+10]=(-99999998);
l11:x[jvj+6]=t[x[jvj+6]];
goto l10;
l1:V3=0;
goto l9;
l2:V3=1;
goto l9;
l3:V3=2;
goto l9;
l4:x[jvj+10]=602 ;z[jvj+10]=602;
l12:pile[v[22]]=V3; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1552])( );     /*PROG0(V3,jvj+10,jvj+11)*/
x[jvj+12]=d[20];z[jvj+12]=0;
l13:if((x[jvj+12]<=0)) goto l11;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+13,jvj+14)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l14;     /*FNDZ0(jvj+7,jvj+14,V17,jvj+15)*/
V17=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=jvj+7; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+13,jvj+7,jvj+16)*/
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,jvj+7,110,(-601),jvj+21)*/
pile[WZ1]=jvj+16; pile[WZ3]=(-596); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,jvj+16,110,(-596),jvj+22)*/
pile[v[22]]=jvj+11; pile[WZ1]=715; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+11,715,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3115; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3115,246,jvj+20)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20006; pile[WZ4]=jvj+20; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,289,218,20006,jvj+20,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+22)*/
(*f[481])( );     /*STOCKER0(jvj+17)*/
l14:x[jvj+12]=t[x[jvj+12]];
goto l13;
l5:x[jvj+10]=603 ;z[jvj+10]=603;
goto l12;
l6:x[jvj+10]=206 ;z[jvj+10]=206;
goto l12;
l7:x[jvj+10]=604 ;z[jvj+10]=604;
goto l12;
l8:x[jvj+10]=605 ;z[jvj+10]=605;
goto l12;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
