#include "dx.h"
void CRINTERDIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NA=0,V4=0,V1=0,NB=0,V6=0,V2=0,V43=0,V45=0,V49=0,V41=0,V42=0,V44=0,V46=0,V48=0,V50=0,V8=0,MIN=0,V9=0,MAX=0,V13=0,V14=0,V16=0,V20=0,V26=0,V30=0,V37=0,V38=0,V39=0,V36=0,N=0,V21=0,V18=0,MA=0,V19=0,V28=0,V24=0,V29=0;
int MN,MX,ND,R,FA,FB,HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=11599;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1933&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
MN=pile[v[22]]; MX=pile[v[22]+1]; ND=pile[v[22]+2]; R=pile[v[22]+3]; FA=pile[v[22]+4]; FB=pile[v[22]+5]; HIST=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=incon;
V1=incon;
pile[v[22]]=280; pile[WZ1]=ND; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(280,ND,NA)*/
NA=pile[WZ2]; 
V4=NA-1;
V1=V4;
l2:V2=incon;
pile[v[22]]=164; pile[WZ1]=ND; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(164,ND,NB)*/
NB=pile[WZ2]; 
V6=NB+1;
V2=V6;
l24:pile[v[22]]=80; pile[WZ1]=319; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(80,319,jvj+23)*/
pile[v[22]]=164; pile[WZ1]=9999999; pile[WZ2]=280; pile[WZ3]=V2; pile[WZ4]=jvj+23; pile[WZ5]=jvj+22; 
(*f[190])( );     /*QUADRI3(164,9999999,280,V2,jvj+23,jvj+22)*/
pile[v[22]]=287; pile[WZ1]=319; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(287,319,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-9999999); pile[WZ2]=280; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,(-9999999),280,jvj+21)*/
pile[v[22]]=120; pile[WZ1]=jvj+22; pile[WZ2]=164; pile[WZ3]=V1; pile[WZ4]=jvj+21; pile[WZ5]=jvj+4; 
(*f[47])( );     /*QUADRI0(120,jvj+22,164,V1,jvj+21,jvj+4)*/
pile[v[22]]=1553; pile[WZ1]=ND; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1553,ND,jvj+2)*/
l4:if((x[jvj+2]>0)) goto l5;
V43=x[ND];
V45=x[FA];
V49=x[FB];
pile[v[22]]=20; pile[WZ1]=11599; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11599,0,V41)*/
V41=pile[WZ3]; 
pile[WZ1]=V43; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(20,V43,V41,V42)*/
V42=pile[WZ3]; 
pile[WZ1]=V45; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,V45,V42,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=MN; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,MN,V44,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(20,V49,V46,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=MX; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(41,MX,V48,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
if((x[FA]==27)) goto l6;
MIN=MN;
l7:if((x[FB]==29)) goto l8;
MAX=MX;
l9:pile[v[22]]=MIN; pile[WZ1]=MAX; pile[WZ2]=jvj+4; pile[WZ3]=68; pile[WZ4]=jvj+4; 
(*f[2055])( );     /*CRINTERDITB0(MIN,MAX,jvj+4,68,jvj+4)*/
pile[v[22]]=280; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(280,jvj+4,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(164,jvj+4,V38)*/
V38=pile[WZ2]; 
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+10,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=ND; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(365,ND,jvj+11)*/
l15:if((x[jvj+11]<=0)) goto l17;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+12,V36)*/
V36=pile[WZ2]; 
N=V36;
if((N<V37)) goto l16;
if((N>V38)) goto l16;
pile[v[22]]=V39; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V39,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=1933; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,1933,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11599; pile[WZ4]=jvj+26; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,1,218,11599,jvj+26,jvj+13)*/
pile[v[22]]=365; pile[WZ1]=ND; pile[WZ2]=jvj+12; pile[WZ3]=jvj+13; 
(*f[1569])( );     /*DELIER0(365,ND,jvj+12,jvj+13)*/
l16:x[jvj+11]=t[x[jvj+11]];
goto l15;
l1:V1=(-9999999);
goto l2;
l3:V2=9999999;
goto l24;
l5:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[2054])( );     /*CRINTERDITA0(jvj+3,jvj+4)*/
x[jvj+2]=t[x[jvj+2]];
goto l4;
l6:V8=MN+1;
MIN=V8;
goto l7;
l8:V9=MX-1;
MAX=V9;
goto l9;
l10:x[jvj+9]=0 ;z[jvj+9]=0;
if(x[jvj+9]!=incon) goto l11;
l21:if(x[jvj+9]!=incon) goto l22;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l11:x[jvj+7]=d[13];z[jvj+7]=0;
l12:pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(120,jvj+4,jvj+5)*/
pile[v[22]]=319; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(319,jvj+5,jvj+6)*/
l13:x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
goto l12;
l14:pile[v[22]]=280; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(280,jvj+5,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(164,jvj+5,V14)*/
V14=pile[WZ2]; 
pile[WZ1]=V14; pile[WZ2]=280; pile[WZ3]=V13; pile[WZ4]=jvj+8; 
(*f[391])( );     /*QUADRI10(164,V14,280,V13,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+8,jvj+9)*/
goto l13;
l17:x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+14,V21)*/
V21=pile[WZ2]; 
x[jvj+16]=x[jvj+4] ;z[jvj+16]=z[jvj+4];
l18:x[jvj+15]=x[jvj+16] ;z[jvj+15]=z[jvj+16];
pile[v[22]]=319; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(319,jvj+15,jvj+17)*/
if((x[jvj+17]!=287)) goto l20;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(164,jvj+15,V18)*/
V18=pile[WZ2]; 
MA=V18;
if((MA==(-9999999))) goto l20;
V19=MA+1;
pile[v[22]]=280; pile[WZ1]=ND; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(280,ND,V16)*/
V16=pile[WZ2]; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(280,ND,V20)*/
V20=pile[WZ2]; 
if((V20<V19)) goto l25;
l20:if((x[jvj+17]!=80)) goto l19;
pile[v[22]]=280; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(280,jvj+15,V28)*/
V28=pile[WZ2]; 
V24=V28;
if((V24==9999999)) goto l19;
V29=V24-1;
pile[v[22]]=164; pile[WZ1]=ND; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(164,ND,V26)*/
V26=pile[WZ2]; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(164,ND,V30)*/
V30=pile[WZ2]; 
if((V30>V29)) goto l26;
l19:pile[v[22]]=120; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+15,jvj+16)*/
goto l18;
l22:pile[v[22]]=ND; pile[WZ1]=1553; pile[WZ2]=jvj+9; 
(*f[34])( );     /*CHGC0(ND,1553,jvj+9)*/
goto l23;
l25:pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+27; 
(*f[46])( );     /*TRI0(V21,858,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1933; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,1933,246,jvj+29)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11599; pile[WZ4]=jvj+29; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,11599,jvj+29,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=280; pile[WZ2]=ND; pile[WZ3]=V19; 
(*f[2056])( );     /*VAUT0(jvj+18,280,ND,V19)*/
goto l20;
l26:pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V21,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=1933; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,1933,246,jvj+32)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11599; pile[WZ4]=jvj+32; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,1,218,11599,jvj+32,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=164; pile[WZ2]=ND; pile[WZ3]=V29; 
(*f[2056])( );     /*VAUT0(jvj+19,164,ND,V29)*/
goto l19;
}
