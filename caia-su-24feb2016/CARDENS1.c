#include "dx.h"
void CARDENS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V27=0,V3=0,V4=0,V9=0,V8=0,V32=0,V30=0,V10=0,V2=0,V41=0,V15=0;
int W;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=10800;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==817&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
W=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
VV=W;
pile[v[22]]=448; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(448,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l13;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=448)) goto l2;
pile[v[22]]=436; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V27)*/
V27=pile[WZ2]; 
if((VV!=V27)) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=128)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
x[jvj+22]=x[jvj+5] ;z[jvj+22]=z[jvj+5];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=61)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+11,jvj+13)*/
pile[v[22]]=103; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+11,jvj+14)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+14; 
(*f[816])( );if(v[102]) goto l6;     /*VALEXP0(jvj+3,jvj+14,V3)*/
V3=pile[WZ2]; 
pile[WZ1]=jvj+13; 
(*f[816])( );if(v[102]) goto l6;     /*VALEXP0(jvj+3,jvj+13,V4)*/
V4=pile[WZ2]; 
V9=V3-V4;
V8=V9+1;
R=V8;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:x[jvj+15]=s[x[jvj+30]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+30];
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=44)) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+15,jvj+18)*/
pile[v[22]]=jvj+18; 
(*f[457])( );if(v[102]) goto l5;     /*CARDENS0(jvj+18,V32)*/
V32=pile[WZ1]; 
pile[v[22]]=jvj+19; pile[WZ1]=117; pile[WZ2]=V32; 
(*f[818])( );     /*MTC0(jvj+19,117,V32)*/
l5:x[jvj+30]=t[x[jvj+30]];
l3:if((x[jvj+30]>0)) goto l4;
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+19,V30)*/
V30=pile[WZ2]; 
R=V30;
goto l14;
l6:pile[v[22]]=667; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(667,jvj+11,R)*/
R=pile[WZ2]; 
goto l14;
l7:pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+11,V10)*/
V10=pile[WZ2]; 
if((V10==(-1278))) goto l8;
pile[v[22]]=V10; 
(*f[817])( );if(v[102]) goto l9;     /*CARDENS1(V10,R)*/
R=pile[WZ1]; 
goto l14;
l8:R=0;
goto l14;
l9:pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+11,jvj+20)*/
if((x[jvj+20]==128)) goto l10;
if((x[jvj+20]!=22)) goto l11;
pile[v[22]]=294; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(294,jvj+22,jvj+23)*/
if((x[jvj+23]!=68)) goto l11;
pile[v[22]]=128; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(128,jvj+22,jvj+24)*/
for(i=x[jvj+24],V41=0;i>0;i=t[i],V41++)  ;
R=V41;
goto l14;
l10:pile[v[22]]=128; pile[WZ1]=jvj+11; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(128,jvj+11,jvj+21)*/
for(i=x[jvj+21],V2=0;i>0;i=t[i],V2++)  ;
R=V2;
goto l14;
l11:pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+11,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=172)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+11,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+27,V15)*/
V15=pile[WZ2]; 
if((V15!=0)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+11,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]==23)) goto l8;
l12:pile[v[22]]=107; pile[WZ1]=jvj+11; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+30)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(1,117,jvj+19)*/
goto l3;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
