#include "dx.h"
void ARCHIVE4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,M=0,R=0,V11=0,P=0,N=0,V3=0,K=0,V18=0,V17=0,V15=0,V26=0,V=0,V29=0,V37=0,V36=0,V32=0,V34=0,V33=0,V31=0,V7=0,V8=0,V23=0,V21=0,V13=0;
int T,HIST,A,EB;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10341;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1768&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; HIST=pile[v[22]+1]; A=pile[v[22]+2]; EB=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
N=incon;
M=0;
R=2;
V9=incon;
pile[v[22]]=715; pile[WZ1]=HIST; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(715,HIST,jvj+3)*/
V9=x[jvj+3];
l2:V11=V9;
P=V11;
pile[v[22]]=642; pile[WZ1]=HIST; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,HIST,N)*/
N=pile[WZ2]; 
l3:x[jvj+4]=vo[13];z[jvj+4]=vz[13];
pile[v[22]]=963; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(963,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l21;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+6,V3)*/
V3=pile[WZ2]; 
if((V3>600000)) goto l21;
(*f[1210])( );     /*AJNUMESSAI0()*/
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+7,K)*/
K=pile[WZ2]; 
ta1[K]=0;
ta2[K]=0;
ta3[K]=0;
ta4[K]=0;
ta5[K]=0;
V7=x[T];
tt[K]=V7;
tp[K]=P;
if(N!=incon) goto l15;
l16:V8=x[A];
ta1[K]=V8;
tm[K]=M;
pile[v[22]]=159; pile[WZ1]=HIST; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(159,HIST,jvj+23)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(0,117,jvj+8)*/
l17:if((x[jvj+23]>0)) goto l18;
V23=vbl[M];
x[jvj+11]=V23 ;z[jvj+11]=(V23<=sepcte) ? V23 : 0;
pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(993,994,V21)*/
V21=pile[WZ2]; 
if((V21!=3)) goto l20;
pile[v[22]]=345; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(345,jvj+11,jvj+12)*/
pile[v[22]]=365; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(365,jvj+12,jvj+13)*/
l9:if((x[jvj+13]<=0)) goto l20;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=246; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(246,jvj+14,V26)*/
V26=pile[WZ2]; 
if((V26!=M)) goto l10;
pile[v[22]]=222; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(222,jvj+14,jvj+15)*/
if((x[jvj+15]<=0)) goto l20;
V=s[x[jvj+15]];
pile[v[22]]=159; pile[WZ1]=HIST; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(159,HIST,jvj+16)*/
l11:if((x[jvj+16]<=0)) goto l20;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=110; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(110,jvj+17,V29)*/
V29=pile[WZ2]; 
if((V29!=V)) goto l12;
pile[v[22]]=101; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+17,jvj+18)*/
pile[v[22]]=277; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(277,jvj+18,jvj+20)*/
pile[v[22]]=365; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(365,jvj+18,jvj+21)*/
for(i=x[jvj+21],V37=0;i>0;i=t[i],V37++)  ;
V36=25600+V37;
ts[K]=V36;
l13:pile[v[22]]=277; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(277,jvj+18,jvj+19)*/
l20:V13=x[EB];
ta2[K]=V13;
pile[v[22]]=HIST; pile[WZ1]=858; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(HIST,858,K)*/
l21:if((v[93]<=0)) goto l22;
if(x[T]!=1318&&x[T]!=1465&&x[T]!=580&&x[T]!=489&&x[T]!=365&&x[T]!=904&&x[T]!=280&&x[T]!=164&&x[T]!=472&&x[T]!=473&&x[T]!=688&&x[T]!=750&&x[T]!=1367) goto l22;
x[jvj+24]=vo[14];z[jvj+24]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1415,jvj+24,jvj+25)*/
pile[v[22]]=1018; pile[WZ1]=T; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1018,T,jvj+26)*/
pile[v[22]]=1525; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1525,jvj+25,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=737; 
(*f[1211])( );     /*MARKUTILE0(jvj+25,737)*/
pile[WZ1]=jvj+26; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+25,jvj+26,1)*/
pile[v[22]]=jvj+27; 
(*f[186])( );     /*BTC0(jvj+27,jvj+26,1)*/
l22:x[jvj+28]=vo[14];z[jvj+28]=vz[14];
pile[v[22]]=jvj+28; pile[WZ1]=927; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+28,927,1)*/
l23:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l1:V9=301;
goto l2;
l4:ta1[K]=V15;
l8:pile[v[22]]=jvj+8; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+8,117,1)*/
l19:x[jvj+23]=t[x[jvj+23]];
goto l17;
l5:ta2[K]=V15;
goto l8;
l6:ta3[K]=V15;
goto l8;
l7:ta4[K]=V15;
goto l8;
l10:x[jvj+13]=t[x[jvj+13]];
goto l9;
l12:x[jvj+16]=t[x[jvj+16]];
goto l11;
l14:pile[v[22]]=870; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(870,jvj+18,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=868; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(868,jvj+18,jvj+22)*/
pile[v[22]]=405; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(405,jvj+22,V34)*/
V34=pile[WZ2]; 
V33=256*V34;
V31=V32+V33;
ts[K]=V31;
goto l20;
l15:tn[K]=N;
goto l16;
l18:x[jvj+9]=s[x[jvj+23]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+23];
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(117,jvj+8,V18)*/
V18=pile[WZ2]; 
V17=R+V18;
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+9,jvj+10)*/
V15=x[jvj+10];
if((V17==0)) goto l4;
if((V17==1)) goto l5;
if((V17==2)) goto l6;
if((V17==3)) goto l7;
if((V17!=4)) goto l8;
ta5[K]=V15;
goto l8;
}
