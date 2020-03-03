#include "dx.h"
void EXECREE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V1=0,V7=0,V9=0,V12=0,V20=0,V19=0;
int AL;
int P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10185;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==973&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; P=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=incon;
pile[v[22]]=498; pile[WZ1]=AL; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,AL,jvj+2)*/
pile[v[22]]=896; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(896,jvj+2,jvj+3)*/
if((x[jvj+3]==0)) goto l1;
x[jvj+15]=228 ;z[jvj+15]=228;
l3:x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(683,jvj+4,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+4,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=AL; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(498,AL,jvj+5)*/
V1=incon;
pile[v[22]]=1173; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(1173,jvj+4,VV)*/
VV=pile[WZ2]; 
V1=VV;
l11:pile[v[22]]=V1; pile[WZ1]=1173; pile[WZ2]=jvj+13; 
(*f[329])( );     /*TRI13(V1,1173,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=V9; pile[WZ2]=961; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,V9,961,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=860; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,860,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=V7; pile[WZ2]=683; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,V7,683,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=(-7141); pile[WZ2]=163; pile[WZ3]=jvj+18; 
(*f[631])( );     /*TRI16(jvj+17,(-7141),163,jvj+18)*/
pile[v[22]]=109; pile[WZ1]=jvj+5; pile[WZ2]=117; pile[WZ3]=0; pile[WZ4]=jvj+18; pile[WZ5]=jvj+7; 
(*f[47])( );     /*QUADRI0(109,jvj+5,117,0,jvj+18,jvj+7)*/
if(x[jvj+2]!=incon) goto l4;
l5:pile[v[22]]=1173; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(1173,jvj+7,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=AL; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(498,AL,jvj+9)*/
pile[v[22]]=878; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(878,jvj+9,jvj+10)*/
l6:if((x[jvj+10]<=0)) goto l8;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
if((x[jvj+11]==x[AL])) goto l7;
pile[v[22]]=897; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(897,jvj+11,V19)*/
V19=pile[WZ2]; 
if((V19!=V20)) goto l7;
pile[v[22]]=AL; pile[WZ2]=jvj+12; 
(*f[974])( );     /*NOUVEAUTE0(AL,jvj+11,jvj+12)*/
if((x[jvj+12]==134)) goto l9;
l7:x[jvj+10]=t[x[jvj+10]];
goto l6;
l1:x[jvj+15]=530 ;z[jvj+15]=530;
goto l3;
l2:pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+4,V1)*/
V1=pile[WZ2]; 
goto l11;
l4:pile[v[22]]=896; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(896,jvj+2,jvj+6)*/
for(i=x[jvj+6],V12=0;i>0;i=t[i],V12++)  ;
if((V12!=1)) goto l5;
if((x[jvj+6]<=0)) goto l5;
x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=247; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+7,247,jvj+8)*/
goto l5;
l8:x[P]=x[jvj+7] ;z[P]=z[jvj+7];
if((x[P]==250)) goto l10;
pile[v[22]]=P; pile[WZ1]=1230; 
(*f[1261])( );     /*NOUVSAUVE1(P,1230)*/
pile[WZ1]=1218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(P,1218,68)*/
pile[WZ1]=1161; pile[WZ2]=1097; 
(*f[35])( );     /*CHGC1(P,1161,1097)*/
(*f[554])( );     /*AJEXP1(P)*/
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l9:x[P]=250 ;z[P]=250;
goto l10;
}
