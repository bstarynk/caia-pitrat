#include "dx.h"
void ATOME150T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int YY=0,V22=0,V9=0,V1=0,I=0,V20=0,V17=0,V18=0,V19=0,V15=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=20150;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3761&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+11,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=1287; pile[WZ1]=D; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1287,D,jvj+12)*/
if((x[jvj+12]==0)) goto l10;
pile[v[22]]=202; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,D,jvj+2)*/
if((x[jvj+2]==68)) goto l10;
l9:pile[v[22]]=1310; pile[WZ1]=D; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1310,D,jvj+13)*/
x[jvj+28]=x[jvj+13] ;z[jvj+28]=z[jvj+13];
l1:if((x[jvj+28]>0)) goto l2;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(1,117,jvj+7)*/
x[jvj+29]=x[jvj+13] ;z[jvj+29]=z[jvj+13];
l5:if((x[jvj+29]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+7,V1)*/
V1=pile[WZ2]; 
if((V1>=200)) goto l10;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[3762])( );     /*PRDPOSENS0(jvj+13,jvj+14)*/
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,D,jvj+8)*/
l7:if((x[jvj+14]<=0)) goto l8;
I=s[x[jvj+14]];
pile[v[22]]=jvj+8; pile[WZ1]=I; pile[WZ2]=jvj+9; 
(*f[1765])( );     /*AJARR0(jvj+8,I,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+20)*/
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V15,858,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3761; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3761,246,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=20150; pile[WZ2]=218; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,20150,218,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-20); pile[WZ2]=jvj+19; pile[WZ3]=159; pile[WZ4]=jvj+21; 
(*f[298])( );     /*TRIENS1(jvj+20,(-20),jvj+19,159,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+21,1,158,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=365; pile[WZ2]=D; pile[WZ3]=jvj+9; 
(*f[1753])( );     /*LIER1(jvj+10,365,D,jvj+9)*/
x[jvj+14]=t[x[jvj+14]];
goto l7;
l2:x[jvj+3]=s[x[jvj+28]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+28];
pile[v[22]]=195; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(195,jvj+3,jvj+4)*/
V22=x[jvj+4];
l3:if((V22>0)) goto l4;
x[jvj+28]=t[x[jvj+28]];
goto l1;
l4:YY=s[V22];
if((YY<0)) goto l10;
V22=t[V22];
goto l3;
l6:x[jvj+5]=s[x[jvj+29]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+29];
pile[v[22]]=195; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(195,jvj+5,jvj+6)*/
for(i=x[jvj+6],V9=0;i>0;i=t[i],V9++)  ;
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=V9; 
(*f[818])( );     /*MTC0(jvj+7,117,V9)*/
x[jvj+29]=t[x[jvj+29]];
goto l5;
l8:if((v[225]<=0)) goto l11;
V20=x[D];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1395; 
(*f[42])( );     /*SRA1(135,0,1395,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=20150; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,20150,V17,V18)*/
V18=pile[WZ3]; 
pile[WZ1]=V20; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(20,V20,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
l11:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+26)*/
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V15,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3761; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3761,246,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=20150; pile[WZ2]=218; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,20150,218,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=(-20); pile[WZ2]=jvj+25; pile[WZ3]=159; pile[WZ4]=jvj+27; 
(*f[298])( );     /*TRIENS1(jvj+26,(-20),jvj+25,159,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+27,1,158,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=202; pile[WZ2]=D; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+15,202,D,68)*/
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
