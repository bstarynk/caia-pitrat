#include "dx.h"
void ATOME163T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V21=0,V7=0,V18=0,V14=0,V13=0,V17=0,V16=0,V15=0,V36=0,V49=0,M=0,V43=0,V22=0,K=0,V12=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
x[jvj+1]=20163;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3522&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=625)) goto l18;
x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1353,jvj+10,jvj+11)*/
if((x[jvj+11]!=68)) goto l18;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(160,R,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+12,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[1948])( );if(v[102]) goto l18;     /*FNDOND0(498,jvj+10,jvj+13)*/
pile[v[22]]=1182; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1182,jvj+13,jvj+14)*/
if((68!=x[jvj+14])) goto l18;
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+15,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l18;     /*FNDCND0(280,D,M)*/
M=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=jvj+16; 
(*f[1007])( );if(v[102]) goto l18;     /*DECFACTPREM0(V36,jvj+16)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1294,R,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==1483) goto l13;
l18:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+51]=t[x[jvj+51]];
l1:if((x[jvj+51]<=0)) goto l3;
x[jvj+3]=s[x[jvj+51]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+51];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+3,V19)*/
V19=pile[WZ2]; 
if((V19!=V14)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+3,V21)*/
V21=pile[WZ2]; 
V7=V21;
l5:x[jvj+52]=x[jvj+35] ;z[jvj+52]=z[jvj+35];
l4:if((x[jvj+52]<=0)) goto l17;
x[jvj+5]=s[x[jvj+52]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+52];
pile[v[22]]=510; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+5,V13)*/
V13=pile[WZ2]; 
if((V13!=V14)) goto l6;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+5,V17)*/
V17=pile[WZ2]; 
V16=M*V17;
V15=V16+V7;
if((V15<V18)) goto l6;
x[jvj+53]=t[x[jvj+53]];
l7:if((x[jvj+53]>0)) goto l8;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+54]=x[jvj+22] ;z[jvj+54]=z[jvj+22];
l9:if((x[jvj+54]>0)) goto l10;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+36; 
(*f[1454])( );if(v[102]) goto l17;     /*CRESOM0(jvj+6,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+43)*/
pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+44)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+45)*/
pile[v[22]]=V49; pile[WZ1]=858; pile[WZ2]=jvj+40; 
(*f[46])( );     /*TRI0(V49,858,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,v[13],642,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=3522; pile[WZ2]=246; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,3522,246,jvj+42)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20163; pile[WZ4]=jvj+42; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(158,1,218,20163,jvj+42,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=159; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+38,159,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+38,159,jvj+44)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+38,159,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V36; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,V36,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=160; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,160,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=111; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,jvj+25,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+50; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+50,jvj+39)*/
pile[v[22]]=R; pile[WZ1]=jvj+39; pile[WZ2]=jvj+38; 
(*f[1558])( );     /*RESTAURE0(R,jvj+39,jvj+38)*/
l17:x[jvj+55]=t[x[jvj+55]];
l16:if((x[jvj+55]<=0)) goto l14;
x[jvj+26]=s[x[jvj+55]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+55];
pile[v[22]]=218; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(218,jvj+26,jvj+27)*/
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=596)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+27,jvj+30)*/
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+30,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+27,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=484)) goto l17;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+33; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+31,jvj+33)*/
if((x[jvj+33]!=x[D])) goto l17;
pile[v[22]]=117; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+26,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=jvj+34; 
(*f[1007])( );if(v[102]) goto l17;     /*DECFACTPREM0(V22,jvj+34)*/
K=V43;
V12=abs(K);
pile[v[22]]=V12; pile[WZ1]=jvj+35; 
(*f[1007])( );if(v[102]) goto l17;     /*DECFACTPREM0(V12,jvj+35)*/
x[jvj+53]=x[jvj+16] ;z[jvj+53]=z[jvj+16];
goto l7;
l3:V7=0;
goto l5;
l6:x[jvj+52]=t[x[jvj+52]];
goto l4;
l8:x[jvj+4]=s[x[jvj+53]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+53];
pile[v[22]]=515; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(515,jvj+4,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+4,V14)*/
V14=pile[WZ2]; 
V7=incon;
x[jvj+51]=x[jvj+34] ;z[jvj+51]=z[jvj+34];
goto l1;
l10:x[jvj+7]=s[x[jvj+54]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+54];
if((x[jvj+7]==x[jvj+26])) goto l11;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l11:x[jvj+54]=t[x[jvj+54]];
goto l9;
l13:x[jvj+18]=d[20];z[jvj+18]=0;
l12:if((x[jvj+18]<=0)) goto l18;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+19,R,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[887])( );     /*VARND0(jvj+20,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==x[D]) goto l15;
l14:x[jvj+18]=t[x[jvj+18]];
goto l12;
l15:pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; 
(*f[3517])( );     /*DECSOM2(jvj+20,jvj+22)*/
pile[v[22]]=268; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+19,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+23,R,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
x[jvj+55]=x[jvj+22] ;z[jvj+55]=z[jvj+22];
goto l16;
}
