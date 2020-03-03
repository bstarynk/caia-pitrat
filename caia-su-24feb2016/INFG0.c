#include "dx.h"
void INFG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X=0,V3=0,V99=0,V112=0,V107=0,V101=0,V100=0,V126=0,I=0,V128=0,V117=0,V130=0,V119=0,V142=0,V153=0,V148=0,V144=0,V143=0,K=0,V23=0,V175=0,V192=0,V181=0,V14=0,V156=0,YY=0,V161=0,V120=0,V92=0,V90=0,S=0,V45=0,V51=0,V220=0,V80=0,V81=0,V82=0,V78=0,RA=0,L=0,V222=0,V37=0,V31=0,V33=0,RS=0,V38=0,RB=0,V63=0,V64=0,V62=0,V61=0,V59=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=128;
x[jvj+1]=10932;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3109&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=RB=RA=x[jvj+126]=x[jvj+49]=x[jvj+88]=incon;
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(A,jvj+2)*/
for(i=x[jvj+2],V3=0;i>0;i=t[i],V3++)  ;
if((V3!=1)) goto l23;
if((x[jvj+2]<=0)) goto l23;
X=s[x[jvj+2]];
if((X!=x[B])) goto l23;
pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(A,R)*/
l42:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(111,A,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]!=485)) goto l84;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,A,jvj+49)*/
for(i=x[jvj+49],V92=0;i>0;i=t[i],V92++)  ;
x[jvj+60]=0 ;z[jvj+60]=0;
x[jvj+117]=x[jvj+49] ;z[jvj+117]=z[jvj+49];
l51:if((x[jvj+117]>0)) goto l52;
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; 
(*f[299])( );     /*COPEL0(jvj+60,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=111; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,111,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+61; pile[WZ2]=107; pile[WZ3]=jvj+101; 
(*f[301])( );     /*TRI11(jvj+100,jvj+61,107,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+101,22,100,jvj+62)*/
pile[v[22]]=107; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(107,jvj+62,jvj+63)*/
for(i=x[jvj+63],V90=0;i>0;i=t[i],V90++)  ;
if((V90!=V92)) goto l54;
x[jvj+126]=x[jvj+62] ;z[jvj+126]=z[jvj+62];
l54:x[jvj+64]=vo[16];z[jvj+64]=vz[16];
pile[v[22]]=242; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(242,jvj+64,jvj+65)*/
x[jvj+53]=0 ;z[jvj+53]=0;
x[jvj+114]=x[jvj+49] ;z[jvj+114]=z[jvj+49];
l43:if((x[jvj+114]>0)) goto l44;
x[jvj+88]=x[jvj+53] ;z[jvj+88]=z[jvj+53];
x[jvj+56]=0 ;z[jvj+56]=0;
x[jvj+115]=x[jvj+88] ;z[jvj+115]=z[jvj+88];
l47:if((x[jvj+115]>0)) goto l48;
x[jvj+78]=x[jvj+56] ;z[jvj+78]=z[jvj+56];
S=x[jvj+65];
pile[v[22]]=18; pile[WZ1]=0; pile[WZ2]=117; pile[WZ3]=0; pile[WZ4]=jvj+77; 
(*f[391])( );     /*QUADRI10(18,0,117,0,jvj+77)*/
x[jvj+122]=x[jvj+88] ;z[jvj+122]=z[jvj+88];
l65:if((x[jvj+122]>0)) goto l66;
for(i=x[jvj+88],V81=0;i>0;i=t[i],V81++)  ;
pile[v[22]]=18; pile[WZ1]=jvj+77; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(18,jvj+77,V82)*/
V82=pile[WZ2]; 
if((V81!=V82)) goto l68;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(117,jvj+77,V78)*/
V78=pile[WZ2]; 
RA=V78;
l68:if((S==923)) goto l62;
if((S!=688)) goto l84;
x[jvj+118]=x[jvj+78] ;z[jvj+118]=z[jvj+78];
l55:if((x[jvj+118]<=0)) goto l84;
x[jvj+66]=s[x[jvj+118]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+118];
pile[v[22]]=498; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(498,jvj+66,jvj+67)*/
pile[v[22]]=688; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(688,jvj+67,V45)*/
V45=pile[WZ2]; 
if((V45!=1)) goto l56;
x[jvj+119]=t[x[jvj+118]];
l57:if((x[jvj+119]<=0)) goto l56;
x[jvj+68]=s[x[jvj+119]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+119];
pile[v[22]]=498; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(498,jvj+68,jvj+69)*/
if((x[jvj+67]!=x[jvj+69])) goto l58;
x[jvj+73]=0 ;z[jvj+73]=0;
pile[WZ1]=jvj+66; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(498,jvj+66,jvj+70)*/
x[jvj+120]=x[jvj+78] ;z[jvj+120]=z[jvj+78];
l59:if((x[jvj+120]<=0)) goto l70;
x[jvj+71]=s[x[jvj+120]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+120];
pile[v[22]]=498; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(498,jvj+71,jvj+72)*/
if((x[jvj+72]!=x[jvj+70])) goto l60;
pile[v[22]]=jvj+73; 
(*f[68])( );     /*PLUE0(jvj+73,jvj+71)*/
l60:x[jvj+120]=t[x[jvj+120]];
goto l59;
l1:x[jvj+5]=0 ;z[jvj+5]=0;
l2:if((x[jvj+28]>0)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+36; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=jvj+36; pile[WZ2]=107; pile[WZ3]=jvj+98; 
(*f[301])( );     /*TRI11(jvj+97,jvj+36,107,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+98,22,100,jvj+37)*/
pile[v[22]]=107; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+37,jvj+38)*/
for(i=x[jvj+38],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=V175)) goto l42;
x[R]=x[jvj+37] ;z[R]=z[jvj+37];
goto l42;
l3:x[jvj+3]=s[x[jvj+28]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+28];
pile[v[22]]=B; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[3109])( );if(v[102]) goto l4;     /*INFG0(B,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
l4:x[jvj+28]=t[x[jvj+28]];
goto l2;
l6:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+8,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=V112; pile[WZ1]=V107; 
(*f[201])( );if(v[102]) goto l7;     /*FCOEFF0(V112,V107,V101)*/
V101=pile[WZ2]; 
V100=V101;
if(V100<V99) V99=V100;
l7:x[jvj+7]=t[x[jvj+7]];
l5:if((x[jvj+7]>0)) goto l6;
if((V99==999999)) goto l42;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V99; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V99,R)*/
goto l42;
l9:x[jvj+9]=s[x[jvj+107]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+107];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+9,V126)*/
V126=pile[WZ2]; 
I=V126;
pile[v[22]]=jvj+10; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+10,I)*/
l10:x[jvj+107]=t[x[jvj+107]];
l8:if((x[jvj+107]>0)) goto l9;
for(i=x[jvj+10],V120=0;i>0;i=t[i],V120++)  ;
V117=incon;
if((V120>0)) goto l13;
l16:V117=67;
l17:V119=incon;
if((V117==68)) goto l18;
if((V117!=67)) goto l19;
if((V120<=0)) goto l19;
V119=V120;
l97:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V119; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V119,R)*/
goto l42;
l14:x[jvj+46]=t[x[jvj+46]];
l13:if((x[jvj+46]<=0)) goto l16;
x[jvj+11]=s[x[jvj+46]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+46];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+11,jvj+15)*/
if((x[jvj+15]!=484)) goto l14;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+11,jvj+12)*/
pile[v[22]]=365; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(365,jvj+12,jvj+13)*/
x[jvj+108]=x[jvj+13] ;z[jvj+108]=z[jvj+13];
l11:if((x[jvj+108]<=0)) goto l15;
x[jvj+14]=s[x[jvj+108]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+108];
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+14,V128)*/
V128=pile[WZ2]; 
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==V128) goto l14;
l12:x[jvj+108]=t[x[jvj+108]];
goto l11;
l15:V117=68;
goto l17;
l18:V130=V120+1;
V119=V130;
goto l97;
l19:V119=1;
goto l97;
l21:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+18,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=V153; pile[WZ1]=V148; 
(*f[201])( );if(v[102]) goto l22;     /*FCOEFF0(V153,V148,V144)*/
V144=pile[WZ2]; 
V143=V144;
if(V143<V142) V142=V143;
l22:x[jvj+17]=t[x[jvj+17]];
l20:if((x[jvj+17]>0)) goto l21;
if((V142==999999)) goto l27;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V142; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V142,R)*/
goto l42;
l23:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,A,K)*/
K=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,K,R)*/
goto l42;
l24:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,A,jvj+19)*/
if((x[jvj+19]==484)) goto l25;
if((x[jvj+19]==22)) goto l26;
if((x[jvj+19]!=531)) goto l27;
pile[v[22]]=111; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,A,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+23,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,A,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=484)) goto l27;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l27;     /*NDD0(jvj+24,jvj+16)*/
V142=999999;
pile[v[22]]=365; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(365,jvj+16,jvj+17)*/
goto l20;
l25:pile[v[22]]=A; pile[WZ1]=jvj+20; 
(*f[200])( );if(v[102]) goto l27;     /*NDD0(A,jvj+20)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(280,jvj+20,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,R)*/
goto l42;
l26:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,A,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+21,jvj+22)*/
if(x[jvj+22]==1215||x[jvj+22]==1273) goto l96;
l27:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,A,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==486)) goto l28;
if((x[jvj+27]==542)) goto l40;
if((x[jvj+27]==596)) goto l41;
if((x[jvj+27]!=1214)) goto l42;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(107,A,jvj+46)*/
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+107]=x[jvj+46] ;z[jvj+107]=z[jvj+46];
goto l8;
l28:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,A,jvj+28)*/
for(i=x[jvj+28],V175=0;i>0;i=t[i],V175++)  ;
if((V175==2)) goto l30;
if((V175!=3)) goto l1;
x[jvj+111]=x[jvj+28] ;z[jvj+111]=z[jvj+28];
l34:if((x[jvj+111]<=0)) goto l1;
x[jvj+32]=s[x[jvj+111]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+111];
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+32,V192)*/
V192=pile[WZ2]; 
V181=V192;
if((V181<0)) goto l35;
x[jvj+128]=x[jvj+28] ;z[jvj+128]=z[jvj+28];
l36:if((x[jvj+128]<=0)) goto l35;
x[jvj+112]=s[x[jvj+128]] ;z[jvj+112]=(x[jvj+112]<=sepcte) ? x[jvj+112] : z[jvj+128];
if((x[jvj+32]==x[jvj+112])) goto l37;
x[jvj+33]=x[jvj+112] ;z[jvj+33]=z[jvj+112];
x[jvj+113]=x[jvj+28] ;z[jvj+113]=z[jvj+28];
l38:if((x[jvj+113]<=0)) goto l37;
x[jvj+34]=s[x[jvj+113]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+113];
if((x[jvj+32]==x[jvj+34])) goto l39;
if((x[jvj+112]==x[jvj+34])) goto l39;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+33,jvj+34,jvj+35)*/
if((x[jvj+35]==135)) goto l96;
l39:x[jvj+113]=t[x[jvj+113]];
goto l38;
l30:x[jvj+127]=x[jvj+28] ;z[jvj+127]=z[jvj+28];
l29:if((x[jvj+127]<=0)) goto l1;
x[jvj+109]=s[x[jvj+127]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+127];
x[jvj+29]=x[jvj+109] ;z[jvj+29]=z[jvj+109];
x[jvj+110]=x[jvj+28] ;z[jvj+110]=z[jvj+28];
l31:if((x[jvj+110]>0)) goto l32;
x[jvj+127]=t[x[jvj+127]];
goto l29;
l32:x[jvj+30]=s[x[jvj+110]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+110];
if((x[jvj+109]==x[jvj+30])) goto l33;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[760])( );     /*MEMEX0(jvj+29,jvj+30,jvj+31)*/
if((x[jvj+31]==135)) goto l96;
l33:x[jvj+110]=t[x[jvj+110]];
goto l31;
l35:x[jvj+111]=t[x[jvj+111]];
goto l34;
l37:x[jvj+128]=t[x[jvj+128]];
goto l36;
l40:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,A,jvj+39)*/
pile[v[22]]=163; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(163,jvj+39,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,A,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=484)) goto l42;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+6; 
(*f[200])( );if(v[102]) goto l42;     /*NDD0(jvj+40,jvj+6)*/
V99=999999;
pile[v[22]]=365; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(365,jvj+6,jvj+7)*/
goto l5;
l41:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,A,jvj+42)*/
pile[v[22]]=B; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[3109])( );if(v[102]) goto l42;     /*INFG0(B,jvj+42,jvj+43)*/
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+43,V156)*/
V156=pile[WZ2]; 
if((V156<=0)) goto l42;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,A,jvj+44)*/
pile[v[22]]=B; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[3109])( );if(v[102]) goto l42;     /*INFG0(B,jvj+44,jvj+45)*/
pile[v[22]]=130; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+45,YY)*/
YY=pile[WZ2]; 
if((YY<0)) goto l42;
pile[v[22]]=YY; pile[WZ1]=V156; 
(*f[1006])( );if(v[102]) goto l42;     /*POWER0(YY,V156,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V161; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V161,R)*/
goto l42;
l44:x[jvj+50]=s[x[jvj+114]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+114];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[1205])( );     /*LINELEM0(jvj+50,jvj+51)*/
if((x[jvj+51]==135)) goto l46;
l45:x[jvj+114]=t[x[jvj+114]];
goto l43;
l46:pile[v[22]]=jvj+50; pile[WZ1]=jvj+52; 
(*f[887])( );     /*VARND0(jvj+50,jvj+52)*/
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==x[B]) goto l45;
pile[v[22]]=jvj+53; pile[WZ1]=jvj+50; 
(*f[68])( );     /*PLUE0(jvj+53,jvj+50)*/
goto l45;
l48:x[jvj+54]=s[x[jvj+115]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+115];
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; 
(*f[887])( );     /*VARND0(jvj+54,jvj+55)*/
x[jvj+116]=x[jvj+55] ;z[jvj+116]=z[jvj+55];
l49:if((x[jvj+116]>0)) goto l50;
x[jvj+115]=t[x[jvj+115]];
goto l47;
l50:x[jvj+57]=s[x[jvj+116]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+116];
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[68])( );     /*PLUE0(jvj+56,jvj+57)*/
x[jvj+116]=t[x[jvj+116]];
goto l49;
l52:x[jvj+58]=s[x[jvj+117]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+117];
pile[v[22]]=B; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[3109])( );if(v[102]) goto l53;     /*INFG0(B,jvj+58,jvj+59)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+59; 
(*f[68])( );     /*PLUE0(jvj+60,jvj+59)*/
l53:x[jvj+117]=t[x[jvj+117]];
goto l51;
l56:x[jvj+118]=t[x[jvj+118]];
goto l55;
l58:x[jvj+119]=t[x[jvj+119]];
goto l57;
l62:x[jvj+121]=x[jvj+78] ;z[jvj+121]=z[jvj+78];
l61:if((x[jvj+121]<=0)) goto l84;
x[jvj+74]=s[x[jvj+121]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+121];
pile[v[22]]=921; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(921,jvj+74,jvj+75)*/
V220=t[x[jvj+121]];
l63:if((V220>0)) goto l64;
x[jvj+121]=t[x[jvj+121]];
goto l61;
l64:V51=s[V220];
for(a=x[jvj+75];a>0;a=t[a]) if(s[a]==V51) goto l69;
V220=t[V220];
goto l63;
l66:x[jvj+76]=s[x[jvj+122]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+122];
pile[v[22]]=jvj+76; 
(*f[1161])( );if(v[102]) goto l67;     /*INF0(jvj+76,V80)*/
V80=pile[WZ1]; 
pile[v[22]]=jvj+77; pile[WZ1]=117; pile[WZ2]=V80; 
(*f[186])( );     /*BTC0(jvj+77,117,V80)*/
pile[WZ1]=18; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+77,18,1)*/
l67:x[jvj+122]=t[x[jvj+122]];
goto l65;
l69:pile[v[22]]=jvj+78; pile[WZ1]=jvj+74; pile[WZ2]=jvj+79; 
(*f[3992])( );     /*CONSTREX0(jvj+78,jvj+74,jvj+79)*/
l71:x[jvj+82]=0 ;z[jvj+82]=0;
x[jvj+123]=x[jvj+88] ;z[jvj+123]=z[jvj+88];
l74:if((x[jvj+123]>0)) goto l75;
for(i=x[jvj+79],V33=0;i>0;i=t[i],V33++)  ;
pile[v[22]]=jvj+79; pile[WZ1]=V33; pile[WZ2]=280; pile[WZ3]=jvj+87; 
(*f[3989])( );if(v[102]) goto l84;     /*SETVAL0(jvj+79,V33,280,jvj+87)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+79; pile[WZ2]=V33; pile[WZ3]=jvj+89; 
(*f[3990])( );     /*ENSCOEFF0(jvj+88,jvj+79,V33,jvj+89)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+89; 
(*f[3991])( );if(v[102]) goto l84;     /*PRODBAGS0(jvj+87,jvj+89,RS)*/
RS=pile[WZ2]; 
x[jvj+85]=0 ;z[jvj+85]=0;
x[jvj+124]=x[jvj+82] ;z[jvj+124]=z[jvj+82];
l77:if((x[jvj+124]>0)) goto l78;
V31=incon;
V37=0;
if((x[jvj+82]==V37)) goto l79;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=111; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(jvj+104,111,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+85; pile[WZ2]=107; pile[WZ3]=jvj+106; 
(*f[301])( );     /*TRI11(jvj+105,jvj+85,107,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+106,22,100,jvj+86)*/
pile[v[22]]=jvj+86; 
(*f[1161])( );if(v[102]) goto l84;     /*INF0(jvj+86,V31)*/
V31=pile[WZ1]; 
l80:V38=V31+RS;
RB=V38;
l84:if(x[R]==incon) goto l85;
l95:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l70:x[jvj+79]=x[jvj+73] ;z[jvj+79]=z[jvj+73];
goto l71;
l73:L=s[V222];
for(a=x[jvj+81];a>0;a=t[a]) if(s[a]==L) goto l76;
V222=t[V222];
l72:if((V222>0)) goto l73;
pile[v[22]]=jvj+82; pile[WZ1]=jvj+80; 
(*f[68])( );     /*PLUE0(jvj+82,jvj+80)*/
l76:x[jvj+123]=t[x[jvj+123]];
goto l74;
l75:x[jvj+80]=s[x[jvj+123]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+123];
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; 
(*f[887])( );     /*VARND0(jvj+80,jvj+81)*/
V222=x[jvj+79];
goto l72;
l78:x[jvj+83]=s[x[jvj+124]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+124];
pile[v[22]]=jvj+83; pile[WZ1]=jvj+84; 
(*f[255])( );     /*COPEXP0(jvj+83,jvj+84)*/
pile[v[22]]=jvj+85; 
(*f[68])( );     /*PLUE0(jvj+85,jvj+84)*/
x[jvj+124]=t[x[jvj+124]];
goto l77;
l79:V31=0;
goto l80;
l82:x[jvj+90]=s[x[jvj+125]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+125];
for(a=x[jvj+88];a>0;a=t[a]) if(s[a]==x[jvj+90]) goto l83;
pile[v[22]]=B; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[3109])( );if(v[102]) goto l83;     /*INFG0(B,jvj+90,jvj+91)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+91; 
(*f[68])( );     /*PLUE0(jvj+92,jvj+91)*/
l83:x[jvj+125]=t[x[jvj+125]];
l81:if((x[jvj+125]>0)) goto l82;
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; 
(*f[299])( );     /*COPEL0(jvj+92,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+102)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RB; pile[WZ4]=jvj+103; 
(*f[192])( );     /*QUADRI4(100,41,130,RB,jvj+103)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+102; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+102,jvj+94)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+93,jvj+94,107)*/
pile[v[22]]=jvj+94; pile[WZ1]=107; pile[WZ2]=jvj+103; 
(*f[36])( );     /*PLUSC0(jvj+94,107,jvj+103)*/
pile[v[22]]=107; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(107,jvj+94,jvj+95)*/
for(i=x[jvj+95],V59=0;i>0;i=t[i],V59++)  ;
if((V59!=V61)) goto l93;
x[R]=x[jvj+94] ;z[R]=z[jvj+94];
goto l95;
l85:if(RB!=incon) goto l86;
l93:if(x[jvj+126]!=incon) goto l89;
l94:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l86:if(RA!=incon) goto l87;
goto l93;
l87:if(x[jvj+126]!=incon) goto l88;
l90:if(x[jvj+49]!=incon) goto l91;
goto l93;
l88:if((RA>=RB)) goto l89;
goto l90;
l89:x[R]=x[jvj+126] ;z[R]=z[jvj+126];
goto l95;
l91:if(x[jvj+88]!=incon) goto l92;
goto l93;
l92:if((RA>=RB)) goto l93;
for(i=x[jvj+49],V63=0;i>0;i=t[i],V63++)  ;
for(i=x[jvj+88],V64=0;i>0;i=t[i],V64++)  ;
V62=V63-V64;
V61=V62+1;
x[jvj+92]=0 ;z[jvj+92]=0;
x[jvj+125]=x[jvj+49] ;z[jvj+125]=z[jvj+49];
goto l81;
l96:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l42;
}
