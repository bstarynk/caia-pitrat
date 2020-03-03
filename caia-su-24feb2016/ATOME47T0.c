#include "dx.h"
void ATOME47T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V31=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=20047;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3535&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l6;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+8,V31)*/
V31=pile[WZ2]; 
x[jvj+9]=d[20];z[jvj+9]=0;
l2:if((x[jvj+9]<=0)) goto l6;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+11,R,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=486)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+10,R,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+16)*/
x[jvj+39]=x[jvj+15] ;z[jvj+39]=z[jvj+15];
l4:if((x[jvj+39]<=0)) goto l3;
x[jvj+2]=s[x[jvj+39]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+39];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+17)*/
x[jvj+22]=incon;
pile[WZ1]=jvj+3; 
(*f[1446])( );     /*NONUL0(jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l7;
l1:pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1446])( );     /*NONUL0(jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l8;
if(x[jvj+22]==incon) goto l9;
l5:x[jvj+32]=x[jvj+17] ;z[jvj+32]=z[jvj+17];
x[jvj+18]=x[jvj+22] ;z[jvj+18]=z[jvj+22];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+27)*/
pile[WZ3]=408; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,jvj+16,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+28)*/
pile[WZ2]=111; pile[WZ3]=jvj+27; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+27,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+19)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+28)*/
pile[WZ1]=1338; pile[WZ2]=R; 
(*f[35])( );     /*CHGC1(jvj+20,1338,R)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V31,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3535; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3535,246,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=20047; pile[WZ2]=218; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,20047,218,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=(-20); pile[WZ2]=jvj+36; pile[WZ3]=159; pile[WZ4]=jvj+38; 
(*f[298])( );     /*TRIENS1(jvj+37,(-20),jvj+36,159,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+38,1,158,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+20,jvj+21)*/
x[jvj+39]=t[x[jvj+39]];
goto l4;
l3:x[jvj+9]=t[x[jvj+9]];
goto l2;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+22)*/
goto l1;
l8:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+22)*/
goto l5;
l9:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+26; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+26,jvj+22)*/
goto l5;
}
