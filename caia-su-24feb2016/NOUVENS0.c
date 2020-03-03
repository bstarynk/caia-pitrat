#include "dx.h"
void NOUVENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V6=0,V=0,V30=0,V39=0,V38=0,V29=0,V36=0,V14=0,V25=0;
int HIST,A,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10197;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3030&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V=incon;
pile[v[22]]=B; pile[WZ1]=294; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(B,294,68)*/
pile[WZ1]=128; pile[WZ2]=A; 
(*f[34])( );     /*CHGC0(B,128,A)*/
for(i=x[A],V8=0;i>0;i=t[i],V8++)  ;
pile[WZ1]=667; pile[WZ2]=V8; 
(*f[43])( );     /*CHGC2(B,667,V8)*/
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,B,jvj+2)*/
if((x[jvj+2]!=448)) goto l5;
pile[v[22]]=436; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,B,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+3,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,B,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=128)) goto l5;
V=V6;
l5:if((v[111]!=0)) goto l6;
pile[v[22]]=859; pile[WZ1]=HIST; pile[WZ2]=B; 
(*f[1320])( );     /*ARCHIVE1(859,HIST,B)*/
l6:if(V!=incon) goto l7;
l4:V29=g[620];
if((V29<=0)) goto l14;
V30=vg[620];
if((V30!=0)) goto l1;
if((V29<3)) goto l3;
l1:pile[v[22]]=620; pile[WZ1]=10197; pile[WZ2]=0; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=jvj+6; 
(*f[317])( );     /*INTERP5(620,10197,0,(-598),A,jvj+6)*/
if((x[jvj+6]==135)) goto l2;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:if((V29<4)) goto l3;
goto l14;
l3:V39=x[A];
pile[v[22]]=23; pile[WZ1]=V39; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(23,V39,0,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
if((V29!=2)) goto l14;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l14;
l7:x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(128,jvj+7,jvj+8)*/
l8:if((x[jvj+8]>0)) goto l9;
pile[v[22]]=454; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(454,jvj+7,jvj+10)*/
l11:if((x[jvj+10]<=0)) goto l4;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=454)) goto l12;
pile[v[22]]=102; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+11,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+13,V14)*/
V14=pile[WZ2]; 
if((V!=V14)) goto l13;
pile[v[22]]=160; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(160,jvj+11,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=128)) goto l13;
pile[v[22]]=294; pile[WZ1]=jvj+11; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(294,jvj+11,HIST)*/
l13:pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+11,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+16,V25)*/
V25=pile[WZ2]; 
if((V!=V25)) goto l12;
pile[v[22]]=160; pile[WZ1]=jvj+11; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(160,jvj+11,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=128)) goto l12;
pile[v[22]]=294; pile[WZ1]=jvj+11; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(294,jvj+11,HIST)*/
l12:x[jvj+10]=t[x[jvj+10]];
goto l11;
l9:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+9,V36)*/
V36=pile[WZ2]; 
if((V36!=V)) goto l10;
pile[v[22]]=jvj+9; pile[WZ1]=128; pile[WZ2]=A; 
(*f[34])( );     /*CHGC0(jvj+9,128,A)*/
l10:x[jvj+8]=t[x[jvj+8]];
goto l8;
}
