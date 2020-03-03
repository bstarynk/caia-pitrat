#include "dx.h"
void ATOME223T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V17=0,V25=0,V27=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=20223;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3529&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1353,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l8;
pile[v[22]]=498; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+9,jvj+11)*/
pile[v[22]]=1182; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+11,jvj+12)*/
if((68!=x[jvj+12])) goto l8;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(280,D,V3)*/
V3=pile[WZ2]; 
if((V3<0)) goto l8;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=509; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l4;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==670) goto l3;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==670) goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+3)*/
goto l2;
l5:x[jvj+8]=t[x[jvj+8]];
l4:if((x[jvj+8]<=0)) goto l8;
x[jvj+13]=s[x[jvj+8]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=625)) goto l5;
pile[v[22]]=160; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,jvj+13,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+16,V17)*/
V17=pile[WZ2]; 
x[jvj+17]=d[20];z[jvj+17]=0;
l6:if((x[jvj+17]<=0)) goto l5;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+18; pile[WZ3]=jvj+19; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(jvj+13,jvj+18,V25,jvj+19)*/
V25=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+18,jvj+20)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+20; pile[WZ3]=jvj+21; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(jvj+13,jvj+20,V27,jvj+21)*/
V27=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+26)*/
pile[WZ1]=jvj+13; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,jvj+13,110,(-601),jvj+27)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(206,715,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3528; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3528,246,jvj+25)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20223; pile[WZ4]=jvj+25; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(158,289,218,20223,jvj+25,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=159; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+22,159,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+22,159,jvj+27)*/
(*f[481])( );     /*STOCKER0(jvj+22)*/
l7:x[jvj+17]=t[x[jvj+17]];
goto l6;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
