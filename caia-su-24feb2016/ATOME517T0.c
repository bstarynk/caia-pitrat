#include "dx.h"
void ATOME517T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V27=0,V29=0,V18=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=48;
x[jvj+1]=20517;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3868&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,NNNI,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l4;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+2,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=jvj+6; 
(*f[3798])( );if(v[102]) goto l4;     /*NEWVAR0(jvj+6)*/
pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
x[jvj+8]=d[20];z[jvj+8]=0;
l1:if((x[jvj+8]<=0)) goto l4;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=NNNI; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+9,NNNI,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=1329)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+10,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+13,V18)*/
V18=pile[WZ2]; 
if((V18!=2)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+10,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+9,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=NNNI; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+16,NNNI,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[1353])( );     /*POSOUNUL0(jvj+17,jvj+18)*/
if((x[jvj+18]==135)) goto l3;
l2:x[jvj+8]=t[x[jvj+8]];
goto l1;
l3:pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+19)*/
x[jvj+25]=x[jvj+15] ;z[jvj+25]=z[jvj+15];
x[jvj+40]=x[jvj+19] ;z[jvj+40]=z[jvj+19];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+21)*/
pile[WZ3]=485; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+26)*/
pile[WZ3]=486; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+29)*/
pile[WZ3]=596; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+35)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=87; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+37; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+37,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+32,jvj+33,103,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+34,jvj+30)*/
pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+29,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+30)*/
pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+42)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+42,jvj+41,jvj+28)*/
pile[WZ2]=111; pile[WZ3]=jvj+26; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+26,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+28)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+3)*/
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+2,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[235])( );     /*PLUSC2(V27,1006,jvj+3)*/
l5:pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+47)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(V29,858,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,v[13],642,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=3868; pile[WZ2]=246; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,3868,246,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=20517; pile[WZ2]=218; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,20517,218,jvj+46)*/
pile[v[22]]=jvj+47; pile[WZ1]=(-20); pile[WZ2]=jvj+46; pile[WZ3]=159; pile[WZ4]=jvj+48; 
(*f[298])( );     /*TRIENS1(jvj+47,(-20),jvj+46,159,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+48,1,158,jvj+20)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+20; 
(*f[1296])( );     /*NOUVCONTR0(jvj+3,jvj+20)*/
goto l2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
