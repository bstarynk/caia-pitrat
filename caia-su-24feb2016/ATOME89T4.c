#include "dx.h"
void ATOME89T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=20089;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3317&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(498,jvj+9,jvj+10)*/
pile[v[22]]=1182; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1182,jvj+10,jvj+11)*/
if((68!=x[jvj+11])) goto l9;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+7)*/
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=1216; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1216,jvj+10,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==1214) goto l5;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==267) goto l4;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==267) goto l4;
l3:x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+3)*/
goto l3;
l6:x[jvj+8]=t[x[jvj+8]];
l5:if((x[jvj+8]<=0)) goto l9;
x[jvj+13]=s[x[jvj+8]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=25)) goto l6;
x[jvj+16]=d[20];z[jvj+16]=0;
l7:if((x[jvj+16]<=0)) goto l6;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+17,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+13; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+18,jvj+13,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=1214)) goto l8;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+13; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+17,jvj+13,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,jvj+13,110,(-601),jvj+29)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+30)*/
pile[v[22]]=602; pile[WZ1]=715; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(602,715,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=3316; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,3316,246,jvj+28)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20089; pile[WZ4]=jvj+28; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(158,289,218,20089,jvj+28,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=159; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+30)*/
(*f[481])( );     /*STOCKER0(jvj+25)*/
l8:x[jvj+16]=t[x[jvj+16]];
goto l7;
}
