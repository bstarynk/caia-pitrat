#include "dx.h"
void ANAPAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V81=0,V62=0,V35=0,V17=0,V77=0;
int K,ZZ,V,BL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=11099;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==832&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; ZZ=pile[v[22]+1]; V=pile[v[22]+2]; BL=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+23]=x[ZZ] ;z[jvj+23]=z[ZZ];
pile[v[22]]=100; pile[WZ1]=ZZ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,ZZ,jvj+5)*/
if((x[jvj+5]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,ZZ,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+6,jvj+7)*/
pile[v[22]]=K; pile[WZ1]=V; pile[WZ2]=868; pile[WZ3]=jvj+7; 
(*f[835])( );     /*AJA4(K,V,868,jvj+7)*/
l1:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=654)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+6,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=651)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+13)*/
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+10,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+14,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+6,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==20)) goto l2;
l4:pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+23,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+25,jvj+26)*/
pile[v[22]]=1016; pile[WZ1]=1216; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1016,1216,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==x[jvj+26]) goto l5;
l6:x[jvj+44]=w[x[jvj+24]][8];
l7:if((x[jvj+44]>0)) goto l8;
x[jvj+46]=w[x[jvj+24]][9];
l12:if((x[jvj+46]<=0)) goto l14;
x[jvj+35]=s[x[jvj+46]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+46];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+23; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+35,jvj+23,jvj+36)*/
pile[v[22]]=K; pile[WZ1]=jvj+36; pile[WZ2]=V; pile[WZ3]=BL; 
(*f[1169])( );     /*ANAPAT1(K,jvj+36,V,BL)*/
l13:x[jvj+46]=t[x[jvj+46]];
goto l12;
l5:pile[v[22]]=K; pile[WZ1]=V; pile[WZ2]=44; pile[WZ3]=jvj+26; pile[WZ4]=1216; 
(*f[489])( );     /*AJA0(K,V,44,jvj+26,1216)*/
goto l6;
l8:x[jvj+28]=s[x[jvj+44]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+44];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+23; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(jvj+28,jvj+23,jvj+29)*/
x[jvj+45]=x[jvj+29] ;z[jvj+45]=z[jvj+29];
l9:if((x[jvj+45]>0)) goto l10;
x[jvj+44]=t[x[jvj+44]];
goto l7;
l10:x[jvj+30]=s[x[jvj+45]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+45];
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=22)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+30,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+32,jvj+33)*/
V17=x[jvj+33];
if(V17!=295&&V17!=585) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+30,jvj+34)*/
pile[v[22]]=K; pile[WZ1]=jvj+34; pile[WZ2]=BL; 
(*f[487])( );     /*CARCONTR0(K,jvj+34,BL)*/
l11:x[jvj+45]=t[x[jvj+45]];
goto l9;
l14:pile[v[22]]=102; pile[WZ1]=BL; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,BL,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=69)) goto l17;
pile[v[22]]=108; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(108,jvj+37,jvj+39)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=218; pile[WZ3]=68; pile[WZ4]=jvj+3; 
(*f[567])( );     /*QUADRI11(117,0,218,68,jvj+3)*/
l15:if((x[jvj+39]<=0)) goto l17;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=103; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+40,jvj+41)*/
pile[v[22]]=140; pile[WZ1]=jvj+41; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+41,V77)*/
V77=pile[WZ2]; 
if((V!=V77)) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+40; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+40,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]!=576)) goto l16;
pile[v[22]]=jvj+3; pile[WZ1]=ZZ; 
(*f[1171])( );     /*CPNBVAR0(jvj+3,ZZ)*/
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l16;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+3,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V; pile[WZ2]=V81; pile[WZ3]=870; pile[WZ4]=25; 
(*f[831])( );     /*AJA2(K,V,V81,870,25)*/
l16:x[jvj+39]=t[x[jvj+39]];
goto l15;
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l2:if((x[jvj+13]<=0)) goto l4;
x[jvj+17]=s[x[jvj+13]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+13];
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=44)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+17,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+20,V35)*/
V35=pile[WZ2]; 
if((V62!=V35)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+17; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+17,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=128)) goto l3;
pile[v[22]]=K; pile[WZ1]=V; pile[WZ2]=868; pile[WZ3]=44; pile[WZ4]=jvj+21; 
(*f[1170])( );     /*AJA7(K,V,868,44,jvj+21)*/
l3:x[jvj+13]=t[x[jvj+13]];
goto l2;
}
