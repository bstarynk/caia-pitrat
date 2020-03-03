#include "dx.h"
void ATOME523T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V10=0,V13=0,V28=0,V12=0,V11=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=20523;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3875&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=625)) goto l6;
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+7,jvj+8)*/
pile[v[22]]=1182; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+8,jvj+9)*/
if((68!=x[jvj+9])) goto l6;
pile[v[22]]=160; pile[WZ1]=NNNI; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(160,NNNI,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+10,V13)*/
V13=pile[WZ2]; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+2,V28)*/
V28=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V25; 
(*f[207])( );     /*PLUE2(jvj+3,V25)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+11]=d[20];z[jvj+11]=0;
l4:if((x[jvj+11]<=0)) goto l6;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+12,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,NNNI,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=41)) goto l5;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+16)*/
pile[v[22]]=jvj+12; pile[WZ1]=NNNI; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+12,NNNI,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[3873])( );if(v[102]) goto l5;     /*INFB0(jvj+17,jvj+18)*/
x[jvj+19]=x[jvj+18] ;z[jvj+19]=z[jvj+18];
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+19,V12)*/
V12=pile[WZ2]; 
V11=V12%V13;
if((V11<=0)) goto l5;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+21)*/
x[jvj+29]=x[jvj+16] ;z[jvj+29]=z[jvj+16];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+24)*/
pile[WZ3]=485; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+28)*/
pile[WZ3]=52; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V11; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,V11,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+30)*/
pile[WZ2]=111; pile[WZ3]=jvj+28; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+28,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=107; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+21)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+30)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+27; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+27,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+22,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+38)*/
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V28,858,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3875; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3875,246,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=20523; pile[WZ2]=218; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,20523,218,jvj+37)*/
pile[v[22]]=jvj+38; pile[WZ1]=(-20); pile[WZ2]=jvj+37; pile[WZ3]=159; pile[WZ4]=jvj+39; 
(*f[298])( );     /*TRIENS1(jvj+38,(-20),jvj+37,159,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+39,1,158,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1296])( );     /*NOUVCONTR0(jvj+22,jvj+23)*/
l5:x[jvj+11]=t[x[jvj+11]];
goto l4;
l3:V10=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+3,V10)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
