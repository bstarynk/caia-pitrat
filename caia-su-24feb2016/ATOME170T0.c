#include "dx.h"
void ATOME170T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V5=0,V4=0,V28=0,V31=0,V16=0,V19=0,I=0,V34=0,V33=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=20170;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3552&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=625)) goto l7;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,R,V4)*/
V4=pile[WZ2]; 
if((V4!=1)) goto l7;
pile[v[22]]=160; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(160,R,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+6,V28)*/
V28=pile[WZ2]; 
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+7,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=jvj+8; 
(*f[1007])( );if(v[102]) goto l7;     /*DECFACTPREM0(V28,jvj+8)*/
x[jvj+9]=d[20];z[jvj+9]=0;
l3:if((x[jvj+9]<=0)) goto l7;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+10,R,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=596)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+11,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+14,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+10,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+15,R,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+16,V19)*/
V19=pile[WZ2]; 
if((V19!=0)) goto l4;
I=V16;
pile[v[22]]=I; pile[WZ1]=jvj+17; 
(*f[1007])( );if(v[102]) goto l4;     /*DECFACTPREM0(I,jvj+17)*/
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+11,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
x[jvj+36]=x[jvj+8] ;z[jvj+36]=z[jvj+8];
l5:if((x[jvj+36]<=0)) goto l4;
x[jvj+2]=s[x[jvj+36]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+36];
pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+2,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+2,V6)*/
V6=pile[WZ2]; 
x[jvj+35]=x[jvj+17] ;z[jvj+35]=z[jvj+17];
l1:if((x[jvj+35]<=0)) goto l6;
x[jvj+3]=s[x[jvj+35]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+35];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5!=V6)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+3,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+26)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V31,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3552; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3552,246,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=20170; pile[WZ2]=218; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,20170,218,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=(-20); pile[WZ2]=jvj+25; pile[WZ3]=159; pile[WZ4]=jvj+27; 
(*f[298])( );     /*TRIENS1(jvj+26,(-20),jvj+25,159,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+27,1,158,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+28)*/
pile[WZ3]=486; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V33; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,V33,jvj+34)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+33,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=107; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+34)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V34; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V34,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+20; 
(*f[1296])( );     /*NOUVCONTR0(jvj+21,jvj+20)*/
l6:x[jvj+36]=t[x[jvj+36]];
goto l5;
l2:x[jvj+35]=t[x[jvj+35]];
goto l1;
l4:x[jvj+9]=t[x[jvj+9]];
goto l3;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
