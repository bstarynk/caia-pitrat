#include "dx.h"
void ATOME122T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V17=0,V10=0,I=0,J=0,V20=0,V3=0,V37=0,V38=0,V39=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20122;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3544&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l4;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,R,V5)*/
V5=pile[WZ2]; 
if((V5<=1)) goto l4;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+4,V17)*/
V17=pile[WZ2]; 
x[jvj+5]=d[20];z[jvj+5]=0;
l1:if((x[jvj+5]<=0)) goto l4;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=268; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+6,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+7,R,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+8,V10)*/
V10=pile[WZ2]; 
I=V10;
pile[v[22]]=I; pile[WZ1]=jvj+23; 
(*f[1007])( );if(v[102]) goto l2;     /*DECFACTPREM0(I,jvj+23)*/
x[jvj+25]=0 ;z[jvj+25]=0;
l5:if((x[jvj+23]>0)) goto l6;
V3=x[jvj+25];
pile[v[22]]=jvj+6; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+6,R,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
V20=V3;
l3:if((V20<=0)) goto l2;
J=s[V20];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+17)*/
pile[v[22]]=V17; pile[WZ1]=858; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(V17,858,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,v[13],642,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=3544; pile[WZ2]=246; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,3544,246,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=20122; pile[WZ2]=218; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+15,20122,218,jvj+16)*/
pile[v[22]]=jvj+17; pile[WZ1]=(-20); pile[WZ2]=jvj+16; pile[WZ3]=159; pile[WZ4]=jvj+18; 
(*f[298])( );     /*TRIENS1(jvj+17,(-20),jvj+16,159,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+18,1,158,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+22)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+10; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,jvj+10,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; 
(*f[1296])( );     /*NOUVCONTR0(jvj+12,jvj+11)*/
V20=t[V20];
goto l3;
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l6:x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=515; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(515,jvj+24,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(510,jvj+24,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=V38; 
(*f[1006])( );if(v[102]) goto l7;     /*POWER0(V37,V38,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=V39; 
(*f[207])( );     /*PLUE2(jvj+25,V39)*/
l7:x[jvj+23]=t[x[jvj+23]];
goto l5;
}
