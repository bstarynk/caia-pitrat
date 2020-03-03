#include "dx.h"
void DETRUISYMBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V12=0,V19=0,V16=0,V14=0,V37=0,V36=0,V41=0,V44=0,V=0,V3=0,V2=0,V5=0,V4=0,V54=0,V51=0,V52=0,V53=0,V23=0,V55=0,V40=0;
int L;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=11093;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4098&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1179; pile[WZ1]=L; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1179,L,jvj+28)*/
x[jvj+33]=0 ;z[jvj+33]=0;
l22:if((x[jvj+28]>0)) goto l23;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+34]=t[x[jvj+34]];
l1:if((x[jvj+34]<=0)) goto l24;
x[jvj+9]=s[x[jvj+34]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+34];
pile[v[22]]=447; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(447,jvj+9,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+11,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=459; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(459,jvj+9,jvj+12)*/
if((x[jvj+10]==x[jvj+12])) goto l2;
x[jvj+35]=x[jvj+6] ;z[jvj+35]=z[jvj+6];
l3:if((x[jvj+35]<=0)) goto l2;
x[jvj+2]=s[x[jvj+35]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+35];
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+2,V11)*/
V11=pile[WZ2]; 
pile[WZ1]=L; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,L,V12)*/
V12=pile[WZ2]; 
if((V11!=V12)) goto l4;
l5:pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+13)*/
x[jvj+36]=x[jvj+13] ;z[jvj+36]=z[jvj+13];
l6:if((x[jvj+36]<=0)) goto l4;
x[jvj+3]=s[x[jvj+36]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+36];
pile[v[22]]=436; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(436,jvj+3,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+14,V14)*/
V14=pile[WZ2]; 
if((V14!=V16)) goto l7;
pile[v[22]]=688; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(688,jvj+3,V19)*/
V19=pile[WZ2]; 
if((V19==1)) goto l7;
l8:x[jvj+24]=0 ;z[jvj+24]=0;
pile[v[22]]=1179; pile[WZ1]=jvj+7; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1179,jvj+7,jvj+18)*/
x[jvj+19]=d[72];z[jvj+19]=0;
x[jvj+38]=x[jvj+18] ;z[jvj+38]=z[jvj+18];
l12:if((x[jvj+38]>0)) goto l13;
pile[v[22]]=jvj+24; pile[WZ1]=1261; pile[WZ2]=jvj+32; 
(*f[300])( );     /*TRI10(jvj+24,1261,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=1260; pile[WZ3]=jvj+27; 
(*f[301])( );     /*TRI11(jvj+32,jvj+33,1260,jvj+27)*/
pile[v[22]]=1261; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1261,jvj+27,jvj+31)*/
for(i=x[jvj+31],V23=0;i>0;i=t[i],V23++)  ;
if((V23<10)) goto l21;
V40=g[629];
if((V40<=0)) goto l24;
V41=vg[629];
if((V41!=0)) goto l15;
if((V40<3)) goto l18;
l15:pile[v[22]]=629; pile[WZ1]=11093; pile[WZ2]=0; pile[WZ3]=(-595); pile[WZ4]=L; pile[WZ5]=jvj+25; 
(*f[232])( );     /*INTERP3(629,11093,0,(-595),L,jvj+25)*/
if((x[jvj+25]==135)) goto l17;
l24:x[jvj+28]=t[x[jvj+28]];
goto l22;
l4:x[jvj+35]=t[x[jvj+35]];
goto l3;
l7:x[jvj+36]=t[x[jvj+36]];
goto l6;
l10:x[jvj+15]=s[x[jvj+37]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+37];
V36=x[jvj+15];
if((V36>=V37)) goto l11;
pile[v[22]]=447; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+15,jvj+16)*/
if((x[jvj+16]!=x[jvj+22])) goto l11;
pile[v[22]]=459; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(459,jvj+15,jvj+17)*/
if((x[jvj+17]==x[jvj+21])) goto l14;
l11:x[jvj+37]=t[x[jvj+37]];
l9:if((x[jvj+37]>0)) goto l10;
pile[v[22]]=447; pile[WZ1]=jvj+21; pile[WZ2]=459; pile[WZ3]=jvj+22; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(447,jvj+21,459,jvj+22,jvj+23)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[196])( );     /*PLUF0(jvj+19,jvj+23,jvj+24)*/
l14:x[jvj+38]=t[x[jvj+38]];
goto l12;
l13:x[jvj+20]=s[x[jvj+38]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+38];
pile[v[22]]=447; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(447,jvj+20,jvj+21)*/
pile[v[22]]=459; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(459,jvj+20,jvj+22)*/
if((x[jvj+21]==x[jvj+22])) goto l14;
V37=x[jvj+20];
x[jvj+37]=x[jvj+18] ;z[jvj+37]=z[jvj+18];
goto l9;
l16:V2=V3;
l19:pile[v[22]]=41; pile[WZ1]=V23; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(41,V23,V2,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V55,(-4670),V5)*/
V5=pile[WZ2]; 
V4=incon;
pile[v[22]]=V5; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V5,83,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; 
(*f[40])( );     /*SLG0(V4)*/
l20:if((V40!=2)) goto l24;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l24;
l17:if((V40<4)) goto l18;
goto l24;
l18:pile[v[22]]=498; pile[WZ1]=L; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(498,L,jvj+26)*/
V54=x[jvj+26];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V51; pile[WZ2]=11093; 
(*f[98])( );     /*SRA3(135,V51,11093,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V52,125,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(20,V54,V53,V3)*/
V3=pile[WZ3]; 
V2=incon;
pile[v[22]]=163; pile[WZ1]=L; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,L,V44)*/
V44=pile[WZ2]; 
V=V44;
pile[v[22]]=V3; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V3,V,V2)*/
V2=pile[WZ2]; 
goto l19;
l21:pile[v[22]]=L; pile[WZ1]=jvj+27; 
(*f[4109])( );     /*DETRUISYMA0(L,jvj+27)*/
goto l24;
l23:x[jvj+7]=s[x[jvj+28]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+28];
pile[v[22]]=158; pile[WZ1]=jvj+7; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(158,jvj+7,jvj+29)*/
if((x[jvj+29]!=301)) goto l24;
pile[v[22]]=1308; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1308,jvj+7,jvj+30)*/
if((x[jvj+30]!=30)) goto l24;
pile[v[22]]=498; pile[WZ1]=L; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(498,L,jvj+4)*/
pile[v[22]]=983; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(983,jvj+4,jvj+5)*/
pile[v[22]]=878; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+5,jvj+6)*/
pile[v[22]]=1179; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1179,jvj+7,jvj+8)*/
x[jvj+34]=x[jvj+8] ;z[jvj+34]=z[jvj+8];
goto l1;
}
