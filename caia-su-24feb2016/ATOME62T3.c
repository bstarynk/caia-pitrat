#include "dx.h"
void ATOME62T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V49=0,V11=0,V25=0,V19=0,F=0,V8=0,V32=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=20062;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3275&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(642,jvj+3,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(509,N,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l11;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l2;
pile[v[22]]=870; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(870,jvj+5,V11)*/
V11=pile[WZ2]; 
if((V11!=3)) goto l2;
pile[v[22]]=678; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(678,jvj+5,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[N]) goto l4;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:x[jvj+9]=d[20];z[jvj+9]=0;
l3:if((x[jvj+9]<=0)) goto l2;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+11,jvj+5,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=485)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
for(i=x[jvj+15],V25=0;i>0;i=t[i],V25++)  ;
if((V25!=2)) goto l5;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+5; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+10,jvj+5,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=484)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+16,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+18,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=jvj+19; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+16,jvj+19)*/
F=V19;
pile[v[22]]=498; pile[WZ2]=jvj+20; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+19,jvj+20)*/
pile[v[22]]=688; pile[WZ1]=jvj+20; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(688,jvj+20,V8)*/
V8=pile[WZ2]; 
if((V8!=1)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+16,jvj+21)*/
x[jvj+41]=x[jvj+15] ;z[jvj+41]=z[jvj+15];
l6:if((x[jvj+41]<=0)) goto l5;
x[jvj+22]=s[x[jvj+41]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+41];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+22,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+24,V32)*/
V32=pile[WZ2]; 
if((F!=V32)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+22,jvj+25)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[760])( );     /*MEMEX0(jvj+21,jvj+25,jvj+26)*/
if((x[jvj+26]==134)) goto l9;
l7:x[jvj+41]=t[x[jvj+41]];
goto l6;
l5:x[jvj+9]=t[x[jvj+9]];
goto l3;
l9:x[jvj+42]=x[jvj+15] ;z[jvj+42]=z[jvj+15];
l8:if((x[jvj+42]<=0)) goto l7;
x[jvj+27]=s[x[jvj+42]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+42];
if((x[jvj+22]==x[jvj+27])) goto l10;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,jvj+5,110,(-601),jvj+35)*/
pile[v[22]]=V49; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V49,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3275; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3275,246,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=20062; pile[WZ2]=218; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,20062,218,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=jvj+34; pile[WZ3]=159; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,159,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+36,1,158,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+40; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+40,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+29; 
(*f[1296])( );     /*NOUVCONTR0(jvj+30,jvj+29)*/
l10:x[jvj+42]=t[x[jvj+42]];
goto l8;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
