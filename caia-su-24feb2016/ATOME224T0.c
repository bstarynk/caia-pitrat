#include "dx.h"
void ATOME224T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V22=0,V34=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=31;
x[jvj+1]=20224;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3584&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l7;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+5,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=1310; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1310,D,jvj+6)*/
pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=jvj+7; 
(*f[445])( );     /*TRI15(41,0,jvj+7)*/
x[jvj+8]=d[20];z[jvj+8]=0;
l1:if((x[jvj+8]<=0)) goto l7;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+9,R,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=636)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+9,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+14,V22)*/
V22=pile[WZ2]; 
if((V22!=1)) goto l2;
x[jvj+15]=d[20];z[jvj+15]=0;
l3:if((x[jvj+15]<=0)) goto l2;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+10; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+16,jvj+10,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=484)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+16,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+10; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+19,jvj+10,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=484)) goto l4;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+22; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+17,jvj+22)*/
if((x[jvj+22]!=x[D])) goto l4;
x[jvj+31]=x[jvj+6] ;z[jvj+31]=z[jvj+6];
l5:if((x[jvj+31]<=0)) goto l4;
x[jvj+23]=s[x[jvj+31]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+31];
pile[v[22]]=195; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(195,jvj+23,jvj+24)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==0) goto l6;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+23,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+29)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+30)*/
pile[v[22]]=V32; pile[WZ1]=858; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V32,858,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=3584; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,3584,246,jvj+28)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20224; pile[WZ4]=jvj+28; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(158,1,218,20224,jvj+28,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=159; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+30)*/
pile[WZ1]=jvj+20; pile[WZ2]=V34; pile[WZ3]=jvj+7; 
(*f[3501])( );     /*AFP1(jvj+25,jvj+20,V34,jvj+7)*/
l6:x[jvj+31]=t[x[jvj+31]];
goto l5;
l2:x[jvj+8]=t[x[jvj+8]];
goto l1;
l4:x[jvj+15]=t[x[jvj+15]];
goto l3;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
