#include "dx.h"
void ATOME512T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V31=0,V25=0,V11=0,V32=0,V12=0,V33=0,V29=0;
int NNNM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=20512;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3862&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNM=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNM; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,NNNM,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=408)) goto l13;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+6,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNM; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,NNNM,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=484)) goto l13;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l13;     /*NDD0(jvj+12,jvj+14)*/
pile[v[22]]=509; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(509,jvj+14,jvj+15)*/
pile[v[22]]=103; pile[WZ1]=NNNM; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,NNNM,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
l10:if((x[jvj+15]<=0)) goto l13;
x[jvj+2]=s[x[jvj+15]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+15];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+2,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=408)) goto l11;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+3)*/
pile[WZ1]=NNNM; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNM,jvj+4)*/
V31=x[jvj+3];
l1:if((V31>0)) goto l2;
if((x[jvj+5]!=0)) goto l11;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=929; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+6,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V25; 
(*f[207])( );     /*PLUE2(jvj+7,V25)*/
l5:pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+8)*/
V32=x[jvj+8];
l6:if((V32>0)) goto l7;
pile[v[22]]=1006; pile[WZ1]=NNNM; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1006,NNNM,jvj+9)*/
V33=x[jvj+9];
l8:if((V33>0)) goto l9;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+2,jvj+20)*/
pile[v[22]]=102; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+2,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+20,jvj+23)*/
if((x[jvj+23]==135)) goto l12;
l11:x[jvj+15]=t[x[jvj+15]];
goto l10;
l2:V6=s[V31];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V6) goto l4;
l3:V31=t[V31];
goto l1;
l4:pile[v[22]]=jvj+5; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+5,V6)*/
goto l3;
l7:V11=s[V32];
pile[v[22]]=jvj+7; pile[WZ1]=V11; 
(*f[207])( );     /*PLUE2(jvj+7,V11)*/
V32=t[V32];
goto l6;
l9:V12=s[V33];
pile[v[22]]=jvj+7; pile[WZ1]=V12; 
(*f[207])( );     /*PLUE2(jvj+7,V12)*/
V33=t[V33];
goto l8;
l12:x[jvj+29]=x[jvj+22] ;z[jvj+29]=z[jvj+22];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,jvj+17,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+28,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1006; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+24,1006,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=NNNM; pile[WZ2]=110; pile[WZ3]=(-11752); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,NNNM,110,(-11752),jvj+34)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V29,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=3862; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,3862,246,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=20512; pile[WZ2]=218; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,20512,218,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=(-20); pile[WZ2]=jvj+33; pile[WZ3]=159; pile[WZ4]=jvj+35; 
(*f[298])( );     /*TRIENS1(jvj+34,(-20),jvj+33,159,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+35,1,158,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[1296])( );     /*NOUVCONTR0(jvj+24,jvj+25)*/
goto l11;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
