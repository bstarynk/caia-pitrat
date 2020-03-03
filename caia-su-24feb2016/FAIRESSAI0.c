#include "dx.h"
void FAIRESSAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V14=0,V11=0,V30=0,V28=0,V23=0;
int M;
int RM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=10994;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==968&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; RM=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+21]=incon;
vo[12]=x[M];vz[12]=0;
pile[v[22]]=860; pile[WZ1]=M; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(860,M,jvj+2)*/
if((x[jvj+2]!=372)) goto l1;
pile[v[22]]=1247; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1247,M,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=39; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(39,M,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=V3; pile[WZ2]=66; 
(*f[387])( );     /*QXX1(jvj+3,V3,66)*/
l1:x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+4,jvj+5)*/
pile[v[22]]=878; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+5,jvj+6)*/
l2:if((x[jvj+6]<=0)) goto l10;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[806])( );     /*EQVALSYM0(jvj+4,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l3;
x[jvj+6]=t[x[jvj+6]];
goto l2;
l3:V5=incon;
if((v[106]==0)) goto l4;
V5=1;
l8:V11=vv[16];
v[21]=V5;
pile[v[22]]=V11; 
(*f[62])( );     /*INH0(V11)*/
x[jvj+9]=vo[12];z[jvj+9]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+9,V14)*/
V14=pile[WZ2]; 
if((V14!=8)) goto l5;
v[244]=1;
l5:pile[v[22]]=1081; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1081,jvj+9,jvj+10)*/
l6:if((x[jvj+10]>0)) goto l7;
pile[v[22]]=jvj+7; 
(*f[1190])( );     /*MALICE0(jvj+7)*/
x[jvj+21]=x[jvj+7] ;z[jvj+21]=z[jvj+7];
v[244]=0;
x[jvj+14]=vo[12];z[jvj+14]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(860,jvj+14,jvj+15)*/
if((x[jvj+15]!=368)) goto l9;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=506; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(506,jvj+16,jvj+17)*/
if((x[jvj+17]==1169)) goto l10;
l9:x[RM]=80 ;z[RM]=80;
l11:x[jvj+18]=vo[12];z[jvj+18]=vz[12];
pile[v[22]]=1167; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1167,jvj+18,V30)*/
V30=pile[WZ2]; 
if((V30>0)) goto l13;
l12:pile[v[22]]=jvj+18; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+18)*/
l13:pile[v[22]]=860; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(860,jvj+18,jvj+19)*/
if((x[jvj+19]!=372)) goto l14;
pile[v[22]]=1247; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1247,jvj+18,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=39; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(39,jvj+18,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=V28; 
(*f[185])( );     /*QXX0(jvj+20,V28)*/
l14:if(x[jvj+21]!=incon) goto l15;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l4:V5=2;
goto l8;
l7:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=68; pile[WZ1]=1083; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(68,1083,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=455; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+25; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,455,102,jvj+12,jvj+25,jvj+13)*/
pile[v[22]]=jvj+7; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+7,455,jvj+13)*/
x[jvj+10]=t[x[jvj+10]];
goto l6;
l10:x[RM]=120 ;z[RM]=120;
goto l11;
l15:pile[v[22]]=455; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(455,jvj+21,jvj+22)*/
l16:if((x[jvj+22]<=0)) goto l18;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=1083; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1083,jvj+23,jvj+24)*/
if((x[jvj+24]!=68)) goto l17;
V23=x[jvj+23];
pile[v[22]]=455; pile[WZ1]=jvj+21; pile[WZ2]=V23; 
(*f[134])( );     /*OTA0(455,jvj+21,V23)*/
l17:x[jvj+22]=t[x[jvj+22]];
goto l16;
}
