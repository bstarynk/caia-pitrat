#include "dx.h"
void TRINOME1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V56=0,V57=0,V58=0,I=0,V20=0,V10=0,V3=0,V36=0,V28=0,AA=0,BB=0,CC=0;
int ZZ,RR,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
if(v[0]>99700) (*f[6])( );

ZZ=pile[v[22]]; RR=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=ZZ; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,ZZ,jvj+5)*/
if((x[jvj+5]==484)) goto l5;
if((x[N]!=68)) goto l6;
if((x[jvj+5]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,ZZ,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=485)) goto l6;
pile[v[22]]=107; pile[WZ1]=ZZ; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,ZZ,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l26;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=jvj+2; pile[WZ1]=RR; pile[WZ2]=67; 
(*f[1898])( );     /*TRINOME1(jvj+2,RR,67)*/
x[jvj+1]=t[x[jvj+1]];
goto l1;
l5:pile[v[22]]=RR; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RR,515,1)*/
l26:v[0]=jvj; v[22]-=3; return;
l6:pile[v[22]]=130; pile[WZ1]=ZZ; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,ZZ,I)*/
I=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=609; pile[WZ2]=I; 
(*f[186])( );     /*BTC0(RR,609,I)*/
goto l26;
l7:pile[v[22]]=111; pile[WZ1]=ZZ; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,ZZ,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==486)) goto l8;
if((x[jvj+9]!=52)) goto l25;
pile[v[22]]=102; pile[WZ1]=ZZ; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,ZZ,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=67; pile[WZ5]=jvj+3; 
(*f[1899])( );     /*TRINOME2(jvj+23,67,AA,BB,CC,jvj+3)*/
AA=pile[WZ2]; BB=pile[WZ3]; CC=pile[WZ4]; 
if((AA==0)) goto l2;
V56=(-AA);
pile[v[22]]=RR; pile[WZ1]=510; pile[WZ2]=V56; 
(*f[186])( );     /*BTC0(RR,510,V56)*/
l2:if((BB==0)) goto l3;
V57=(-BB);
pile[v[22]]=RR; pile[WZ1]=515; pile[WZ2]=V57; 
(*f[186])( );     /*BTC0(RR,515,V57)*/
l3:if((CC==0)) goto l4;
V58=(-CC);
pile[v[22]]=RR; pile[WZ1]=609; pile[WZ2]=V58; 
(*f[186])( );     /*BTC0(RR,609,V58)*/
l4:pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(158,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l26;
pile[v[22]]=RR; pile[WZ1]=158; 
(*f[35])( );     /*CHGC1(RR,158,jvj+4)*/
goto l26;
l8:pile[v[22]]=107; pile[WZ1]=ZZ; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,ZZ,jvj+10)*/
for(i=x[jvj+10],V20=0;i>0;i=t[i],V20++)  ;
if((V20==2)) goto l11;
if((V20!=3)) goto l25;
x[jvj+28]=x[jvj+10] ;z[jvj+28]=z[jvj+10];
l19:if((x[jvj+28]<=0)) goto l25;
x[jvj+18]=s[x[jvj+28]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+28];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+18,V36)*/
V36=pile[WZ2]; 
V28=V36;
x[jvj+29]=x[jvj+10] ;z[jvj+29]=z[jvj+10];
l21:if((x[jvj+29]<=0)) goto l20;
x[jvj+19]=s[x[jvj+29]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+29];
if((x[jvj+18]==x[jvj+19])) goto l22;
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=484)) goto l22;
x[jvj+30]=x[jvj+10] ;z[jvj+30]=z[jvj+10];
l23:if((x[jvj+30]<=0)) goto l22;
x[jvj+21]=s[x[jvj+30]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+30];
if((x[jvj+18]==x[jvj+21])) goto l24;
if((x[jvj+19]==x[jvj+21])) goto l24;
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=484)) goto l24;
pile[v[22]]=RR; pile[WZ1]=510; pile[WZ2]=V28; 
(*f[186])( );     /*BTC0(RR,510,V28)*/
goto l26;
l10:x[jvj+11]=s[x[jvj+24]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+24];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=484)) goto l12;
x[jvj+25]=x[jvj+10] ;z[jvj+25]=z[jvj+10];
l13:if((x[jvj+25]<=0)) goto l12;
x[jvj+13]=s[x[jvj+25]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+25];
if((x[jvj+11]==x[jvj+13])) goto l14;
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l14;
pile[v[22]]=RR; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RR,510,1)*/
goto l26;
l11:x[jvj+24]=x[jvj+10] ;z[jvj+24]=z[jvj+10];
l9:if((x[jvj+24]>0)) goto l10;
x[jvj+26]=x[jvj+10] ;z[jvj+26]=z[jvj+10];
l15:if((x[jvj+26]<=0)) goto l25;
x[jvj+15]=s[x[jvj+26]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+26];
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+15,V10)*/
V10=pile[WZ2]; 
V3=V10;
x[jvj+27]=x[jvj+10] ;z[jvj+27]=z[jvj+10];
l17:if((x[jvj+27]<=0)) goto l16;
x[jvj+16]=s[x[jvj+27]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+27];
if((x[jvj+15]==x[jvj+16])) goto l18;
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=484)) goto l18;
pile[v[22]]=RR; pile[WZ1]=515; pile[WZ2]=V3; 
(*f[186])( );     /*BTC0(RR,515,V3)*/
goto l26;
l12:x[jvj+24]=t[x[jvj+24]];
goto l9;
l14:x[jvj+25]=t[x[jvj+25]];
goto l13;
l16:x[jvj+26]=t[x[jvj+26]];
goto l15;
l18:x[jvj+27]=t[x[jvj+27]];
goto l17;
l20:x[jvj+28]=t[x[jvj+28]];
goto l19;
l22:x[jvj+29]=t[x[jvj+29]];
goto l21;
l24:x[jvj+30]=t[x[jvj+30]];
goto l23;
l25:pile[v[22]]=RR; pile[WZ1]=158; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(RR,158,12)*/
goto l26;
}
