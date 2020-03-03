#include "dx.h"
void EDIPBA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V6=0,V9=0,V10=0,V14=0,V13=0,V20=0,V26=0,V16=0,V15=0,V17=0,V21=0,V27=0,V28=0,V30=0;
int X;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10918;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==530&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+2]=d[64];z[jvj+2]=0;
I=0;
l26:pile[v[22]]=510; pile[WZ1]=I; pile[WZ2]=515; pile[WZ3]=0; pile[WZ4]=jvj+3; 
(*f[391])( );     /*QUADRI10(510,I,515,0,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,jvj+4)*/
I++;
if((I<=20)) goto l26;
x[jvj+28]=x[jvj+4] ;z[jvj+28]=z[jvj+4];
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(457,324,jvj+15)*/
l11:if((x[jvj+15]>0)) goto l12;
x[jvj+27]=x[jvj+28] ;z[jvj+27]=z[jvj+28];
l20:if((x[jvj+27]>0)) goto l21;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+7]=s[x[jvj+21]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+21];
pile[v[22]]=218; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+7,jvj+8)*/
if((x[jvj+8]==x[X])) goto l17;
l3:x[jvj+21]=t[x[jvj+21]];
l1:if((x[jvj+21]>0)) goto l2;
pile[v[22]]=jvj+9; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+9,515,1)*/
pile[WZ1]=1260; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+9,1260,jvj+14)*/
l17:x[jvj+26]=t[x[jvj+26]];
l15:if((x[jvj+26]>0)) goto l16;
x[jvj+25]=t[x[jvj+25]];
l13:if((x[jvj+25]>0)) goto l14;
x[jvj+15]=t[x[jvj+15]];
goto l11;
l5:x[jvj+22]=t[x[jvj+22]];
l4:if((x[jvj+22]<=0)) goto l17;
x[jvj+9]=s[x[jvj+22]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+22];
pile[v[22]]=510; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+9,V6)*/
V6=pile[WZ2]; 
if((V6!=0)) goto l5;
pile[v[22]]=925; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(925,jvj+5,jvj+6)*/
x[jvj+21]=x[jvj+6] ;z[jvj+21]=z[jvj+6];
goto l1;
l7:x[jvj+11]=s[x[jvj+23]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+23];
pile[v[22]]=510; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(510,jvj+11,V9)*/
V9=pile[WZ2]; 
x[jvj+24]=x[jvj+10] ;z[jvj+24]=z[jvj+10];
l9:if((x[jvj+24]<=0)) goto l8;
x[jvj+12]=s[x[jvj+24]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+24];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+12,V10)*/
V10=pile[WZ2]; 
if((V9!=V10)) goto l10;
pile[v[22]]=218; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[X])) goto l10;
pile[v[22]]=jvj+11; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,515,1)*/
pile[WZ1]=1260; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+11,1260,jvj+14)*/
l10:x[jvj+24]=t[x[jvj+24]];
goto l9;
l8:x[jvj+23]=t[x[jvj+23]];
l6:if((x[jvj+23]>0)) goto l7;
x[jvj+22]=x[jvj+28] ;z[jvj+22]=z[jvj+28];
goto l4;
l12:x[jvj+14]=s[x[jvj+15]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+15];
pile[v[22]]=878; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(878,jvj+14,jvj+16)*/
x[jvj+25]=x[jvj+16] ;z[jvj+25]=z[jvj+16];
goto l13;
l14:x[jvj+17]=s[x[jvj+25]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+25];
pile[v[22]]=454; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(454,jvj+17,jvj+18)*/
x[jvj+26]=x[jvj+18] ;z[jvj+26]=z[jvj+18];
goto l15;
l16:x[jvj+5]=s[x[jvj+26]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+26];
pile[v[22]]=925; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(925,jvj+5,jvj+10)*/
x[jvj+23]=x[jvj+28] ;z[jvj+23]=z[jvj+28];
goto l6;
l18:pile[v[22]]=V14; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V14,83,V13)*/
V13=pile[WZ2]; 
l23:pile[v[22]]=V13; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V13,(-9543),V30)*/
V30=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V21; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,V21,V30,V16)*/
V16=pile[WZ3]; 
V15=incon;
pile[v[22]]=1260; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1260,jvj+19,jvj+20)*/
if((x[jvj+20]==0)) goto l19;
for(i=x[jvj+20],V20=0;i>0;i=t[i],V20++)  ;
if((V20>20)) goto l19;
V26=x[jvj+20];
pile[v[22]]=23; pile[WZ1]=V26; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(23,V26,V16,V15)*/
V15=pile[WZ3]; 
l24:pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
l22:x[jvj+27]=t[x[jvj+27]];
goto l20;
l19:V15=V16;
goto l24;
l21:x[jvj+19]=s[x[jvj+27]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+27];
pile[v[22]]=515; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(515,jvj+19,V17)*/
V17=pile[WZ2]; 
if((V17<=0)) goto l22;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(510,jvj+19,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=X; 
(*f[42])( );     /*SRA1(135,0,X,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V17; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,V17,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V28,(-4670),V14)*/
V14=pile[WZ2]; 
V13=incon;
if((V17>1)) goto l18;
V13=V14;
goto l23;
}
