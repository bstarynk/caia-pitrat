#include "dx.h"
void INITIALISE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V1=0,V5=0,V15=0,V14=0,V26=0,V25=0,V42=0,V37=0,V35=0,V36=0,V39=0,V13=0,V47=0,V44=0;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10598;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1687&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
vv[41]=200;
vv[42]=50;
V5=incon;
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=1056; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1056,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==230) goto l2;
V5=0;
l8:v[111]=V5;
V1=incon;
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=529; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(529,jvj+2,L)*/
L=pile[WZ2]; 
V1=L;
l9:v[76]=V1;
l4:x[jvj+14]=incon;
x[jvj+8]=vo[12];z[jvj+8]=vz[12];
pile[v[22]]=1062; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1062,jvj+8,jvj+9)*/
x[jvj+14]=x[jvj+9] ;z[jvj+14]=z[jvj+9];
l10:x[jvj+13]=vo[13];z[jvj+13]=vz[13];
pile[v[22]]=jvj+13; pile[WZ1]=1062; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+13,1062,jvj+14)*/
x[jvj+15]=vo[12];z[jvj+15]=vz[12];
pile[v[22]]=731; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(731,jvj+15,V42)*/
V42=pile[WZ2]; 
x[jvj+16]=vo[16];z[jvj+16]=vz[16];
pile[v[22]]=jvj+16; pile[WZ1]=731; pile[WZ2]=V42; 
(*f[43])( );     /*CHGC2(jvj+16,731,V42)*/
l11:pile[v[22]]=860; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(860,jvj+15,jvj+17)*/
if((x[jvj+17]!=228)) goto l14;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1484,854,V37)*/
V37=pile[WZ2]; 
V35=sepfacts+1;
V36=sepfacts+V37;
x[jvj+18]=vo[13];z[jvj+18]=vz[13];
l12:if((V35>V36)) goto l14;
V39=r[V35];
if((V39!=1)) goto l13;
x[jvj+19]=V35 ;z[jvj+19]=(V35<=sepcte) ? V35 : 0;
pile[v[22]]=1297; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1297,jvj+19,jvj+20)*/
if((x[jvj+20]!=68)) goto l13;
pile[v[22]]=jvj+18; pile[WZ1]=901; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+18,901,jvj+19)*/
l13:V35++;
goto l12;
l1:pile[v[22]]=1038; pile[WZ1]=529; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1038,529,V1)*/
V1=pile[WZ2]; 
goto l9;
l2:V5=1;
goto l8;
l3:V14=0;
l18:pile[v[22]]=jvj+7; pile[WZ1]=244; pile[WZ2]=V14; 
(*f[43])( );     /*CHGC2(jvj+7,244,V14)*/
pile[v[22]]=1028; pile[WZ1]=854; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1028,854,jvj+23)*/
x[jvj+24]=vo[13];z[jvj+24]=vz[13];
l19:if((x[jvj+23]>0)) goto l20;
x[jvj+26]=vo[12];z[jvj+26]=vz[12];
pile[v[22]]=715; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(715,jvj+26,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+27,V44)*/
V44=pile[WZ2]; 
v[95]=V44;
l21:x[jvj+1]=incon; v[0]=jvj; return;
l5:x[jvj+14]=606 ;z[jvj+14]=606;
goto l10;
l7:x[jvj+11]=t[x[jvj+11]];
l6:if((x[jvj+11]<=0)) goto l17;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(683,jvj+12,V25)*/
V25=pile[WZ2]; 
if((V25!=V26)) goto l7;
pile[v[22]]=1092; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1092,jvj+12,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=1092; 
(*f[35])( );     /*CHGC1(jvj+21,1092,jvj+22)*/
l17:x[jvj+7]=vo[16];z[jvj+7]=vz[16];
V14=incon;
pile[v[22]]=905; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(905,jvj+7,V15)*/
V15=pile[WZ2]; 
if(V15!=(-5963)&&V15!=(-11721)) goto l3;
V14=(-999999);
goto l18;
l14:if((v[91]!=0)) goto l16;
if((v[90]<=0)) goto l16;
x[jvj+5]=vo[20];z[jvj+5]=vz[20];
pile[v[22]]=132; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(132,jvj+5,jvj+6)*/
if((x[jvj+6]==68)) goto l16;
l15:pile[v[22]]=945; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(945,936,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(jvj+15,936,V13)*/
l16:x[jvj+21]=vo[14];z[jvj+21]=vz[14];
V47=v[14];
pile[v[22]]=jvj+21; pile[WZ1]=1226; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+21,1226,67)*/
pile[WZ1]=1227; pile[WZ2]=V47; 
(*f[43])( );     /*CHGC2(jvj+21,1227,V47)*/
x[jvj+10]=vo[12];z[jvj+10]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+10,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(645,597,jvj+11)*/
goto l6;
l20:x[jvj+28]=s[x[jvj+23]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+23];
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=218; pile[WZ3]=jvj+28; pile[WZ4]=jvj+25; 
(*f[567])( );     /*QUADRI11(117,0,218,jvj+28,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=1028; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+24,1028,jvj+25)*/
x[jvj+23]=t[x[jvj+23]];
goto l19;
}
