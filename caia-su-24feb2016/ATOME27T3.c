#include "dx.h"
void ATOME27T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=20027;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3968&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=663; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(663,N,jvj+14)*/
if((x[jvj+14]!=68)) goto l6;
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+15,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=N; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(480,N,jvj+16)*/
pile[v[22]]=100; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,N,jvj+3)*/
if((x[jvj+3]!=454)) goto l5;
pile[v[22]]=160; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,N,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=128)) goto l5;
pile[v[22]]=128; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(128,jvj+4,jvj+6)*/
l1:if((x[jvj+6]<=0)) goto l5;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==464)) goto l6;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[jvj+12]=s[x[jvj+27]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+27];
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V15,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3968; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3968,246,jvj+20)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20027; pile[WZ4]=jvj+20; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(158,1,218,20027,jvj+20,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=365; pile[WZ2]=jvj+11; pile[WZ3]=jvj+12; 
(*f[1753])( );     /*LIER1(jvj+10,365,jvj+11,jvj+12)*/
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V15,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3968; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3968,246,jvj+23)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20027; pile[WZ4]=jvj+23; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,1,218,20027,jvj+23,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=202; pile[WZ2]=jvj+12; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+13,202,jvj+12,68)*/
x[jvj+27]=t[x[jvj+27]];
l3:if((x[jvj+27]>0)) goto l4;
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V15,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3968; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3968,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20027; pile[WZ4]=jvj+26; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,1,218,20027,jvj+26,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=202; pile[WZ2]=jvj+11; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+17,202,jvj+11,68)*/
x[jvj+16]=t[x[jvj+16]];
l5:if((x[jvj+16]<=0)) goto l6;
x[jvj+11]=s[x[jvj+16]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+16];
pile[v[22]]=481; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(481,N,jvj+9)*/
x[jvj+27]=x[jvj+9] ;z[jvj+27]=z[jvj+9];
goto l3;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
