#include "dx.h"
void ATOME59T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,I=0,V31=0,V28=0,V19=0,N=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=20059;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3172&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l8;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+11,V28)*/
V28=pile[WZ2]; 
x[jvj+12]=d[20];z[jvj+12]=0;
l4:if((x[jvj+12]<=0)) goto l8;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=486)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+13,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+17,R,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+18,V19)*/
V19=pile[WZ2]; 
K=V19;
if((K==0)) goto l5;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=K; pile[WZ1]=jvj+2; 
(*f[992])( );if(v[102]) goto l6;     /*FACTPREM0(K,jvj+2)*/
V31=x[jvj+2];
l1:if((V31<=0)) goto l6;
I=s[V31];
pile[v[22]]=jvj+3; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+3,I)*/
V31=t[V31];
goto l1;
l3:x[jvj+5]=s[x[jvj+38]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+38];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+27)*/
pile[WZ3]=N; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=160; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,160,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=111; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+28; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+28,jvj+7)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+7,jvj+8)*/
x[jvj+38]=t[x[jvj+38]];
l2:if((x[jvj+38]>0)) goto l3;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+20; 
(*f[299])( );     /*COPEL0(jvj+8,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+33)*/
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V28,858,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,v[13],642,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=3172; pile[WZ2]=246; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,3172,246,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=20059; pile[WZ2]=218; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,20059,218,jvj+32)*/
pile[v[22]]=jvj+33; pile[WZ1]=(-20); pile[WZ2]=jvj+32; pile[WZ3]=159; pile[WZ4]=jvj+34; 
(*f[298])( );     /*TRIENS1(jvj+33,(-20),jvj+32,159,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+34,1,158,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+20; pile[WZ2]=107; pile[WZ3]=jvj+37; 
(*f[301])( );     /*TRI11(jvj+36,jvj+20,107,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+37,22,100,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+22,jvj+21)*/
x[jvj+3]=t[x[jvj+3]];
l7:if((x[jvj+3]<=0)) goto l5;
N=s[x[jvj+3]];
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+4]=d[119];z[jvj+4]=0;
x[jvj+38]=x[jvj+19] ;z[jvj+38]=z[jvj+19];
goto l2;
l5:x[jvj+12]=t[x[jvj+12]];
goto l4;
l6:pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+19)*/
goto l7;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
