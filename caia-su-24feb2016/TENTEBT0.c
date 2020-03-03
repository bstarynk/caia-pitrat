#include "dx.h"
void TENTEBT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V24=0,V23=0,V4=0,V22=0,V21=0,V20=0,A=0,V17=0,V5=0,V16=0,M=0,V11=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10745;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1254&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=1107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1107,jvj+3,jvj+13)*/
pile[v[22]]=204; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(204,jvj+13,M)*/
M=pile[WZ2]; 
l8:pile[v[22]]=120; pile[WZ1]=jvj+13; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+13,jvj+7)*/
pile[v[22]]=1110; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1110,jvj+7,V11)*/
V11=pile[WZ2]; 
if((V11>5)) goto l9;
if((V11<=1)) goto l9;
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(204,jvj+7,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=jvj+3; 
(*f[948])( );     /*PCTREUSSI0(jvj+3,V5)*/
V5=pile[WZ1]; 
x[jvj+8]=vo[12];z[jvj+8]=vz[12];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+15; 
(*f[378])( );     /*CPI0(jvj+8,jvj+15)*/
V32=x[jvj+15];
pile[v[22]]=jvj+15; pile[WZ1]=0; pile[WZ2]=V32; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+15,0,V32,117,V33,V34)*/
V33=pile[WZ4]; V34=pile[WZ5]; 
pile[WZ1]=V34; pile[WZ2]=V33; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+15,V34,V33,978,V35,V36)*/
V35=pile[WZ4]; V36=pile[WZ5]; 
pile[WZ1]=V36; pile[WZ2]=V35; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+15,V36,V35,999,V37,V38)*/
V37=pile[WZ4]; V38=pile[WZ5]; 
pile[WZ1]=V38; pile[WZ2]=V37; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+15,V38,V37,1002,V39,V40)*/
V39=pile[WZ4]; V40=pile[WZ5]; 
pile[WZ1]=V40; pile[WZ2]=V39; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+15,V40,V39,1025,V41,V42)*/
V41=pile[WZ4]; V42=pile[WZ5]; 
pile[WZ1]=V42; pile[WZ2]=V41; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+15,V42,V41,1042,V43,V44)*/
V43=pile[WZ4]; V44=pile[WZ5]; 
pile[WZ1]=V44; pile[WZ2]=V43; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+15,V44,V43,1080,V45,V46)*/
V45=pile[WZ4]; V46=pile[WZ5]; 
pile[WZ1]=V46; pile[WZ2]=V45; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+15,V46,V45,1104,V47,V48)*/
V47=pile[WZ4]; V48=pile[WZ5]; 
pile[WZ1]=V48; pile[WZ2]=V47; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+15,V48,V47,1121,V49,V50)*/
V49=pile[WZ4]; V50=pile[WZ5]; 
V16=M-V17;
pile[v[22]]=698; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(698,jvj+7,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
x[jvj+6]=x[jvj+15] ;z[jvj+6]=z[jvj+15];
pile[v[22]]=1034; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1034,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[195])( );     /*CPE0(jvj+4,jvj+5)*/
x[jvj+16]=x[jvj+5] ;z[jvj+16]=z[jvj+5];
l3:if((x[jvj+16]>0)) goto l4;
pile[v[22]]=jvj+6; pile[WZ1]=1032; pile[WZ2]=jvj+5; 
(*f[34])( );     /*CHGC0(jvj+6,1032,jvj+5)*/
pile[WZ1]=860; pile[WZ2]=84; 
(*f[35])( );     /*CHGC1(jvj+6,860,84)*/
pile[WZ1]=1039; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(jvj+6,1039,V16)*/
pile[v[22]]=698; pile[WZ1]=jvj+10; pile[WZ2]=1110; pile[WZ3]=1; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(698,jvj+10,1110,1,jvj+11)*/
pile[v[22]]=jvj+6; pile[WZ1]=1025; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+6,1025,jvj+11)*/
pile[v[22]]=995; pile[WZ1]=145; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(995,145,jvj+14)*/
pile[v[22]]=117; pile[WZ1]=V5; pile[WZ2]=122; pile[WZ3]=1005; pile[WZ4]=jvj+14; pile[WZ5]=jvj+12; 
(*f[725])( );     /*QUADRI14(117,V5,122,1005,jvj+14,jvj+12)*/
pile[v[22]]=jvj+6; pile[WZ1]=735; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+6,735,jvj+12)*/
pile[WZ1]=1063; 
(*f[1528])( );     /*ANACREUSE1(jvj+6,1063)*/
l9:x[jvj+13]=x[jvj+7] ;z[jvj+13]=z[jvj+7];
goto l8;
l2:V22=150*A;
V21=V22/100;
V4=V21;
l6:if(V4!=incon) goto l7;
l5:x[jvj+16]=t[x[jvj+16]];
goto l3;
l4:x[jvj+2]=s[x[jvj+16]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+16];
pile[v[22]]=1005; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1005,jvj+2,V20)*/
V20=pile[WZ2]; 
A=V20;
V4=incon;
if((A>1)) goto l1;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(936,jvj+2,V25)*/
V25=pile[WZ2]; 
V24=V25/6;
V23=V24+1;
V4=V23;
l1:if(V4==incon) goto l2;
goto l6;
l7:pile[v[22]]=jvj+2; pile[WZ1]=1005; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(jvj+2,1005,V4)*/
goto l5;
l10:x[jvj+1]=incon; v[0]=jvj; return;
}
