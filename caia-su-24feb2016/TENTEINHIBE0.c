#include "dx.h"
void TENTEINHIBE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V22=0,V9=0,V8=0,V16=0,UU=0,V2=0,V17=0,II=0,V3=0,V19=0,V20=0,V13=0,V11=0,V12=0,V15=0,U=0,I=0,V18=0,V46=0,V45=0,V44=0,V29=0,V43=0,V42=0,V41=0,L=0,V49=0,V32=0,V31=0,V34=0,V33=0,V30=0,V48=0,V47=0,V58=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V67=0,V68=0,V69=0,V70=0,V71=0,V72=0,V73=0,V74=0,V75=0,V76=0,V88=0,V82=0,V83=0,V87=0,V79=0,V89=0;
int C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=10742;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1253&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[1526])( );     /*STUTIREG0()*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=510; pile[WZ3]=1; pile[WZ4]=jvj+13; 
(*f[391])( );     /*QUADRI10(117,0,510,1,jvj+13)*/
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(683,jvj+2,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(645,597,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l20;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+4,V22)*/
V22=pile[WZ2]; 
if((V22!=V23)) goto l2;
pile[v[22]]=265; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(265,jvj+4,jvj+5)*/
x[jvj+31]=x[jvj+5] ;z[jvj+31]=z[jvj+5];
l3:if((x[jvj+31]<=0)) goto l2;
x[jvj+6]=s[x[jvj+31]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+31];
pile[v[22]]=158; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+6,jvj+7)*/
if((x[jvj+7]!=696)) goto l4;
x[jvj+15]=x[jvj+6] ;z[jvj+15]=z[jvj+6];
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1484,854,V13)*/
V13=pile[WZ2]; 
V11=sepfacts+1;
V12=sepfacts+V13;
l10:if((V11>V12)) goto l20;
V15=r[V11];
if((V15!=1)) goto l11;
x[jvj+9]=V11 ;z[jvj+9]=(V11<=sepcte) ? V11 : 0;
pile[v[22]]=1033; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1033,jvj+9,jvj+14)*/
if((x[jvj+14]!=68)) goto l11;
x[jvj+8]=vo[12];z[jvj+8]=vz[12];
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=983; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(983,jvj+9,jvj+10)*/
pile[v[22]]=1001; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1001,jvj+10,jvj+11)*/
x[jvj+32]=x[jvj+11] ;z[jvj+32]=z[jvj+11];
l5:if((x[jvj+32]<=0)) goto l11;
x[jvj+12]=s[x[jvj+32]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+32];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+12,V8)*/
V8=pile[WZ2]; 
if((V8!=V9)) goto l6;
V2=incon;
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(737,jvj+12,V16)*/
V16=pile[WZ2]; 
UU=V16;
V2=UU;
l8:V3=incon;
pile[v[22]]=846; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(846,jvj+12,V17)*/
V17=pile[WZ2]; 
II=V17;
V3=II;
l12:pile[v[22]]=jvj+9; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1527])( );     /*PRESENTATOME0(jvj+9,jvj+15,jvj+16)*/
if((x[jvj+16]==67)) goto l13;
l11:V11++;
goto l10;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+31]=t[x[jvj+31]];
goto l3;
l6:x[jvj+32]=t[x[jvj+32]];
goto l5;
l7:V2=0;
goto l8;
l9:V3=0;
goto l12;
l13:U=V2;
I=V3;
V18=U+I;
V19=100*U;
if((I<=V19)) goto l14;
V20=I-U;
pile[v[22]]=jvj+13; pile[WZ1]=117; pile[WZ2]=V20; 
(*f[186])( );     /*BTC0(jvj+13,117,V20)*/
pile[WZ1]=901; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+13,901,jvj+9)*/
l14:pile[v[22]]=jvj+13; pile[WZ1]=510; pile[WZ2]=V18; 
(*f[186])( );     /*BTC0(jvj+13,510,V18)*/
goto l11;
l15:V43=150*L;
V42=V43/100;
V29=V42;
l19:pile[v[22]]=jvj+17; pile[WZ1]=1005; pile[WZ2]=V29; 
(*f[43])( );     /*CHGC2(jvj+17,1005,V29)*/
l18:x[jvj+33]=t[x[jvj+33]];
l16:if((x[jvj+33]>0)) goto l17;
pile[v[22]]=jvj+23; pile[WZ1]=860; pile[WZ2]=901; 
(*f[35])( );     /*CHGC1(jvj+23,860,901)*/
pile[WZ1]=901; pile[WZ2]=jvj+19; 
(*f[34])( );     /*CHGC0(jvj+23,901,jvj+19)*/
pile[WZ1]=1032; pile[WZ2]=jvj+22; 
(*f[34])( );     /*CHGC0(jvj+23,1032,jvj+22)*/
pile[WZ1]=1039; pile[WZ2]=V47; 
(*f[43])( );     /*CHGC2(jvj+23,1039,V47)*/
pile[WZ1]=1248; pile[WZ2]=C; 
(*f[35])( );     /*CHGC1(jvj+23,1248,C)*/
pile[v[22]]=995; pile[WZ1]=145; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(995,145,jvj+25)*/
pile[v[22]]=117; pile[WZ1]=V30; pile[WZ2]=122; pile[WZ3]=1005; pile[WZ4]=jvj+25; pile[WZ5]=jvj+24; 
(*f[725])( );     /*QUADRI14(117,V30,122,1005,jvj+25,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=735; pile[WZ2]=jvj+24; 
(*f[35])( );     /*CHGC1(jvj+23,735,jvj+24)*/
pile[WZ1]=1052; 
(*f[1528])( );     /*ANACREUSE1(jvj+23,1052)*/
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l17:x[jvj+17]=s[x[jvj+33]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+33];
pile[v[22]]=1005; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1005,jvj+17,V41)*/
V41=pile[WZ2]; 
L=V41;
V29=incon;
if((L>1)) goto l15;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(936,jvj+17,V46)*/
V46=pile[WZ2]; 
V45=V46/6;
V44=V45+1;
V29=V44;
goto l19;
l20:x[jvj+18]=vo[12];z[jvj+18]=vz[12];
pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+18,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1484,854,V88)*/
V88=pile[WZ2]; 
V82=sepfacts+1;
V83=sepfacts+V88;
l23:if((V82>V83)) goto l21;
V87=r[V82];
if((V87!=1)) goto l26;
x[jvj+26]=V82 ;z[jvj+26]=(V82<=sepcte) ? V82 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(983,jvj+26,jvj+27)*/
x[jvj+28]=x[jvj+27] ;z[jvj+28]=z[jvj+27];
pile[v[22]]=1001; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1001,jvj+28,jvj+29)*/
x[jvj+34]=x[jvj+29] ;z[jvj+34]=z[jvj+29];
l24:if((x[jvj+34]<=0)) goto l26;
x[jvj+30]=s[x[jvj+34]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+34];
pile[v[22]]=117; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+30,V79)*/
V79=pile[WZ2]; 
if((V79!=V49)) goto l25;
V89=x[jvj+30];
pile[v[22]]=1001; pile[WZ1]=jvj+28; pile[WZ2]=V89; 
(*f[134])( );     /*OTA0(1001,jvj+28,V89)*/
l25:x[jvj+34]=t[x[jvj+34]];
goto l24;
l21:pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,jvj+13,V32)*/
V32=pile[WZ2]; 
V31=V32*10;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(510,jvj+13,V34)*/
V34=pile[WZ2]; 
V33=V34*3;
if((V31<V33)) goto l22;
pile[v[22]]=901; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(901,jvj+13,jvj+19)*/
if((x[jvj+19]==0)) goto l22;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+23; 
(*f[378])( );     /*CPI0(jvj+18,jvj+23)*/
V58=x[jvj+23];
pile[v[22]]=jvj+23; pile[WZ1]=0; pile[WZ2]=V58; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+23,0,V58,117,V59,V60)*/
V59=pile[WZ4]; V60=pile[WZ5]; 
pile[WZ1]=V60; pile[WZ2]=V59; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+23,V60,V59,978,V61,V62)*/
V61=pile[WZ4]; V62=pile[WZ5]; 
pile[WZ1]=V62; pile[WZ2]=V61; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+23,V62,V61,999,V63,V64)*/
V63=pile[WZ4]; V64=pile[WZ5]; 
pile[WZ1]=V64; pile[WZ2]=V63; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+23,V64,V63,1002,V65,V66)*/
V65=pile[WZ4]; V66=pile[WZ5]; 
pile[WZ1]=V66; pile[WZ2]=V65; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+23,V66,V65,1025,V67,V68)*/
V67=pile[WZ4]; V68=pile[WZ5]; 
pile[WZ1]=V68; pile[WZ2]=V67; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+23,V68,V67,1042,V69,V70)*/
V69=pile[WZ4]; V70=pile[WZ5]; 
pile[WZ1]=V70; pile[WZ2]=V69; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+23,V70,V69,1080,V71,V72)*/
V71=pile[WZ4]; V72=pile[WZ5]; 
pile[WZ1]=V72; pile[WZ2]=V71; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+23,V72,V71,1104,V73,V74)*/
V73=pile[WZ4]; V74=pile[WZ5]; 
pile[WZ1]=V74; pile[WZ2]=V73; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+23,V74,V73,1121,V75,V76)*/
V75=pile[WZ4]; V76=pile[WZ5]; 
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=jvj+20; 
(*f[948])( );     /*PCTREUSSI0(jvj+20,V30)*/
V30=pile[WZ1]; 
V48=V31*10;
V47=V48/V33;
pile[v[22]]=1034; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1034,jvj+20,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[195])( );     /*CPE0(jvj+21,jvj+22)*/
x[jvj+33]=x[jvj+22] ;z[jvj+33]=z[jvj+22];
goto l16;
l26:V82++;
goto l23;
}
