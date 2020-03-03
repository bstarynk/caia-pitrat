#include "dx.h"
void ETATCREE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V9=0,V10=0,V11=0,V13=0,V14=0,V15=0,V16=0,V7=0,V20=0,V22=0,V24=0,V26=0,V28=0,V29=0,V31=0,V32=0,V34=0,V35=0,V6=0,V18=0,V39=0,V41=0,V38=0,V40=0,V54=0,V48=0,V49=0,V55=0,V73=0,V67=0,V68=0,V74=0;
int P;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=10842;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==524&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(250,158,jvj+4)*/
V1=vv[5];
if((V1>0)) goto l1;
if((V1!=0)) goto l5;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(457,324,jvj+2)*/
l2:if((x[jvj+2]<=0)) goto l5;
x[jvj+20]=s[x[jvj+2]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+2];
V73=vv[54];
pile[v[22]]=1054; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1054,jvj+20,jvj+21)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l2;
l1:x[jvj+8]=V1 ;z[jvj+8]=(V1<=sepcte) ? V1 : 0;
V54=vv[54];
pile[v[22]]=1054; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1054,jvj+8,jvj+9)*/
l5:if((x[P]!=68)) goto l9;
pile[v[22]]=159; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,jvj+4,jvj+5)*/
l6:if((x[jvj+5]<=0)) goto l9;
x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+3,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=449; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(449,jvj+3,jvj+6)*/
pile[v[22]]=109; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+3,jvj+7)*/
V39=x[jvj+7];
V41=x[jvj+6];
pile[v[22]]=20; pile[WZ1]=V39; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V39,0,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=V18; 
(*f[37])( );     /*SRA0(V38,V18,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V41; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(20,V41,V40,V7)*/
V7=pile[WZ3]; 
V6=incon;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+3,V9)*/
V9=pile[WZ2]; 
if((V9<=0)) goto l4;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(493,jvj+3,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(876,jvj+3,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=610; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(610,jvj+3,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(609,jvj+3,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(515,jvj+3,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+3,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V16; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,V16,V7,V20)*/
V20=pile[WZ3]; 
pile[WZ1]=V15; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(41,V15,V20,V22)*/
V22=pile[WZ3]; 
pile[WZ1]=V14; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(41,V14,V22,V24)*/
V24=pile[WZ3]; 
pile[WZ1]=V13; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,V13,V24,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V26,301,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,V9,V28,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V29; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V29,876,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,V11,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V32,493,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V34,58,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=V10; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V35,V10,41,V6)*/
V6=pile[WZ3]; 
l8:pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
l7:x[jvj+5]=t[x[jvj+5]];
goto l6;
l4:V6=V7;
goto l8;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l14:x[jvj+13]=s[x[jvj+32]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+32];
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+13,V48)*/
V48=pile[WZ2]; 
V49=V48;
if((V54==0)) goto l17;
V55=V54;
if((V49==V55)) goto l17;
l15:x[jvj+32]=t[x[jvj+32]];
l13:if((x[jvj+32]>0)) goto l14;
x[jvj+12]=t[x[jvj+12]];
l12:if((x[jvj+12]<=0)) goto l5;
x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
x[jvj+32]=x[jvj+10] ;z[jvj+32]=z[jvj+10];
goto l13;
l16:pile[v[22]]=V49; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[764])( );     /*ETATCREF0(V49,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=109; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+15,109,jvj+8)*/
pile[WZ1]=449; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+15,449,jvj+14)*/
pile[WZ1]=163; pile[WZ2]=V49; 
(*f[177])( );     /*CHGC4(jvj+15,163,V49)*/
pile[v[22]]=jvj+4; pile[WZ1]=159; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+4,159,jvj+15)*/
goto l15;
l17:pile[v[22]]=896; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(896,jvj+13,jvj+16)*/
if((x[jvj+16]==0)) goto l16;
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l16;
goto l15;
l18:x[jvj+11]=x[jvj+17] ;z[jvj+11]=z[jvj+17];
l11:pile[v[22]]=896; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(896,jvj+11,jvj+12)*/
goto l12;
l19:x[jvj+17]=s[x[jvj+19]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+19];
pile[v[22]]=896; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(896,jvj+17,jvj+18)*/
if((x[jvj+18]!=0)) goto l18;
x[jvj+19]=t[x[jvj+19]];
l10:if((x[jvj+19]>0)) goto l19;
x[jvj+11]=x[jvj+8] ;z[jvj+11]=z[jvj+8];
goto l11;
l20:pile[v[22]]=896; pile[WZ1]=jvj+8; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(896,jvj+8,jvj+19)*/
if((x[jvj+19]==0)) goto l5;
pile[v[22]]=878; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(878,jvj+8,jvj+10)*/
x[jvj+11]=incon;
goto l10;
l25:x[jvj+25]=s[x[jvj+33]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+33];
pile[v[22]]=163; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(163,jvj+25,V67)*/
V67=pile[WZ2]; 
V68=V67;
if((V73==0)) goto l28;
V74=V73;
if((V68==V74)) goto l28;
l26:x[jvj+33]=t[x[jvj+33]];
l24:if((x[jvj+33]>0)) goto l25;
x[jvj+24]=t[x[jvj+24]];
l23:if((x[jvj+24]<=0)) goto l3;
x[jvj+26]=s[x[jvj+24]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+24];
x[jvj+33]=x[jvj+22] ;z[jvj+33]=z[jvj+22];
goto l24;
l27:pile[v[22]]=V68; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[764])( );     /*ETATCREF0(V68,jvj+26,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=109; pile[WZ2]=jvj+20; 
(*f[35])( );     /*CHGC1(jvj+27,109,jvj+20)*/
pile[WZ1]=449; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(jvj+27,449,jvj+26)*/
pile[WZ1]=163; pile[WZ2]=V68; 
(*f[177])( );     /*CHGC4(jvj+27,163,V68)*/
pile[v[22]]=jvj+4; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+4,159,jvj+27)*/
goto l26;
l28:pile[v[22]]=896; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(896,jvj+25,jvj+28)*/
if((x[jvj+28]==0)) goto l27;
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==x[jvj+26]) goto l27;
goto l26;
l29:x[jvj+23]=x[jvj+29] ;z[jvj+23]=z[jvj+29];
l22:pile[v[22]]=896; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(896,jvj+23,jvj+24)*/
goto l23;
l30:x[jvj+29]=s[x[jvj+31]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+31];
pile[v[22]]=896; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(896,jvj+29,jvj+30)*/
if((x[jvj+30]!=0)) goto l29;
x[jvj+31]=t[x[jvj+31]];
l21:if((x[jvj+31]>0)) goto l30;
x[jvj+23]=x[jvj+20] ;z[jvj+23]=z[jvj+20];
goto l22;
l31:pile[v[22]]=896; pile[WZ1]=jvj+20; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(896,jvj+20,jvj+31)*/
if((x[jvj+31]==0)) goto l3;
pile[v[22]]=878; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(878,jvj+20,jvj+22)*/
x[jvj+23]=incon;
goto l21;
}
