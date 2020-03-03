#include "dx.h"
void ATOME168T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V51=0,V14=0,P=0,V18=0,V52=0,V27=0,II=0,D=0,I=0,V48=0,K=0,V12=0,V13=0,V71=0,V10=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=53;
x[jvj+1]=20168;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3738&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=625)) goto l15;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,RR,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l15;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(160,R,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+10,P)*/
P=pile[WZ2]; 
V18=P+1;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+11,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=jvj+52; 
(*f[992])( );if(v[102]) goto l16;     /*FACTPREM0(V18,jvj+52)*/
for(i=x[jvj+52],V71=0;i>0;i=t[i],V71++)  ;
if((V71!=1)) goto l16;
V10=135;
l4:if((V10==135)) goto l5;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l3:V51=II+P;
V14=V51;
l9:x[jvj+19]=x[jvj+15] ;z[jvj+19]=z[jvj+15];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[200])( );if(v[102]) goto l8;     /*NDD0(jvj+19,jvj+20)*/
D=x[jvj+20];
I=V14;
x[jvj+21]=d[20];z[jvj+21]=0;
l10:if((x[jvj+21]<=0)) goto l8;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=RR; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+22,RR,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[887])( );     /*VARND0(jvj+23,jvj+24)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==D) goto l12;
l11:x[jvj+21]=t[x[jvj+21]];
goto l10;
l5:pile[v[22]]=1294; pile[WZ1]=RR; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1294,RR,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==1483) goto l7;
goto l15;
l7:x[jvj+13]=d[20];z[jvj+13]=0;
l6:if((x[jvj+13]<=0)) goto l15;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+14,R,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+14,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+17,R,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+18,V27)*/
V27=pile[WZ2]; 
II=V27;
V14=incon;
if((II<0)) goto l3;
V14=II;
goto l9;
l8:x[jvj+13]=t[x[jvj+13]];
goto l6;
l12:pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; 
(*f[3517])( );     /*DECSOM2(jvj+23,jvj+25)*/
x[jvj+53]=x[jvj+25] ;z[jvj+53]=z[jvj+25];
l1:if((x[jvj+53]<=0)) goto l11;
x[jvj+3]=s[x[jvj+53]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+53];
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==D) goto l13;
l2:x[jvj+53]=t[x[jvj+53]];
goto l1;
l13:pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+3,jvj+26)*/
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=596)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+26,jvj+29)*/
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+29,V48)*/
V48=pile[WZ2]; 
K=V48;
pile[v[22]]=V18; pile[WZ1]=K; 
(*f[1011])( );     /*PGCD0(V18,K,V12)*/
V12=pile[WZ2]; 
if((V12!=1)) goto l11;
pile[WZ1]=I; pile[WZ2]=K; 
(*f[1041])( );if(v[102]) goto l11;     /*MODPUI0(V18,I,K,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+30)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+30; pile[WZ2]=jvj+23; pile[WZ3]=jvj+31; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+26,jvj+30,jvj+23,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+31,jvj+32)*/
pile[v[22]]=103; pile[WZ1]=jvj+26; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+26,jvj+33)*/
pile[v[22]]=268; pile[WZ1]=jvj+22; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+22,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=RR; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+34,RR,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+36)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+33; pile[WZ2]=jvj+37; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+33,jvj+37)*/
if((x[jvj+37]==135)) goto l14;
goto l11;
l14:x[jvj+51]=x[jvj+32] ;z[jvj+51]=z[jvj+32];
x[jvj+49]=x[jvj+36] ;z[jvj+49]=z[jvj+36];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+43)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+44)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+40; 
(*f[46])( );     /*TRI0(V52,858,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,v[13],642,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=3738; pile[WZ2]=246; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,3738,246,jvj+42)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20168; pile[WZ4]=jvj+42; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(158,1,218,20168,jvj+42,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=159; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+38,159,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+38,159,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V18; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,V18,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=160; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,160,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=111; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+51,jvj+50,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+38; 
(*f[1296])( );     /*NOUVCONTR0(jvj+39,jvj+38)*/
goto l11;
l16:V10=134;
goto l4;
}
