#include "dx.h"
void ATOME511T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V9=0,V26=0,V10=0,V27=0,V24=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20511;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3860&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,NNNI,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=408)) goto l9;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+2,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=NNNI; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,NNNI,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l9;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l9;     /*NDD0(jvj+9,jvj+11)*/
pile[v[22]]=509; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(509,jvj+11,jvj+12)*/
pile[v[22]]=102; pile[WZ1]=NNNI; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,NNNI,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
l6:if((x[jvj+12]<=0)) goto l9;
x[jvj+4]=s[x[jvj+12]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+12];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+4,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=408)) goto l7;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V20; 
(*f[207])( );     /*PLUE2(jvj+3,V20)*/
l1:pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V26=x[jvj+5];
l2:if((V26>0)) goto l3;
pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+6)*/
V27=x[jvj+6];
l4:if((V27>0)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+4,jvj+17)*/
pile[v[22]]=103; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+4,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+17,jvj+20)*/
if((x[jvj+20]==135)) goto l8;
l7:x[jvj+12]=t[x[jvj+12]];
goto l6;
l3:V9=s[V26];
pile[v[22]]=jvj+3; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+3,V9)*/
V26=t[V26];
goto l2;
l5:V10=s[V27];
pile[v[22]]=jvj+3; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+3,V10)*/
V27=t[V27];
goto l4;
l8:x[jvj+25]=x[jvj+19] ;z[jvj+25]=z[jvj+19];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+26; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+26,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+21,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+31)*/
pile[v[22]]=V24; pile[WZ1]=858; pile[WZ2]=jvj+27; 
(*f[46])( );     /*TRI0(V24,858,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3860; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3860,246,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=20511; pile[WZ2]=218; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,20511,218,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=(-20); pile[WZ2]=jvj+30; pile[WZ3]=159; pile[WZ4]=jvj+32; 
(*f[298])( );     /*TRIENS1(jvj+31,(-20),jvj+30,159,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+32,1,158,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[1296])( );     /*NOUVCONTR0(jvj+21,jvj+22)*/
goto l7;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
