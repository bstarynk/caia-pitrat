#include "dx.h"
void ARCHIVE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,R=0,V10=0,P=0,N=0,V3=0,K=0,V14=0,V13=0,V16=0,M=0,V7=0,V21=0,V19=0,V27=0,V17=0,V26=0,V29=0,V38=0,V37=0,V35=0,V47=0,V=0,V50=0,V58=0,V57=0,V53=0,V55=0,V54=0,V52=0,V44=0,V42=0,V25=0,V24=0,I=0,V23=0,Z=0,V65=0,V67=0,V62=0;
int S,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=10341;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==903&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
N=M=K=incon;
x[jvj+3]=x[S] ;z[jvj+3]=z[S];
R=0;
V8=incon;
pile[v[22]]=715; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(715,jvj+3,jvj+4)*/
V8=x[jvj+4];
l2:V10=V8;
P=V10;
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+3,N)*/
N=pile[WZ2]; 
l3:x[jvj+5]=vo[13];z[jvj+5]=vz[13];
pile[v[22]]=963; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(963,jvj+5,jvj+6)*/
if((x[jvj+6]!=68)) goto l7;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+7,V3)*/
V3=pile[WZ2]; 
if((V3>600000)) goto l7;
(*f[1210])( );     /*AJNUMESSAI0()*/
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+8,K)*/
K=pile[WZ2]; 
ta1[K]=0;
ta2[K]=0;
ta3[K]=0;
ta4[K]=0;
ta5[K]=0;
V7=x[T];
tt[K]=V7;
tp[K]=P;
if(N!=incon) goto l4;
l5:pile[v[22]]=246; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(246,S,M)*/
M=pile[WZ2]; 
V14=tnd[M][0];
if((V14!=0)) goto l6;
V13=knr[M];
if((V13<=0)) goto l6;
V16=vbl[M];
x[jvj+9]=V16 ;z[jvj+9]=(V16<=sepcte) ? V16 : 0;
pile[v[22]]=jvj+9; pile[WZ1]=M; pile[WZ2]=jvj+10; 
(*f[28])( );if(v[102]) goto l6;     /*TLDEBL0(jvj+9,M,jvj+10)*/
pile[v[22]]=M; pile[WZ1]=jvj+10; 
(*f[27])( );     /*CRETND0(M,jvj+10)*/
l6:pile[v[22]]=jvj+3; pile[WZ1]=858; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(jvj+3,858,K)*/
if(M==incon) goto l7;
l28:tm[K]=M;
if((M!=0)) goto l31;
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+30)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(0,117,jvj+15)*/
l29:if((x[jvj+30]<=0)) goto l31;
x[jvj+16]=s[x[jvj+30]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+30];
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,jvj+15,V38)*/
V38=pile[WZ2]; 
V37=R+V38;
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+16,jvj+17)*/
V35=x[jvj+17];
if((V37==0)) goto l17;
if((V37==1)) goto l18;
if((V37==2)) goto l19;
if((V37==3)) goto l20;
if((V37!=4)) goto l21;
ta5[K]=V35;
l21:pile[v[22]]=jvj+15; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+15,117,1)*/
l30:x[jvj+30]=t[x[jvj+30]];
goto l29;
l1:V8=301;
goto l2;
l4:tn[K]=N;
goto l5;
l7:M=0;
if(K!=incon) goto l28;
l38:if((v[93]<=0)) goto l39;
if(x[T]!=1318&&x[T]!=1465&&x[T]!=580&&x[T]!=489&&x[T]!=365&&x[T]!=904&&x[T]!=280&&x[T]!=164&&x[T]!=472&&x[T]!=473&&x[T]!=688&&x[T]!=750&&x[T]!=1367) goto l39;
x[jvj+36]=vo[14];z[jvj+36]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1415,jvj+36,jvj+37)*/
pile[v[22]]=1018; pile[WZ1]=T; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1018,T,jvj+38)*/
pile[v[22]]=1525; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1525,jvj+37,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=737; 
(*f[1211])( );     /*MARKUTILE0(jvj+37,737)*/
pile[WZ1]=jvj+38; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+37,jvj+38,1)*/
pile[v[22]]=jvj+39; 
(*f[186])( );     /*BTC0(jvj+39,jvj+38,1)*/
l39:x[jvj+40]=vo[14];z[jvj+40]=vz[14];
pile[v[22]]=jvj+40; pile[WZ1]=927; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+40,927,1)*/
l40:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l9:x[jvj+41]=t[x[jvj+41]];
l8:if((x[jvj+41]<=0)) goto l34;
x[jvj+12]=s[x[jvj+41]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+41];
pile[v[22]]=110; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(110,jvj+12,V19)*/
V19=pile[WZ2]; 
if((V19!=V21)) goto l9;
V17=incon;
if((V23==20)) goto l10;
if((V23==41)) goto l11;
if((V23!=23)) goto l12;
pile[v[22]]=128; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(128,jvj+12,jvj+14)*/
V29=x[jvj+14];
V17=V29;
l36:if((V17==(-99999998))) goto l34;
Z=V17;
if((I==0)) goto l13;
if((I==1)) goto l14;
if((I==2)) goto l15;
if((I==3)) goto l16;
if((I!=4)) goto l34;
ta5[K]=Z;
l34:I++;
l33:if((I<=V24)) goto l35;
if(x[T]!=289&&x[T]!=44&&x[T]!=187) goto l37;
V65=vv[101];
if((V65<=0)) goto l37;
V67=vbl[M];
x[jvj+31]=V67 ;z[jvj+31]=(V67<=sepcte) ? V67 : 0;
pile[v[22]]=jvj+31; pile[WZ1]=M; pile[WZ2]=jvj+32; 
(*f[28])( );if(v[102]) goto l37;     /*TLDEBL0(jvj+31,M,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=1210; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+32,1210,1)*/
l37:if(x[T]!=289&&x[T]!=44) goto l38;
V62=vbl[M];
x[jvj+33]=V62 ;z[jvj+33]=(V62<=sepcte) ? V62 : 0;
pile[v[22]]=963; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(963,jvj+33,jvj+34)*/
if((x[jvj+34]!=68)) goto l38;
x[jvj+35]=vo[14];z[jvj+35]=vz[14];
pile[v[22]]=jvj+35; pile[WZ1]=1296; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+35,1296,1)*/
goto l38;
l10:pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+12,jvj+13)*/
V27=x[jvj+13];
V17=V27;
goto l36;
l11:pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+12,V26)*/
V26=pile[WZ2]; 
V17=V26;
goto l36;
l12:V17=(-99999998);
goto l34;
l13:ta1[K]=Z;
goto l34;
l14:ta2[K]=Z;
goto l34;
l15:ta3[K]=Z;
goto l34;
l16:ta4[K]=Z;
goto l34;
l17:ta1[K]=V35;
goto l21;
l18:ta2[K]=V35;
goto l21;
l19:ta3[K]=V35;
goto l21;
l20:ta4[K]=V35;
goto l21;
l23:x[jvj+20]=t[x[jvj+20]];
l22:if((x[jvj+20]<=0)) goto l32;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=246; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(246,jvj+21,V47)*/
V47=pile[WZ2]; 
if((V47!=M)) goto l23;
pile[v[22]]=222; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(222,jvj+21,jvj+22)*/
if((x[jvj+22]<=0)) goto l32;
V=s[x[jvj+22]];
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+23)*/
l24:if((x[jvj+23]<=0)) goto l32;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=110; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(110,jvj+24,V50)*/
V50=pile[WZ2]; 
if((V50!=V)) goto l25;
pile[v[22]]=101; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+24,jvj+25)*/
pile[v[22]]=277; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(277,jvj+25,jvj+27)*/
pile[v[22]]=365; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(365,jvj+25,jvj+28)*/
for(i=x[jvj+28],V58=0;i>0;i=t[i],V58++)  ;
V57=25600+V58;
ts[K]=V57;
l26:pile[v[22]]=277; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(277,jvj+25,jvj+26)*/
l32:if((M<=0)) goto l38;
V25=knd[M];
V24=V25-1;
I=0;
goto l33;
l25:x[jvj+23]=t[x[jvj+23]];
goto l24;
l27:pile[v[22]]=870; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(870,jvj+25,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=868; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(868,jvj+25,jvj+29)*/
pile[v[22]]=405; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(405,jvj+29,V55)*/
V55=pile[WZ2]; 
V54=256*V55;
V52=V53+V54;
ts[K]=V52;
goto l32;
l31:V44=vbl[M];
x[jvj+18]=V44 ;z[jvj+18]=(V44<=sepcte) ? V44 : 0;
pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(993,994,V42)*/
V42=pile[WZ2]; 
if((V42!=3)) goto l32;
pile[v[22]]=345; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(345,jvj+18,jvj+19)*/
pile[v[22]]=365; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(365,jvj+19,jvj+20)*/
goto l22;
l35:V23=tnd[M][I];
V21=vnd[M][I];
pile[v[22]]=159; pile[WZ1]=S; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(159,S,jvj+11)*/
x[jvj+41]=x[jvj+11] ;z[jvj+41]=z[jvj+11];
goto l8;
}
