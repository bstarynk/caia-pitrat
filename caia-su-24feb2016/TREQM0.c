#include "dx.h"
void TREQM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V46=0,V45=0,V48=0,V47=0,K=0,V9=0,V18=0,V24=0,I=0,V28=0,V11=0,V17=0,F=0,V65=0,L=0,V68=0,V69=0,V70=0,V73=0,V72=0,V76=0,V75=0,V79=0,V78=0;
int A,P,BT,B;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=11452;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1147&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; P=pile[v[22]+1]; BT=pile[v[22]+2]; B=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+33]=x[BT] ;z[jvj+33]=z[BT];
x[jvj+34]=x[B] ;z[jvj+34]=z[B];
V65=P;
x[jvj+2]=x[A] ;z[jvj+2]=z[A];
l2:if((V65<=0)) goto l4;
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+2,K)*/
K=pile[WZ2]; 
V68=K%V65;
V69=V68;
if((V69<0)) goto l18;
L=V69;
l3:if((K==L)) goto l4;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+32)*/
if((V76=w[x[jvj+33]][1])==incon) goto l4;
if((V76!=23)) goto l20;
V75=x[jvj+2];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=V75; 
(*f[134])( );     /*OTA0(jvj+33,jvj+34,V75)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+34,jvj+33,jvj+32)*/
l4:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+2,jvj+5)*/
if((x[jvj+5]==484)) goto l1;
if((x[jvj+5]!=22)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+2,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+6,jvj+7)*/
if(x[jvj+7]==63||x[jvj+7]==990||x[jvj+7]==596||x[jvj+7]==636) goto l17;
l5:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+2,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=625)) goto l10;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+10; 
(*f[1445])( );     /*CODEPUI0(jvj+2,jvj+10)*/
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=625)) goto l10;
pile[v[22]]=160; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,jvj+10,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+13,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+10,jvj+14)*/
pile[v[22]]=103; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+10,jvj+15)*/
if((V79=w[x[jvj+33]][1])==incon) goto l6;
if((V79!=23)) goto l21;
V78=x[jvj+2];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=V78; 
(*f[134])( );     /*OTA0(jvj+33,jvj+34,V78)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+34,jvj+33,jvj+10)*/
l6:pile[v[22]]=jvj+14; pile[WZ1]=V9; pile[WZ2]=102; pile[WZ3]=jvj+10; 
(*f[1147])( );     /*TREQM0(jvj+14,V9,102,jvj+10)*/
x[jvj+2]=x[jvj+15] ;z[jvj+2]=z[jvj+15];
V65=V9;
x[jvj+34]=x[jvj+10] ;z[jvj+34]=z[jvj+10];
x[jvj+33]=103 ;z[jvj+33]=103;
goto l2;
l1:if((V65<=0)) goto l17;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+2,jvj+3)*/
pile[v[22]]=1474; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1474,jvj+3,jvj+4)*/
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+4,V46)*/
V46=pile[WZ2]; 
V45=V46%V65;
if((V45!=0)) goto l17;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+4,V48)*/
V48=pile[WZ2]; 
V47=V48%V65;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V47; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V47,jvj+31)*/
if((V73=w[x[jvj+33]][1])==incon) goto l17;
if((V73!=23)) goto l19;
V72=x[jvj+2];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=V72; 
(*f[134])( );     /*OTA0(jvj+33,jvj+34,V72)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+34,jvj+33,jvj+31)*/
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l7:if((F==1356)) goto l16;
l8:pile[v[22]]=jvj+22; pile[WZ1]=V65; pile[WZ2]=jvj+23; pile[WZ3]=jvj+2; 
(*f[1147])( );     /*TREQM0(jvj+22,V65,jvj+23,jvj+2)*/
l16:x[jvj+37]=t[x[jvj+37]];
l15:if((x[jvj+37]<=0)) goto l17;
x[jvj+23]=s[x[jvj+37]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+37];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+2; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+23,jvj+2,jvj+30)*/
x[jvj+22]=x[jvj+30] ;z[jvj+22]=z[jvj+30];
if((x[jvj+28]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+2,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+20,jvj+21)*/
F=x[jvj+21];
if(F!=625&&F!=1356) goto l8;
if((x[jvj+23]==103)) goto l7;
if((x[jvj+23]==160)) goto l16;
if((x[jvj+23]!=102)) goto l8;
if((x[jvj+21]!=1356)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+2,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+18,V24)*/
V24=pile[WZ2]; 
I=V24;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,jvj+2,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+19,V28)*/
V28=pile[WZ2]; 
V11=V28;
V17=I%V11;
if((V17!=0)) goto l8;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+2,jvj+16)*/
;
if((V18!=135)) goto l16;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1446])( );     /*NONUL0(jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l8;
goto l16;
l10:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+2,jvj+28)*/
x[jvj+36]=w[x[jvj+28]][8];
l11:if((x[jvj+36]>0)) goto l12;
x[jvj+37]=w[x[jvj+28]][9];
goto l15;
l12:x[jvj+24]=s[x[jvj+36]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+36];
x[jvj+26]=0 ;z[jvj+26]=0;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(jvj+24,jvj+2,jvj+25)*/
x[jvj+35]=x[jvj+25] ;z[jvj+35]=z[jvj+25];
l9:if((x[jvj+35]<=0)) goto l13;
x[jvj+27]=s[x[jvj+35]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+35];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+27)*/
x[jvj+35]=t[x[jvj+35]];
goto l9;
l14:x[jvj+29]=s[x[jvj+26]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+26];
pile[v[22]]=jvj+29; pile[WZ1]=V65; pile[WZ2]=jvj+24; pile[WZ3]=jvj+2; 
(*f[1147])( );     /*TREQM0(jvj+29,V65,jvj+24,jvj+2)*/
x[jvj+26]=t[x[jvj+26]];
l13:if((x[jvj+26]>0)) goto l14;
x[jvj+36]=t[x[jvj+36]];
goto l11;
l18:V70=V69+V65;
L=V70;
goto l3;
l19:pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; pile[WZ2]=jvj+31; 
(*f[35])( );     /*CHGC1(jvj+34,jvj+33,jvj+31)*/
goto l17;
l20:pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+34,jvj+33,jvj+32)*/
goto l4;
l21:pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+34,jvj+33,jvj+10)*/
goto l6;
}
