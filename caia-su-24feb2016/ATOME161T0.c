#include "dx.h"
void ATOME161T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V39=0,V41=0,V8=0,V45=0,V9=0,V46=0,V10=0,V47=0,V13=0,V43=0,V32=0,I=0,V14=0,V15=0,Z=0;
int D,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=20161;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3516&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l14;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1353,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l14;
pile[v[22]]=498; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(498,jvj+6,jvj+8)*/
pile[v[22]]=1182; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1182,jvj+8,jvj+9)*/
if((68!=x[jvj+9])) goto l14;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l14;     /*FNDCND0(280,D,V13)*/
V13=pile[WZ2]; 
if((V13<0)) goto l14;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+10,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1294,R,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==1483) goto l7;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:V8=s[V45];
pile[v[22]]=jvj+3; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+3,V8)*/
V45=t[V45];
l1:if((V45>0)) goto l2;
V46=x[jvj+30];
l3:if((V46>0)) goto l4;
V47=x[jvj+31];
l5:if((V47<=0)) goto l12;
V10=s[V47];
pile[v[22]]=jvj+3; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+3,V10)*/
V47=t[V47];
goto l5;
l4:V9=s[V46];
pile[v[22]]=jvj+3; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+3,V9)*/
V46=t[V46];
goto l3;
l7:x[jvj+12]=d[20];z[jvj+12]=0;
l6:if((x[jvj+12]<=0)) goto l14;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(jvj+14,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[D]) goto l9;
l8:x[jvj+12]=t[x[jvj+12]];
goto l6;
l9:pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[3517])( );     /*DECSOM2(jvj+14,jvj+16)*/
pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+17)*/
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+13,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+18,R,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
x[jvj+44]=x[jvj+17] ;z[jvj+44]=z[jvj+17];
x[jvj+45]=x[jvj+16] ;z[jvj+45]=z[jvj+16];
l10:if((x[jvj+45]<=0)) goto l8;
x[jvj+21]=s[x[jvj+45]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+45];
pile[v[22]]=218; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+21,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=596)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+22,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+25,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+22,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=484)) goto l11;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+28; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(jvj+26,jvj+28)*/
if((x[jvj+28]!=x[D])) goto l11;
I=V32;
V14=I-1;
V15=I+1;
pile[v[22]]=I; pile[WZ1]=D; pile[WZ2]=jvj+29; 
(*f[3518])( );     /*MODPOS0(I,D,jvj+29)*/
pile[v[22]]=V14; pile[WZ2]=jvj+30; 
(*f[3518])( );     /*MODPOS0(V14,D,jvj+30)*/
pile[v[22]]=V15; pile[WZ2]=jvj+31; 
(*f[3518])( );     /*MODPOS0(V15,D,jvj+31)*/
x[jvj+3]=0 ;z[jvj+3]=0;
V38=abs(I);
pile[v[22]]=jvj+3; pile[WZ1]=V38; 
(*f[207])( );     /*PLUE2(jvj+3,V38)*/
V39=abs(V14);
pile[WZ1]=V39; 
(*f[207])( );     /*PLUE2(jvj+3,V39)*/
V41=abs(V15);
pile[WZ1]=V41; 
(*f[207])( );     /*PLUE2(jvj+3,V41)*/
V45=x[jvj+29];
goto l1;
l11:x[jvj+45]=t[x[jvj+45]];
goto l10;
l12:if((x[jvj+3]<=0)) goto l11;
Z=s[x[jvj+3]];
if((Z<=1)) goto l13;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+37)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+38)*/
pile[v[22]]=V43; pile[WZ1]=858; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V43,858,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3516; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3516,246,jvj+36)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20161; pile[WZ4]=jvj+36; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(158,1,218,20161,jvj+36,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=159; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+32,159,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+32,159,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Z; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,Z,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=160; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,160,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=111; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+20,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+32; 
(*f[1296])( );     /*NOUVCONTR0(jvj+33,jvj+32)*/
l13:x[jvj+3]=t[x[jvj+3]];
goto l12;
}
