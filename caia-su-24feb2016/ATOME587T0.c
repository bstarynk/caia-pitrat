#include "dx.h"
void ATOME587T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V18=0;
int C;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20587;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3966&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=C; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,C,jvj+14)*/
if((x[jvj+14]!=454)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,C,jvj+12)*/
x[jvj+15]=vo[16];z[jvj+15]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+15; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+15,jvj+2)*/
pile[v[22]]=448; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(448,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l5;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=448)) goto l2;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+4,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=61)) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=128)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+6,jvj+10)*/
pile[v[22]]=436; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+4,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+11,jvj+13)*/
if((x[jvj+13]==135)) goto l3;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:pile[v[22]]=1182; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1182,jvj+2,jvj+16)*/
if((68!=x[jvj+16])) goto l5;
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+10,V20)*/
V20=pile[WZ2]; 
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+17,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=C; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(480,C,jvj+18)*/
l4:if((x[jvj+18]<=0)) goto l5;
x[jvj+20]=s[x[jvj+18]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+18];
pile[v[22]]=101; pile[WZ1]=C; pile[WZ2]=110; pile[WZ3]=(-632); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,C,110,(-632),jvj+25)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V18,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3966; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3966,246,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=20587; pile[WZ2]=218; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,20587,218,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=(-20); pile[WZ2]=jvj+24; pile[WZ3]=159; pile[WZ4]=jvj+26; 
(*f[298])( );     /*TRIENS1(jvj+25,(-20),jvj+24,159,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+26,1,158,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=164; pile[WZ2]=jvj+20; pile[WZ3]=V20; 
(*f[2056])( );     /*VAUT0(jvj+19,164,jvj+20,V20)*/
x[jvj+18]=t[x[jvj+18]];
goto l4;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
