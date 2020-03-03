#include "dx.h"
void COPWSP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,W=0,V24=0,V25=0;
int RM,E,V,G,N,Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=10628;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2201&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RM=pile[v[22]]; E=pile[v[22]+1]; V=pile[v[22]+2]; G=pile[v[22]+3]; N=pile[v[22]+4]; Y=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V25=N;
V24=V;
l8:if((V25>2)) goto l5;
if((V25!=2)) goto l9;
pile[v[22]]=159; pile[WZ1]=E; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,E,jvj+2)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,Y,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l9;
x[jvj+11]=s[x[jvj+3]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+3];
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l2;
pile[v[22]]=159; pile[WZ1]=E; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,E,jvj+4)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,Y,jvj+5)*/
l3:if((x[jvj+5]<=0)) goto l9;
x[jvj+13]=s[x[jvj+5]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+5];
if((x[jvj+13]==x[jvj+11])) goto l4;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l4;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=G; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,G,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+14,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+32; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+32,jvj+29)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+27)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V24; pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,V24,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=436; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,436,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=111; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,111,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+29,jvj+28,jvj+15)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+15; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+15)*/
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+5]=t[x[jvj+5]];
goto l3;
l5:pile[v[22]]=159; pile[WZ1]=E; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,E,jvj+6)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,Y,jvj+7)*/
l6:if((x[jvj+7]<=0)) goto l9;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l7;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
V14=V25-1;
pile[v[22]]=E; pile[WZ1]=159; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(E,159,jvj+8)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=G; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,G,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+24; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+24,jvj+20)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V24; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,V24,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=436; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,436,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=111; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+20,jvj+19,jvj+10)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+10; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+10)*/
V24=W;
V25=V14;
goto l8;
l7:x[jvj+7]=t[x[jvj+7]];
goto l6;
}
