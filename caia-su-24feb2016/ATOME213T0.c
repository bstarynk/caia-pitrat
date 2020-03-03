#include "dx.h"
void ATOME213T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V22=0,V11=0,V24=0,V26=0,V25=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=20213;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3565&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=625)) goto l5;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,R,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+4,V20)*/
V20=pile[WZ2]; 
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+5,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=jvj+6; 
(*f[1007])( );if(v[102]) goto l5;     /*DECFACTPREM0(V20,jvj+6)*/
x[jvj+7]=d[20];z[jvj+7]=0;
l1:if((x[jvj+7]<=0)) goto l5;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,R,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+8,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+11,R,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+12,V11)*/
V11=pile[WZ2]; 
if((V11!=0)) goto l2;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+13)*/
x[jvj+37]=x[jvj+13] ;z[jvj+37]=z[jvj+13];
x[jvj+44]=x[jvj+13] ;z[jvj+44]=z[jvj+13];
x[jvj+45]=x[jvj+6] ;z[jvj+45]=z[jvj+6];
l3:if((x[jvj+45]<=0)) goto l2;
x[jvj+14]=s[x[jvj+45]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+45];
pile[v[22]]=510; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+14,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(515,jvj+14,V26)*/
V26=pile[WZ2]; 
V25=(-V26);
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+21)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V22,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3565; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3565,246,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=20213; pile[WZ2]=218; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,20213,218,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ2]=jvj+20; pile[WZ3]=159; pile[WZ4]=jvj+22; 
(*f[298])( );     /*TRIENS1(jvj+21,(-20),jvj+20,159,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+22,1,158,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+23)*/
pile[WZ3]=25; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+29; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+29,jvj+24)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+30)*/
pile[WZ3]=26; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=103; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+34,jvj+35,103,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+36,jvj+31)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+42)*/
pile[WZ3]=V25; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,V25,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=160; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,160,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=111; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+32)*/
pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+30,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+25)*/
pile[WZ1]=jvj+15; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+15)*/
l4:x[jvj+45]=t[x[jvj+45]];
goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
