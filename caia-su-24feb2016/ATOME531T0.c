#include "dx.h"
void ATOME531T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V8=0,V20=0,V15=0,I=0,V24=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=20531;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3816&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=625)) goto l7;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+2,V20)*/
V20=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V17; 
(*f[207])( );     /*PLUE2(jvj+3,V17)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
pile[v[22]]=160; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(160,NNNI,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+7,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=jvj+8; 
(*f[991])( );if(v[102]) goto l7;     /*ENSFACT0(V15,jvj+8)*/
x[jvj+9]=d[20];z[jvj+9]=0;
l4:if((x[jvj+9]<=0)) goto l7;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=NNNI; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+10,NNNI,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+10,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,NNNI,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
x[jvj+23]=x[jvj+12] ;z[jvj+23]=z[jvj+12];
V24=x[jvj+8];
l6:if((V24<=0)) goto l5;
I=s[V24];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=160; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,160,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=111; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,jvj+15,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+22,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+16,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+28)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V20,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3816; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3816,246,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=20531; pile[WZ2]=218; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,20531,218,jvj+27)*/
pile[v[22]]=jvj+28; pile[WZ1]=(-20); pile[WZ2]=jvj+27; pile[WZ3]=159; pile[WZ4]=jvj+29; 
(*f[298])( );     /*TRIENS1(jvj+28,(-20),jvj+27,159,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+29,1,158,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+17)*/
V24=t[V24];
goto l6;
l3:V8=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+3,V8)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+9]=t[x[jvj+9]];
goto l4;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
