#include "dx.h"
void ATOME510T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V34=0,V13=0,V40=0,V14=0,V41=0,V38=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20510;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3933&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,NNNI,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=408)) goto l10;
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1948])( );if(v[102]) goto l10;     /*FNDOND0(498,jvj+9,jvj+10)*/
pile[v[22]]=1182; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1182,jvj+10,jvj+11)*/
if((68!=x[jvj+11])) goto l10;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+2,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=NNNI; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,NNNI,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=484)) goto l10;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l10;     /*NDD0(jvj+12,jvj+14)*/
pile[v[22]]=509; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(509,jvj+14,jvj+15)*/
pile[v[22]]=102; pile[WZ1]=NNNI; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,NNNI,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
l6:if((x[jvj+15]<=0)) goto l10;
x[jvj+4]=s[x[jvj+15]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+15];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+4,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=278)) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+4,jvj+20)*/
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=596)) goto l7;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V34; 
(*f[207])( );     /*PLUE2(jvj+3,V34)*/
l1:pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V40=x[jvj+5];
l2:if((V40>0)) goto l3;
pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+6)*/
V41=x[jvj+6];
l4:if((V41>0)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+20,jvj+23)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+4,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+20,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[3873])( );if(v[102]) goto l7;     /*INFB0(jvj+26,jvj+27)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+23; pile[WZ2]=jvj+28; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+23,jvj+28)*/
if((x[jvj+28]==135)) goto l8;
l7:x[jvj+15]=t[x[jvj+15]];
goto l6;
l3:V13=s[V40];
pile[v[22]]=jvj+3; pile[WZ1]=V13; 
(*f[207])( );     /*PLUE2(jvj+3,V13)*/
V40=t[V40];
goto l2;
l5:V14=s[V41];
pile[v[22]]=jvj+3; pile[WZ1]=V14; 
(*f[207])( );     /*PLUE2(jvj+3,V14)*/
V41=t[V41];
goto l4;
l8:x[jvj+36]=x[jvj+25] ;z[jvj+36]=z[jvj+25];
x[jvj+29]=x[jvj+27] ;z[jvj+29]=z[jvj+27];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[1352])( );     /*POSITIF0(jvj+29,jvj+30)*/
if((x[jvj+30]==135)) goto l9;
goto l7;
l9:pile[v[22]]=jvj+29; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+34)*/
pile[WZ3]=596; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+40,jvj+31,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+41; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+41,jvj+38)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+37,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+32,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+46)*/
pile[v[22]]=V38; pile[WZ1]=858; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(V38,858,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,v[13],642,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=3933; pile[WZ2]=246; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,3933,246,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=20510; pile[WZ2]=218; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,20510,218,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=(-20); pile[WZ2]=jvj+45; pile[WZ3]=159; pile[WZ4]=jvj+47; 
(*f[298])( );     /*TRIENS1(jvj+46,(-20),jvj+45,159,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+47,1,158,jvj+33)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1296])( );     /*NOUVCONTR0(jvj+32,jvj+33)*/
goto l7;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
