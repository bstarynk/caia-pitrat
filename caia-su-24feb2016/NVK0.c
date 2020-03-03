#include "dx.h"
void NVK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V42=0,V44=0,V37=0,V38=0,V39=0,V40=0,V41=0,V43=0,V7=0,V19=0,V17=0,V53=0,V46=0,V47=0,V48=0,V49=0,V50=0,V52=0,V18=0,V1=0,V6=0,V2=0,V4=0,V3=0,V14=0,V16=0,V31=0,V23=0,V34=0,L=0,V26=0,V25=0,V56=0,V57=0,V58=0,V59=0,V60=0,V30=0,V29=0,V28=0,V27=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=10408;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==284&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=1;
l9:if((V1<=sepbase)) goto l11;
V17=sepbase+1;
l13:if((V17<=sepcte)) goto l15;
pile[v[22]]=130; pile[WZ1]=77; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,77,V29)*/
V29=pile[WZ2]; 
V28=(-V29);
V27=V28-1;
V23=1;
l24:if((V23>V27)) goto l27;
pile[v[22]]=V23; pile[WZ1]=jvj+7; 
(*f[90])( );if(v[102]) goto l25;     /*SRF0(V23,jvj+7)*/
pile[v[22]]=655; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(655,jvj+7,jvj+8)*/
l26:pile[v[22]]=655; pile[WZ1]=jvj+7; 
(*f[71])( );     /*ENLV0(655,jvj+7)*/
l25:V23++;
goto l24;
l2:if((V7<4)) goto l3;
l12:pile[v[22]]=jvj+2; pile[WZ1]=68; 
(*f[377])( );     /*NVR0(jvj+2,68)*/
l10:V1++;
goto l9;
l3:V42=x[jvj+2];
V44=x[jvj+2];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V37; pile[WZ2]=10408; 
(*f[98])( );     /*SRA3(135,V37,10408,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,1,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V39,125,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V42; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,V42,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V44; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(20,V44,V41,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; 
(*f[40])( );     /*SLG0(V43)*/
if((V7!=2)) goto l12;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l12;
l4:x[jvj+6]=68 ;z[jvj+6]=68;
l8:V18=g[19];
if((V18<=0)) goto l16;
V19=vg[19];
if((V19!=0)) goto l5;
if((V18<3)) goto l7;
l5:pile[v[22]]=19; pile[WZ1]=10408; pile[WZ2]=0; pile[WZ3]=(-592); pile[WZ4]=V17; pile[WZ5]=12; pile[v[22]+6]=jvj+4; pile[v[22]+7]=jvj+5; 
(*f[353])( );     /*INTERP7(19,10408,0,(-592),V17,12,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l6;
l16:pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; 
(*f[377])( );     /*NVR0(jvj+4,jvj+6)*/
l14:V17++;
goto l13;
l6:if((V18<4)) goto l7;
goto l16;
l7:V53=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=10408; 
(*f[98])( );     /*SRA3(135,V46,10408,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,3,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V48,125,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V17; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,V17,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V53; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V53,V50,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
if((V18!=2)) goto l16;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l16;
l11:V6=r[V1];
if((V6!=1)) goto l10;
x[jvj+2]=V1 ;z[jvj+2]=(V1<=sepcte) ? V1 : 0;
V2=r[x[jvj+2]];
if((V2!=1)) goto l10;
V4=x[jvj+2];
V3=vu[V4];
if((V3!=0)) goto l10;
V7=g[17];
if((V7<=0)) goto l12;
V8=vg[17];
if((V8!=0)) goto l1;
if((V7<3)) goto l3;
l1:pile[v[22]]=17; pile[WZ1]=10408; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=jvj+2; pile[WZ5]=jvj+3; 
(*f[232])( );     /*INTERP3(17,10408,0,(-625),jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
goto l12;
l15:V14=r[V17];
if((V14!=1)) goto l14;
V16=vu[V17];
if((V16!=0)) goto l14;
x[jvj+4]=V17 ;z[jvj+4]=(V17<=sepcte) ? V17 : 0;
x[jvj+6]=incon;
if((V17<=sepbloc)) goto l4;
if((V17>sepnouv)) goto l4;
x[jvj+6]=67 ;z[jvj+6]=67;
goto l8;
l18:V25=V26;
l21:pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
if((V30!=2)) goto l23;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l23:pile[v[22]]=V23; 
(*f[119])( );     /*NVS0(V23)*/
goto l26;
l19:if((V30<4)) goto l20;
goto l23;
l20:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=10408; 
(*f[98])( );     /*SRA3(135,V56,10408,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,2,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V58,125,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=231; 
(*f[42])( );     /*SRA1(135,V59,231,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V23; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(41,V23,V60,V26)*/
V26=pile[WZ3]; 
V25=incon;
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+7,V34)*/
V34=pile[WZ2]; 
L=V34;
pile[v[22]]=V26; pile[WZ1]=L; 
(*f[37])( );     /*SRA0(V26,L,V25)*/
V25=pile[WZ2]; 
goto l21;
l22:V30=g[18];
if((V30<=0)) goto l23;
V31=vg[18];
if((V31!=0)) goto l17;
if((V30<3)) goto l20;
l17:pile[v[22]]=18; pile[WZ1]=10408; pile[WZ2]=0; pile[WZ3]=23; pile[WZ4]=V23; pile[WZ5]=jvj+9; 
(*f[612])( );     /*INTERP9(18,10408,0,23,V23,jvj+9)*/
if((x[jvj+9]==135)) goto l19;
goto l23;
l27:x[jvj+1]=incon; v[0]=jvj; return;
}
