#include "dx.h"
void TROUVETYPE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V=0,V14=0,V18=0,V24=0,W=0,V11=0,V59=0,V30=0,V37=0,V29=0,V47=0,VV=0;
int X;
int EA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=11241;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1392&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; EA=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+37]=0 ;z[jvj+37]=0;
x[EA]=x[jvj+37] ;z[EA]=z[jvj+37];
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(448,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(454,jvj+11,jvj+12)*/
l6:if((x[jvj+12]>0)) goto l7;
pile[v[22]]=X; pile[WZ1]=jvj+36; 
(*f[1612])( );     /*Z261Z0(X,jvj+36)*/
l15:if((x[jvj+36]>0)) goto l16;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=448)) goto l3;
pile[v[22]]=436; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+4,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+6,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=128)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+9)*/
V=V9;
pile[v[22]]=V; pile[WZ1]=EA; 
(*f[1611])( );     /*FTYPE0(V,EA,jvj+9)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+38]=t[x[jvj+38]];
l4:if((x[jvj+38]<=0)) goto l8;
x[jvj+10]=s[x[jvj+38]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+38];
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+10,V14)*/
V14=pile[WZ2]; 
if((V14!=W)) goto l5;
pile[v[22]]=158; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(158,jvj+10,jvj+19)*/
V11=V24;
pile[v[22]]=140; pile[WZ1]=V11; pile[WZ2]=158; pile[WZ3]=jvj+19; pile[WZ4]=jvj+20; 
(*f[692])( );     /*QUADRI13(140,V11,158,jvj+19,jvj+20)*/
pile[v[22]]=EA; pile[WZ1]=jvj+20; 
(*f[522])( );     /*PLUB2(EA,jvj+20)*/
l8:x[jvj+12]=t[x[jvj+12]];
goto l6;
l7:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=454)) goto l8;
pile[v[22]]=103; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+15,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+13,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+16,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,jvj+13,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=128)) goto l8;
W=V18;
x[jvj+38]=x[EA] ;z[jvj+38]=z[EA];
goto l4;
l9:pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+21,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+24,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+21; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+21,jvj+25)*/
V30=V59;
pile[v[22]]=V30; pile[WZ1]=EA; 
(*f[1611])( );     /*FTYPE0(V30,EA,jvj+25)*/
l17:x[jvj+36]=t[x[jvj+36]];
goto l15;
l11:x[jvj+26]=d[20];z[jvj+26]=0;
l10:if((x[jvj+26]<=0)) goto l17;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+21; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+27,jvj+21,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+28,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+27,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+21; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+29,jvj+21,jvj+30)*/
V29=V37;
pile[v[22]]=V29; pile[WZ1]=EA; 
(*f[1611])( );     /*FTYPE0(V29,EA,jvj+30)*/
l12:x[jvj+26]=t[x[jvj+26]];
goto l10;
l16:x[jvj+21]=s[x[jvj+36]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+36];
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==44)) goto l9;
if((x[jvj+23]==25)) goto l11;
if((x[jvj+23]!=26)) goto l17;
x[jvj+31]=d[20];z[jvj+31]=0;
l13:if((x[jvj+31]<=0)) goto l17;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+21; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+32,jvj+21,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+33,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+32; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+32,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+21; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+34,jvj+21,jvj+35)*/
VV=V47;
pile[v[22]]=VV; pile[WZ1]=EA; 
(*f[1611])( );     /*FTYPE0(VV,EA,jvj+35)*/
l14:x[jvj+31]=t[x[jvj+31]];
goto l13;
}
