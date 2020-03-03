#include "dx.h"
void ETATCREF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,NA=0,V16=0,NB=0,V24=0,V23=0,V25=0,V32=0,V30=0,V3=0,V8=0,V2=0,V4=0,V5=0,S=0;
int V,BK;
int K;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=10875;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==764&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; BK=pile[v[22]+1]; K=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NA=NB=incon;
pile[v[22]]=0; pile[WZ1]=876; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(0,876,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=0; pile[WZ2]=610; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,0,610,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ2]=609; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,0,609,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ2]=515; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,0,515,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ2]=510; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,0,510,jvj+29)*/
pile[v[22]]=117; pile[WZ2]=493; pile[WZ3]=(-1); pile[WZ4]=jvj+29; pile[WZ5]=K; 
(*f[190])( );     /*QUADRI3(117,0,493,(-1),jvj+29,K)*/
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(645,597,jvj+3)*/
x[jvj+30]=x[jvj+3] ;z[jvj+30]=z[jvj+3];
l1:if((x[jvj+30]<=0)) goto l3;
x[jvj+4]=s[x[jvj+30]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+30];
pile[v[22]]=1092; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1092,jvj+4,jvj+5)*/
if((x[jvj+5]!=114)) goto l2;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+4,V12)*/
V12=pile[WZ2]; 
NA=V12;
l3:if((x[jvj+3]<=0)) goto l15;
x[jvj+6]=s[x[jvj+3]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+3];
pile[v[22]]=1092; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1092,jvj+6,jvj+7)*/
if((x[jvj+7]!=228)) goto l4;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+6,V16)*/
V16=pile[WZ2]; 
NB=V16;
l15:if(NA!=incon) goto l16;
l26:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+30]=t[x[jvj+30]];
goto l1;
l4:x[jvj+3]=t[x[jvj+3]];
goto l3;
l5:x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=983; pile[WZ1]=BK; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(983,BK,jvj+20)*/
pile[v[22]]=878; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(878,jvj+20,jvj+21)*/
l12:if((x[jvj+21]<=0)) goto l17;
x[jvj+8]=s[x[jvj+21]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+21];
pile[v[22]]=163; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(163,jvj+8,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=878; pile[WZ1]=BK; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(878,BK,jvj+9)*/
x[jvj+31]=x[jvj+9] ;z[jvj+31]=z[jvj+9];
l6:if((x[jvj+31]<=0)) goto l13;
x[jvj+10]=s[x[jvj+31]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+31];
pile[v[22]]=897; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(897,jvj+10,V23)*/
V23=pile[WZ2]; 
if((V23!=V)) goto l7;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+10,V25)*/
V25=pile[WZ2]; 
if((V24!=V25)) goto l7;
pile[v[22]]=944; pile[WZ1]=jvj+8; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(944,jvj+8,jvj+15)*/
x[jvj+33]=x[jvj+15] ;z[jvj+33]=z[jvj+15];
l10:if((x[jvj+33]<=0)) goto l13;
x[jvj+16]=s[x[jvj+33]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+33];
pile[v[22]]=935; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(935,jvj+16,jvj+17)*/
if((x[jvj+17]!=547)) goto l11;
pile[v[22]]=1078; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1078,jvj+16,jvj+18)*/
pile[v[22]]=860; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(860,jvj+18,jvj+19)*/
if((x[jvj+19]!=530)) goto l11;
pile[v[22]]=683; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+16,V30)*/
V30=pile[WZ2]; 
if((V30==NB)) goto l14;
if((V30!=NA)) goto l11;
x[jvj+32]=x[jvj+15] ;z[jvj+32]=z[jvj+15];
l8:if((x[jvj+32]<=0)) goto l14;
x[jvj+11]=s[x[jvj+32]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+32];
pile[v[22]]=683; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(683,jvj+11,V32)*/
V32=pile[WZ2]; 
if((V32!=NB)) goto l9;
pile[v[22]]=935; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+11,jvj+12)*/
if((x[jvj+12]!=547)) goto l9;
pile[v[22]]=1078; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1078,jvj+11,jvj+13)*/
pile[v[22]]=860; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(860,jvj+13,jvj+14)*/
if((x[jvj+14]==530)) goto l11;
l9:x[jvj+32]=t[x[jvj+32]];
goto l8;
l7:x[jvj+31]=t[x[jvj+31]];
goto l6;
l11:x[jvj+33]=t[x[jvj+33]];
goto l10;
l14:pile[v[22]]=jvj+22; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+16)*/
l13:x[jvj+21]=t[x[jvj+21]];
goto l12;
l16:if(NB!=incon) goto l5;
goto l26;
l17:x[jvj+35]=x[jvj+22] ;z[jvj+35]=z[jvj+22];
x[jvj+34]=x[jvj+35] ;z[jvj+34]=z[jvj+35];
l24:if((x[jvj+34]<=0)) goto l26;
x[jvj+23]=s[x[jvj+34]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+34];
pile[v[22]]=493; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(493,jvj+23,V2)*/
V2=pile[WZ2]; 
S=V2;
x[jvj+24]=incon;
if((S==0)) goto l18;
if((S==1)) goto l19;
if((S>1)) goto l20;
x[jvj+24]=(-99999998);
l25:pile[v[22]]=K; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(K,117,1)*/
x[jvj+34]=t[x[jvj+34]];
goto l24;
l18:x[jvj+24]=510 ;z[jvj+24]=510;
l21:pile[v[22]]=493; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,K,V8)*/
V8=pile[WZ2]; 
if((V2<=V8)) goto l22;
pile[v[22]]=K; pile[WZ1]=493; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(K,493,V2)*/
l22:pile[v[22]]=876; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(876,jvj+23,V4)*/
V4=pile[WZ2]; 
pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(876,K,V5)*/
V5=pile[WZ2]; 
if((V4<=V5)) goto l23;
pile[v[22]]=K; pile[WZ1]=876; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(K,876,V4)*/
l23:pile[v[22]]=K; pile[WZ1]=jvj+24; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(K,jvj+24,1)*/
goto l25;
l19:x[jvj+24]=515 ;z[jvj+24]=515;
pile[v[22]]=876; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(876,jvj+23,V3)*/
V3=pile[WZ2]; 
if((V3!=0)) goto l21;
pile[v[22]]=K; pile[WZ1]=610; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(K,610,1)*/
goto l21;
l20:x[jvj+24]=609 ;z[jvj+24]=609;
goto l21;
}
