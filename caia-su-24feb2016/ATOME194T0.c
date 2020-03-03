#include "dx.h"
void ATOME194T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V32=0,V9=0,VV=0,V33=0,TT=0,V34=0,V27=0,V11=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=20194;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3379&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,R,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=25)) goto l15;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(870,R,V11)*/
V11=pile[WZ2]; 
if((V11!=2)) goto l15;
pile[v[22]]=1070; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1070,R,jvj+27)*/
if((x[jvj+27]!=68)) goto l15;
x[jvj+28]=d[20];z[jvj+28]=0;
l13:if((x[jvj+28]<=0)) goto l15;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+29,R,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+19,jvj+30)*/
if((x[jvj+30]!=484)) goto l14;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+31; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+19,jvj+31)*/
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+29,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+32,R,jvj+4)*/
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1071,jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V32=x[jvj+3];
l1:if((V32>0)) goto l2;
x[jvj+6]=x[jvj+31] ;z[jvj+6]=z[jvj+31];
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(498,jvj+6,jvj+7)*/
pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(688,jvj+7,V9)*/
V9=pile[WZ2]; 
if((V9==1)) goto l14;
l9:x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+17,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[1969])( );     /*FNDEND0(509,jvj+6,jvj+18)*/
x[jvj+44]=x[jvj+18] ;z[jvj+44]=z[jvj+18];
l10:if((x[jvj+44]<=0)) goto l12;
x[jvj+10]=s[x[jvj+44]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+44];
if((x[jvj+10]==x[R])) goto l11;
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1071,jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(jvj+10,jvj+11)*/
V33=x[jvj+9];
l3:if((V33>0)) goto l4;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+19; pile[WZ2]=jvj+4; pile[WZ3]=jvj+16; pile[WZ4]=jvj+20; 
(*f[3130])( );if(v[102]) goto l11;     /*SUBSTITUVAR1(jvj+10,jvj+19,jvj+4,jvj+16,jvj+20)*/
if((x[jvj+20]==135)) goto l8;
l11:x[jvj+44]=t[x[jvj+44]];
goto l10;
l2:V=s[V32];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l14;
V32=t[V32];
goto l1;
l4:VV=s[V33];
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==VV) goto l11;
V33=t[V33];
goto l3;
l7:TT=s[V34];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==TT) goto l16;
V34=t[V34];
l6:if((V34>0)) goto l7;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V27,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3379; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3379,246,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=20194; pile[WZ2]=218; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,20194,218,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=(-20); pile[WZ2]=jvj+36; pile[WZ3]=159; pile[WZ4]=jvj+38; 
(*f[298])( );     /*TRIENS1(jvj+37,(-20),jvj+36,159,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+38,1,158,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+10; 
(*f[966])( );     /*ELIMINE0(jvj+14,jvj+10)*/
l16:pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=110; pile[WZ3]=(-608); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(101,jvj+10,110,(-608),jvj+42)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+43)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+39; 
(*f[46])( );     /*TRI0(V27,858,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,v[13],642,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=3379; pile[WZ2]=246; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,3379,246,jvj+41)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20194; pile[WZ4]=jvj+41; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,1,218,20194,jvj+41,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=159; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+42)*/
pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+43)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+21)*/
goto l11;
l8:pile[v[22]]=1070; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1070,jvj+10,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+16,1070,jvj+15)*/
l5:pile[v[22]]=921; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(921,jvj+6,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+13; 
(*f[887])( );     /*VARND0(jvj+10,jvj+13)*/
V34=x[jvj+12];
goto l6;
l12:pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+22; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(498,jvj+6,jvj+22)*/
pile[v[22]]=1348; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1348,jvj+22,jvj+23)*/
if((x[jvj+23]!=68)) goto l14;
x[jvj+24]=vo[16];z[jvj+24]=vz[16];
pile[v[22]]=jvj+24; pile[WZ1]=1071; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+24,1071,jvj+6)*/
l14:x[jvj+28]=t[x[jvj+28]];
goto l13;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
