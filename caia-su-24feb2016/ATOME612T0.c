#include "dx.h"
void ATOME612T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V14=0,V25=0,V16=0,V15=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=20612;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3840&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l8;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+4,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[1361])( );     /*VAROBJ0(R,jvj+9)*/
for(i=x[jvj+9],V16=0;i>0;i=t[i],V16++)  ;
if((V16!=2)) goto l8;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=929; pile[WZ1]=jvj+4; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+4,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=V22; 
(*f[207])( );     /*PLUE2(jvj+5,V22)*/
l1:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1006,R,jvj+6)*/
l2:if((x[jvj+6]>0)) goto l3;
pile[v[22]]=R; pile[WZ1]=jvj+10; 
(*f[1945])( );if(v[102]) goto l8;     /*DEGREE0(R,jvj+10)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+10,V15)*/
V15=pile[WZ2]; 
if((V15==2)) goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:V14=s[x[jvj+6]];
pile[v[22]]=jvj+5; pile[WZ1]=V14; 
(*f[207])( );     /*PLUE2(jvj+5,V14)*/
x[jvj+6]=t[x[jvj+6]];
goto l2;
l7:pile[v[22]]=jvj+11; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+17)*/
x[jvj+30]=x[jvj+13] ;z[jvj+30]=z[jvj+13];
x[jvj+33]=x[jvj+15] ;z[jvj+33]=z[jvj+15];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1929; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,1929,jvj+22)*/
pile[WZ3]=485; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+23)*/
pile[WZ3]=596; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+29,jvj+24)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-4); pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,(-4),jvj+32)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+32)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+17)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+25)*/
pile[WZ1]=103; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+22,jvj+21,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=1006; pile[WZ2]=jvj+5; 
(*f[34])( );     /*CHGC0(jvj+18,1006,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+38)*/
pile[v[22]]=V25; pile[WZ1]=858; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V25,858,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3840; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3840,246,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=20612; pile[WZ2]=218; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,20612,218,jvj+37)*/
pile[v[22]]=jvj+38; pile[WZ1]=(-20); pile[WZ2]=jvj+37; pile[WZ3]=159; pile[WZ4]=jvj+39; 
(*f[298])( );     /*TRIENS1(jvj+38,(-20),jvj+37,159,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+39,1,158,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[1296])( );     /*NOUVCONTR0(jvj+18,jvj+19)*/
l5:x[jvj+9]=t[x[jvj+9]];
l4:if((x[jvj+9]<=0)) goto l8;
x[jvj+2]=s[x[jvj+9]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+9];
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(202,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l5;
l6:pile[v[22]]=jvj+2; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[3841])( );     /*DEG20(jvj+2,R,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[3842])( );     /*DEG10(jvj+2,R,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=jvj+2; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[3843])( );     /*DEG00(jvj+2,R,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+16; 
(*f[1446])( );     /*NONUL0(jvj+11,jvj+16)*/
if((x[jvj+16]==135)) goto l7;
goto l5;
}
