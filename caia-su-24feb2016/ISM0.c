#include "dx.h"
void ISM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V=0;
int X,TL,AT,Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=10521;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1846&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; TL=pile[v[22]+1]; AT=pile[v[22]+2]; Y=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(AT,Y,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=436; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,436,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=111; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+22; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+15,jvj+22,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=102; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+18,102,jvj+6)*/
pile[v[22]]=248; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(248,X,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=135; pile[WZ1]=jvj+6; pile[WZ2]=X; 
(*f[1380])( );     /*RECZ0(135,jvj+6,X)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+16)*/
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+16)*/
pile[v[22]]=TL; pile[WZ1]=302; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(TL,302,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=V; pile[WZ2]=158; pile[WZ3]=20; pile[WZ4]=jvj+17; 
(*f[692])( );     /*QUADRI13(140,V,158,20,jvj+17)*/
pile[v[22]]=TL; pile[WZ1]=283; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(TL,283,jvj+17)*/
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+6,jvj+7)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+7,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=69)) goto l6;
pile[v[22]]=108; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(108,jvj+8,jvj+10)*/
l4:if((x[jvj+10]<=0)) goto l6;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=69)) goto l5;
pile[v[22]]=jvj+6; pile[WZ1]=TL; pile[WZ2]=103; pile[WZ3]=jvj+11; 
(*f[1846])( );     /*ISM0(jvj+6,TL,103,jvj+11)*/
l5:x[jvj+10]=t[x[jvj+10]];
goto l4;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=161; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(161,jvj+3,jvj+4)*/
if((x[jvj+4]==x[jvj+6])) goto l3;
pile[v[22]]=122; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(122,jvj+3,jvj+5)*/
V10=x[jvj+3];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[1380])( );     /*RECZ0(jvj+5,jvj+4,jvj+6)*/
pile[v[22]]=248; pile[WZ1]=X; pile[WZ2]=V10; 
(*f[134])( );     /*OTA0(248,X,V10)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
