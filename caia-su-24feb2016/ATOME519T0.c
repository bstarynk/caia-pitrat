#include "dx.h"
void ATOME519T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V5=0,V15=0,V10=0,V9=0,I=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20519;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3813&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=770)) goto l5;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+2,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,NNNI,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+7,V10)*/
V10=pile[WZ2]; 
V9=V10-1;
pile[v[22]]=V9; pile[WZ1]=2; pile[WZ2]=jvj+8; 
(*f[3801])( );     /*ENSINTERV0(V9,2,jvj+8)*/
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V12; 
(*f[207])( );     /*PLUE2(jvj+3,V12)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+9)*/
l4:if((x[jvj+8]<=0)) goto l5;
I=s[x[jvj+8]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=568; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,568,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+16)*/
pile[WZ3]=I; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=160; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,160,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=111; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+13,jvj+14,111,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+17; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+17,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+10,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+22)*/
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V15,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3813; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3813,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20519; pile[WZ2]=218; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20519,218,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=(-20); pile[WZ2]=jvj+21; pile[WZ3]=159; pile[WZ4]=jvj+23; 
(*f[298])( );     /*TRIENS1(jvj+22,(-20),jvj+21,159,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+23,1,158,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[1296])( );     /*NOUVCONTR0(jvj+10,jvj+11)*/
x[jvj+8]=t[x[jvj+8]];
goto l4;
l3:V5=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V5; 
(*f[207])( );     /*PLUE2(jvj+3,V5)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
