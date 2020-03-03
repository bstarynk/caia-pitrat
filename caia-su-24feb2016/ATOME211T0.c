#include "dx.h"
void ATOME211T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V14=0,V17=0,V18=0,V5=0,Q=0,I=0,V28=0,V21=0,V8=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=20211;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3500&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1287; pile[WZ1]=D; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1287,D,jvj+17)*/
if((x[jvj+17]!=0)) goto l16;
pile[v[22]]=202; pile[WZ2]=jvj+18; 
(*f[1948])( );if(v[102]) goto l16;     /*FNDOND0(202,D,jvj+18)*/
if((x[jvj+18]!=68)) goto l16;
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+19,V21)*/
V21=pile[WZ2]; 
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+2; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
for(i=x[jvj+5],V8=0;i>0;i=t[i],V8++)  ;
if((V8>=20)) goto l16;
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+33]=x[jvj+5] ;z[jvj+33]=z[jvj+5];
l4:if((x[jvj+33]>0)) goto l5;
pile[v[22]]=D; pile[WZ1]=jvj+15; 
(*f[1290])( );if(v[102]) goto l17;     /*DEPEXP0(D,jvj+15)*/
V28=x[jvj+10];
l15:if((V28<=0)) goto l17;
I=s[V28];
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+36]=x[jvj+5] ;z[jvj+36]=z[jvj+5];
l12:if((x[jvj+36]>0)) goto l13;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+25)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V21,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3500; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3500,246,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=20211; pile[WZ2]=218; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,20211,218,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=(-20); pile[WZ2]=jvj+24; pile[WZ3]=159; pile[WZ4]=jvj+26; 
(*f[298])( );     /*TRIENS1(jvj+25,(-20),jvj+24,159,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+26,1,158,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; pile[WZ2]=I; pile[WZ3]=jvj+14; 
(*f[3501])( );     /*AFP1(jvj+16,jvj+15,I,jvj+14)*/
V28=t[V28];
goto l15;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+3,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=jvj+4; 
(*f[1007])( );if(v[102]) goto l3;     /*DECFACTPREM0(V11,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=1260; pile[WZ2]=jvj+6; 
(*f[300])( );     /*TRI10(jvj+4,1260,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+7]=s[x[jvj+33]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+33];
pile[v[22]]=1260; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1260,jvj+7,jvj+8)*/
x[jvj+34]=x[jvj+8] ;z[jvj+34]=z[jvj+8];
l6:if((x[jvj+34]>0)) goto l7;
x[jvj+33]=t[x[jvj+33]];
goto l4;
l7:x[jvj+9]=s[x[jvj+34]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+34];
pile[v[22]]=510; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(510,jvj+9,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V14; 
(*f[207])( );     /*PLUE2(jvj+10,V14)*/
l8:x[jvj+34]=t[x[jvj+34]];
goto l6;
l10:x[jvj+35]=t[x[jvj+35]];
l9:if((x[jvj+35]<=0)) goto l11;
x[jvj+13]=s[x[jvj+35]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+35];
pile[v[22]]=510; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+13,V17)*/
V17=pile[WZ2]; 
if((V17!=I)) goto l10;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(515,jvj+13,V18)*/
V18=pile[WZ2]; 
V5=V18;
l14:Q=V5;
pile[v[22]]=jvj+14; pile[WZ1]=Q; 
(*f[207])( );     /*PLUE2(jvj+14,Q)*/
x[jvj+36]=t[x[jvj+36]];
goto l12;
l11:V5=0;
goto l14;
l13:x[jvj+11]=s[x[jvj+36]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+36];
V5=incon;
pile[v[22]]=1260; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1260,jvj+11,jvj+12)*/
x[jvj+35]=x[jvj+12] ;z[jvj+35]=z[jvj+12];
goto l9;
l17:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+31)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+27; 
(*f[46])( );     /*TRI0(V21,858,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3500; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3500,246,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=20211; pile[WZ2]=218; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,20211,218,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=(-20); pile[WZ2]=jvj+30; pile[WZ3]=159; pile[WZ4]=jvj+32; 
(*f[298])( );     /*TRIENS1(jvj+31,(-20),jvj+30,159,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+32,1,158,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=1287; pile[WZ2]=D; pile[WZ3]=jvj+10; 
(*f[3502])( );     /*VENS0(jvj+20,1287,D,jvj+10)*/
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
