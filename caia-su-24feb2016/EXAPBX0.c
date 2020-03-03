#include "dx.h"
void EXAPBX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,NX=0,V9=0,NRR=0,JJ=0,V4=0,V10=0,V54=0,V22=0,V29=0,V28=0,V30=0,W=0,V13=0,V31=0,V=0,V16=0,V15=0,V41=0,VV=0,V42=0,V17=0,V45=0,V44=0,V34=0,V49=0,V50=0,V51=0,V33=0,V46=0,V47=0,V48=0,V52=0,V66=0,V65=0;
int UR,EC,E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=11188;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==510&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; EC=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR==84)) goto l1;
if((UR==85)) goto l5;
if((UR!=68)) goto l32;
pile[v[22]]=3; 
(*f[126])( );     /*LND2(3,V2,JJ)*/
V2=pile[WZ1]; JJ=pile[WZ2]; 
V4=JJ+1;
pile[v[22]]=V4; 
(*f[135])( );     /*LND3(V4,NX)*/
NX=pile[WZ1]; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=jvj+2; pile[WZ1]=V2; 
(*f[207])( );     /*PLUE2(jvj+2,V2)*/
pile[WZ1]=NX; 
(*f[207])( );     /*PLUE2(jvj+2,NX)*/
x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
l6:x[jvj+9]=0 ;z[jvj+9]=0;
x[jvj+7]=d[55];z[jvj+7]=0;
V54=x[jvj+6];
l7:if((V54>0)) goto l8;
pile[v[22]]=250; pile[WZ1]=250; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(250,250,jvj+22)*/
x[jvj+37]=x[E] ;z[jvj+37]=z[E];
l19:if((x[jvj+37]>0)) goto l20;
if((UR==85)) goto l31;
for(i=x[E],V33=0;i>0;i=t[i],V33++)  ;
if((V33<=1)) goto l31;
pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(20,0,43,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=18; 
(*f[42])( );     /*SRA1(135,V46,18,V47)*/
V47=pile[WZ3]; 
pile[WZ1]=V47; pile[WZ2]=547; 
(*f[42])( );     /*SRA1(135,V47,547,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; 
(*f[40])( );     /*SLG0(V48)*/
x[jvj+39]=x[jvj+9] ;z[jvj+39]=z[jvj+9];
l24:if((x[jvj+39]>0)) goto l25;
x[jvj+40]=x[jvj+9] ;z[jvj+40]=z[jvj+9];
l26:if((x[jvj+40]<=0)) goto l31;
x[jvj+24]=s[x[jvj+40]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+40];
pile[v[22]]=218; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(218,jvj+24,jvj+25)*/
pile[v[22]]=493; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(493,jvj+25,V34)*/
V34=pile[WZ2]; 
if((V34<=0)) goto l27;
pile[v[22]]=jvj+24; pile[WZ1]=EC; pile[WZ2]=683; pile[WZ3]=jvj+26; 
(*f[849])( );     /*EVCOND1(jvj+24,EC,683,jvj+26)*/
if((x[jvj+26]==135)) goto l30;
l27:x[jvj+40]=t[x[jvj+40]];
goto l26;
l1:x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(645,597,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
goto l6;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+4,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+5,V9)*/
l4:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:pile[v[22]]=3; 
(*f[135])( );     /*LND3(3,NRR)*/
NRR=pile[WZ1]; 
pile[v[22]]=41; pile[WZ1]=NRR; pile[WZ2]=jvj+6; 
(*f[445])( );     /*TRI15(41,NRR,jvj+6)*/
goto l6;
l8:V10=s[V54];
pile[v[22]]=V10; pile[WZ1]=683; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V10,683,jvj+30)*/
pile[v[22]]=218; pile[WZ1]=jvj+30; pile[WZ2]=683; pile[WZ3]=V10; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(218,jvj+30,683,V10,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+8,jvj+9)*/
V54=t[V54];
goto l7;
l12:pile[v[22]]=1078; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1078,jvj+12,jvj+13)*/
pile[v[22]]=860; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(860,jvj+13,jvj+14)*/
if((x[jvj+14]!=530)) goto l11;
pile[v[22]]=jvj+12; pile[WZ1]=EC; pile[WZ2]=683; pile[WZ3]=jvj+15; 
(*f[849])( );     /*EVCOND1(jvj+12,EC,683,jvj+15)*/
if((x[jvj+15]==135)) goto l22;
l11:x[jvj+35]=t[x[jvj+35]];
l10:if((x[jvj+35]<=0)) goto l21;
x[jvj+12]=s[x[jvj+35]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+35];
pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+12,V22)*/
V22=pile[WZ2]; 
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V22) goto l12;
goto l11;
l14:x[jvj+36]=t[x[jvj+36]];
l13:if((x[jvj+36]<=0)) goto l15;
x[jvj+20]=s[x[jvj+36]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+36];
pile[v[22]]=163; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+20,V28)*/
V28=pile[WZ2]; 
if((V28!=V29)) goto l14;
pile[v[22]]=897; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(897,jvj+20,V30)*/
V30=pile[WZ2]; 
W=V30;
V13=W;
l9:pile[v[22]]=944; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(944,jvj+10,jvj+11)*/
x[jvj+35]=x[jvj+11] ;z[jvj+35]=z[jvj+11];
goto l10;
l15:V13=((-7141));
goto l9;
l16:V15=V16;
l17:V17=incon;
if((VV!=(-7141))) goto l18;
V17=V15;
l23:pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+6; pile[WZ2]=jvj+22; pile[WZ3]=jvj+16; 
(*f[852])( );     /*SORPB0(jvj+9,jvj+6,jvj+22,jvj+16)*/
l21:x[jvj+37]=t[x[jvj+37]];
goto l19;
l18:pile[v[22]]=V15; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V15,40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=VV; pile[WZ1]=V41; 
(*f[64])( );     /*SRA2(VV,V41,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V42,41,V17)*/
V17=pile[WZ2]; 
goto l23;
l20:x[jvj+16]=s[x[jvj+37]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+37];
pile[v[22]]=109; pile[WZ1]=jvj+16; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(109,jvj+16,jvj+31)*/
pile[v[22]]=983; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(983,jvj+31,jvj+32)*/
pile[v[22]]=878; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(878,jvj+32,jvj+33)*/
l33:if((x[jvj+33]<=0)) goto l21;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(163,jvj+34,V66)*/
V66=pile[WZ2]; 
pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(163,jvj+16,V65)*/
V65=pile[WZ2]; 
if((V66==V65)) goto l34;
x[jvj+33]=t[x[jvj+33]];
goto l33;
l22:V45=x[jvj+21];
VV=V13;
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V45; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,V45,V44,V16)*/
V16=pile[WZ3]; 
V15=incon;
pile[v[22]]=163; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+16,V31)*/
V31=pile[WZ2]; 
V=V31;
pile[v[22]]=V16; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V16,V,V15)*/
V15=pile[WZ2]; 
goto l17;
l25:x[jvj+23]=s[x[jvj+39]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+39];
pile[v[22]]=jvj+23; 
(*f[853])( );     /*SORESSAI0(jvj+23)*/
x[jvj+39]=t[x[jvj+39]];
goto l24;
l30:pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(20,0,43,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V49; pile[WZ2]=18; 
(*f[42])( );     /*SRA1(135,V49,18,V50)*/
V50=pile[WZ3]; 
pile[WZ1]=V50; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V50,493,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
l28:if((x[jvj+9]<=0)) goto l31;
x[jvj+27]=s[x[jvj+9]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+9];
pile[v[22]]=218; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(218,jvj+27,jvj+28)*/
pile[v[22]]=jvj+28; 
(*f[853])( );     /*SORESSAI0(jvj+28)*/
l29:x[jvj+9]=t[x[jvj+9]];
goto l28;
l31:pile[v[22]]=1051; pile[WZ1]=jvj+22; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1051,jvj+22,jvj+29)*/
if((x[jvj+29]==0)) goto l32;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1051; 
(*f[42])( );     /*SRA1(135,0,1051,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
pile[v[22]]=jvj+29; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+29,0,2)*/
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l34:x[jvj+38]=x[jvj+34] ;z[jvj+38]=z[jvj+34];
pile[v[22]]=109; pile[WZ1]=jvj+16; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(109,jvj+16,jvj+21)*/
x[jvj+10]=x[jvj+38] ;z[jvj+10]=z[jvj+38];
V13=incon;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+16,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+10; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(498,jvj+10,jvj+17)*/
pile[v[22]]=983; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(983,jvj+17,jvj+18)*/
pile[v[22]]=878; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(878,jvj+18,jvj+19)*/
x[jvj+36]=x[jvj+19] ;z[jvj+36]=z[jvj+19];
goto l13;
}
