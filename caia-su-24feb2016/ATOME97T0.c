#include "dx.h"
void ATOME97T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V56=0,V15=0,V57=0,V16=0,V29=0,V63=0,V18=0,V17=0,V59=0,V65=0,V22=0,V21=0,V61=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=57;
x[jvj+1]=20097;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3232&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=30)) goto l15;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(870,R,V15)*/
V15=pile[WZ2]; 
if((V15!=2)) goto l15;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+10,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,R,jvj+11)*/
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,R,jvj+12)*/
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=509; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(509,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=870; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(870,jvj+5,V56)*/
V56=pile[WZ2]; 
if((V56!=2)) goto l2;
pile[v[22]]=868; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(868,jvj+5,jvj+6)*/
if((x[jvj+6]!=55)) goto l2;
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+5)*/
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:pile[v[22]]=jvj+11; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+13)*/
l4:if((x[jvj+7]<=0)) goto l15;
x[jvj+14]=s[x[jvj+7]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+7];
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=55)) goto l5;
pile[v[22]]=870; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,jvj+14,V16)*/
V16=pile[WZ2]; 
if((V16!=2)) goto l5;
pile[v[22]]=107; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+17)*/
for(i=x[jvj+17],V29=0;i>0;i=t[i],V29++)  ;
if((V29!=2)) goto l5;
x[jvj+56]=x[jvj+17] ;z[jvj+56]=z[jvj+17];
l6:if((x[jvj+56]<=0)) goto l5;
x[jvj+18]=s[x[jvj+56]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+56];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=26)) goto l7;
x[jvj+57]=x[jvj+17] ;z[jvj+57]=z[jvj+17];
l8:if((x[jvj+57]<=0)) goto l7;
x[jvj+21]=s[x[jvj+57]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+57];
if((x[jvj+18]==x[jvj+21])) goto l9;
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=25)) goto l9;
x[jvj+24]=d[20];z[jvj+24]=0;
l10:if((x[jvj+24]<=0)) goto l9;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=268; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+25,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+18; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+26,jvj+18,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+27,jvj+28)*/
if(x[jvj+28]!=96&&x[jvj+28]!=89&&x[jvj+28]!=41&&x[jvj+28]!=20&&x[jvj+28]!=128&&x[jvj+28]!=570&&x[jvj+28]!=1317) goto l11;
if((x[jvj+29]=w[x[jvj+28]][3])==incon) goto l11;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+29; pile[WZ3]=jvj+30; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+27,jvj+29,V63,jvj+30)*/
V63=pile[WZ2]; 
V18=V63;
V17=V18;
pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+31)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+25; pile[WZ3]=jvj+32; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+18,jvj+25,V59,jvj+32)*/
V59=pile[WZ2]; 
x[jvj+33]=V59 ;z[jvj+33]=(x[jvj+32]==20&&V59<=sepcte) ? V59 : (x[jvj+32]==41) ? (-1000) : 0;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[760])( );     /*MEMEX0(jvj+11,jvj+33,jvj+34)*/
if((x[jvj+34]==135)) goto l12;
l11:x[jvj+24]=t[x[jvj+24]];
goto l10;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l7:x[jvj+56]=t[x[jvj+56]];
goto l6;
l9:x[jvj+57]=t[x[jvj+57]];
goto l8;
l12:x[jvj+54]=x[jvj+31] ;z[jvj+54]=z[jvj+31];
x[jvj+35]=d[20];z[jvj+35]=0;
l13:if((x[jvj+35]<=0)) goto l11;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=268; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+36,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+21; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+37,jvj+21,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+38,jvj+39)*/
if(x[jvj+39]!=96&&x[jvj+39]!=89&&x[jvj+39]!=41&&x[jvj+39]!=20&&x[jvj+39]!=128&&x[jvj+39]!=570&&x[jvj+39]!=1317) goto l14;
if((x[jvj+40]=w[x[jvj+39]][3])==incon) goto l14;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+40; pile[WZ3]=jvj+41; 
(*f[45])( );if(v[102]) goto l14;     /*FNDZ0(jvj+38,jvj+40,V65,jvj+41)*/
V65=pile[WZ2]; 
V22=V65;
V21=V22;
if((V17<=V21)) goto l14;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+36; pile[WZ3]=jvj+42; 
(*f[45])( );if(v[102]) goto l14;     /*FNDZ0(jvj+21,jvj+36,V61,jvj+42)*/
V61=pile[WZ2]; 
x[jvj+43]=V61 ;z[jvj+43]=(x[jvj+42]==20&&V61<=sepcte) ? V61 : (x[jvj+42]==41) ? (-1000) : 0;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+43,jvj+44)*/
if((x[jvj+44]==135)) goto l16;
l14:x[jvj+35]=t[x[jvj+35]];
goto l13;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l16:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+50)*/
pile[WZ1]=jvj+14; pile[WZ3]=(-631); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(101,jvj+14,110,(-631),jvj+51)*/
pile[v[22]]=V57; pile[WZ1]=858; pile[WZ2]=jvj+47; 
(*f[46])( );     /*TRI0(V57,858,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+48; 
(*f[189])( );     /*TRI4(jvj+47,v[13],642,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=3232; pile[WZ2]=246; pile[WZ3]=jvj+49; 
(*f[189])( );     /*TRI4(jvj+48,3232,246,jvj+49)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20097; pile[WZ4]=jvj+49; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(158,1,218,20097,jvj+49,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=159; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+45,159,jvj+50)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+45,159,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=103; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+53,jvj+54,103,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+55; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+55,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+45; 
(*f[1296])( );     /*NOUVCONTR0(jvj+46,jvj+45)*/
goto l14;
}
