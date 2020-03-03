#include "dx.h"
void ATOME62T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V49=0,V25=0,V19=0,F=0,V8=0,V32=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=20062;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3168&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l10;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,R,V10)*/
V10=pile[WZ2]; 
if((V10!=3)) goto l10;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+4,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=678; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(678,R,jvj+5)*/
x[jvj+6]=d[20];z[jvj+6]=0;
l1:if((x[jvj+6]<=0)) goto l10;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=268; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,R,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
for(i=x[jvj+12],V25=0;i>0;i=t[i],V25++)  ;
if((V25!=2)) goto l2;
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+7,R,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+15,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+13,jvj+16)*/
F=V19;
pile[v[22]]=498; pile[WZ2]=jvj+17; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+16,jvj+17)*/
pile[v[22]]=688; pile[WZ1]=jvj+17; 
(*f[1975])( );if(v[102]) goto l2;     /*FNDCND0(688,jvj+17,V8)*/
V8=pile[WZ2]; 
if((V8!=1)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+13,jvj+18)*/
x[jvj+40]=x[jvj+12] ;z[jvj+40]=z[jvj+12];
l3:if((x[jvj+40]<=0)) goto l2;
x[jvj+19]=s[x[jvj+40]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+40];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=484)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+19,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+21,V32)*/
V32=pile[WZ2]; 
if((F!=V32)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+19,jvj+22)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+22,jvj+23)*/
if((x[jvj+23]==134)) goto l6;
l4:x[jvj+40]=t[x[jvj+40]];
goto l3;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l6:x[jvj+41]=x[jvj+12] ;z[jvj+41]=z[jvj+12];
l5:if((x[jvj+41]<=0)) goto l4;
x[jvj+24]=s[x[jvj+41]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+41];
if((x[jvj+19]==x[jvj+24])) goto l7;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
x[jvj+42]=x[jvj+5] ;z[jvj+42]=z[jvj+5];
l8:if((x[jvj+42]<=0)) goto l7;
x[jvj+26]=s[x[jvj+42]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+42];
pile[v[22]]=509; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[1969])( );     /*FNDEND0(509,jvj+26,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==x[R]) goto l11;
l9:x[jvj+42]=t[x[jvj+42]];
goto l8;
l7:x[jvj+41]=t[x[jvj+41]];
goto l5;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l11:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+34)*/
pile[v[22]]=V49; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V49,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=3168; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,3168,246,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=20062; pile[WZ2]=218; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,20062,218,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=(-20); pile[WZ2]=jvj+33; pile[WZ3]=159; pile[WZ4]=jvj+35; 
(*f[298])( );     /*TRIENS1(jvj+34,(-20),jvj+33,159,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+35,1,158,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+39; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+39,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+28; 
(*f[1296])( );     /*NOUVCONTR0(jvj+29,jvj+28)*/
goto l9;
}
