#include "dx.h"
void FINTEST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RS=0,NK=0,V10=0,V9=0,V15=0,V16=0,V22=0,V23=0;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11073;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1285&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NK=incon;
x[jvj+9]=vo[12];z[jvj+9]=vz[12];
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+9,NK)*/
NK=pile[WZ2]; 
l4:pile[v[22]]=1115; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(1115,jvj+9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1109,924,jvj+10)*/
l5:if((x[jvj+10]<=0)) goto l15;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+11,V9)*/
V9=pile[WZ2]; 
if((V9!=V10)) goto l6;
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
if(NK!=incon) goto l11;
l15:pile[v[22]]=1254; pile[WZ1]=jvj+9; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1254,jvj+9,jvj+21)*/
if((x[jvj+21]!=68)) goto l17;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1258,jvj+2,jvj+22)*/
l16:if((x[jvj+22]<=0)) goto l17;
x[jvj+4]=s[x[jvj+22]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+22];
pile[v[22]]=1255; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1255,jvj+2,jvj+3)*/
pile[v[22]]=256; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(256,jvj+4,jvj+5)*/
x[jvj+23]=x[jvj+3] ;z[jvj+23]=z[jvj+3];
l1:if((x[jvj+23]>0)) goto l2;
x[jvj+22]=t[x[jvj+22]];
goto l16;
l2:x[jvj+6]=s[x[jvj+23]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+23];
pile[v[22]]=jvj+5; pile[WZ1]=1258; pile[WZ2]=jvj+7; 
(*f[300])( );     /*TRI10(jvj+5,1258,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[30])( );if(v[102]) goto l3;     /*EVL0(jvj+6,jvj+7,RS)*/
RS=pile[WZ2]; 
if((RS!=134)) goto l3;
pile[v[22]]=158; pile[WZ1]=134; pile[WZ2]=208; pile[WZ3]=jvj+6; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(158,134,208,jvj+6,jvj+8)*/
pile[v[22]]=jvj+4; pile[WZ1]=1051; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+4,1051,jvj+8)*/
l3:x[jvj+23]=t[x[jvj+23]];
goto l1;
l6:x[jvj+10]=t[x[jvj+10]];
goto l5;
l8:if(x[jvj+16]==incon) goto l13;
if((x[jvj+16]!=(-99999998))) goto l12;
l13:pile[v[22]]=1256; pile[WZ1]=jvj+9; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1256,jvj+9,jvj+17)*/
if((x[jvj+17]!=68)) goto l15;
x[jvj+20]=incon;
pile[v[22]]=609; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(609,jvj+12,V22)*/
V22=pile[WZ2]; 
if((NK!=V22)) goto l9;
x[jvj+20]=1260 ;z[jvj+20]=1260;
l9:pile[v[22]]=610; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(610,jvj+12,V23)*/
V23=pile[WZ2]; 
if((NK!=V23)) goto l10;
x[jvj+20]=1261 ;z[jvj+20]=1261;
l14:x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=1081; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1081,jvj+18,jvj+19)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+20; 
(*f[34])( );     /*CHGC0(jvj+12,jvj+20,jvj+19)*/
goto l15;
l10:if(x[jvj+20]==incon) goto l15;
if((x[jvj+20]!=(-99999998))) goto l14;
goto l15;
l11:pile[v[22]]=1257; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1257,jvj+9,jvj+13)*/
if((x[jvj+13]!=68)) goto l13;
x[jvj+16]=incon;
pile[v[22]]=609; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(609,jvj+12,V15)*/
V15=pile[WZ2]; 
if((NK!=V15)) goto l7;
x[jvj+16]=258 ;z[jvj+16]=258;
l7:pile[v[22]]=610; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(610,jvj+12,V16)*/
V16=pile[WZ2]; 
if((NK!=V16)) goto l8;
x[jvj+16]=159 ;z[jvj+16]=159;
l12:x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=1258; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1258,jvj+14,jvj+15)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+16; 
(*f[34])( );     /*CHGC0(jvj+12,jvj+16,jvj+15)*/
goto l13;
l17:x[jvj+1]=incon; v[0]=jvj; return;
}
