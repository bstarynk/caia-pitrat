#include "dx.h"
void SRL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V96=0,V84=0,V85=0,V86=0,V87=0,V88=0,V5=0,Y=0,V1=0,V11=0,V91=0,V92=0,V93=0,V94=0,V95=0,V10=0,V15=0,II=0,V18=0,RW=0,V21=0,J=0,V66=0,V31=0,V33=0,V35=0,V34=0,V37=0,V41=0,L=0,V78=0,V77=0,V79=0,V55=0,V56=0,V58=0,V51=0,V52=0,V67=0,V71=0,V73=0,V74=0,V70=0,V64=0,V28=0,V30=0,V27=0,V46=0,V47=0,V48=0,V49=0,MM=0,V59=0,V80=0,V82=0,V97=0;
int V,XP,Z;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; XP=pile[v[22]+1]; Z=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V97=V;
V96=Z;
l29:Y=RW=incon;
if((V96>lim)) goto l4;
if((x[XP]==41)) goto l4;
Y=V96;
if((V96>=sepcte)) goto l4;
if((V96<=0)) goto l4;
x[jvj+2]=Y ;z[jvj+2]=(Y<=sepcte) ? Y : 0;
V1=s[x[jvj+2]];
if((V1!=66)) goto l4;
pile[v[22]]=jvj+2; 
(*f[59])( );     /*LECT0(jvj+2)*/
l4:if((V96<=lim)) goto l8;
if((x[XP]==41)) goto l8;
V5=g[39];
if((V5<=0)) goto l8;
V6=vg[39];
if((V6!=0)) goto l1;
if((V5<3)) goto l3;
l1:pile[v[22]]=39; pile[WZ1]=10472; pile[WZ2]=0; pile[WZ3]=(-608); pile[WZ4]=V96; pile[WZ5]=jvj+1; 
(*f[612])( );     /*INTERP9(39,10472,0,(-608),V96,jvj+1)*/
if((x[jvj+1]==135)) goto l2;
l8:if(Y!=incon) goto l9;
l24:if((x[XP]!=41)) goto l25;
pile[v[22]]=V96; pile[WZ1]=0; 
(*f[221])( );     /*SRN0(V96,0,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
l25:if((V97>=0)) goto l26;
V10=g[38];
if((V10<=0)) goto l26;
V11=vg[38];
if((V11!=0)) goto l5;
if((V10<3)) goto l7;
l5:pile[v[22]]=38; pile[WZ1]=10472; pile[WZ2]=0; pile[WZ3]=jvj+3; 
(*f[291])( );     /*INTERP4(38,10472,0,jvj+3)*/
if((x[jvj+3]==135)) goto l6;
l26:if(Y!=incon) goto l27;
l28:v[0]=jvj; v[22]-=3; return;
l2:if((V5<4)) goto l3;
goto l8;
l3:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V84; pile[WZ2]=10472; 
(*f[98])( );     /*SRA3(135,V84,10472,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V85; 
(*f[39])( );     /*SDX0(41,2,V85,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V86,125,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V96; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(41,V96,V87,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
if((V5!=2)) goto l8;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l8;
l6:if((V10<4)) goto l7;
goto l26;
l7:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V91; pile[WZ2]=10472; 
(*f[98])( );     /*SRA3(135,V91,10472,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V92; 
(*f[39])( );     /*SDX0(41,1,V92,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V93,125,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=(-4427); 
(*f[37])( );     /*SRA0(V94,(-4427),V95)*/
V95=pile[WZ2]; 
pile[v[22]]=V95; 
(*f[40])( );     /*SLG0(V95)*/
if((V10!=2)) goto l26;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l26;
l9:V15=r[Y];
if((V15>=0)) goto l10;
V21=(-V15);
x[jvj+6]=V21 ;z[jvj+6]=(V21<=sepcte) ? V21 : 0;
c[v[1]][0]=45;
II=1;
x[jvj+4]=x[jvj+6] ;z[jvj+4]=z[jvj+6];
RW=x[jvj+4];
l11:pile[v[22]]=135; pile[WZ1]=II; pile[WZ2]=jvj+4; 
(*f[98])( );     /*SRA3(135,II,jvj+4,J)*/
J=pile[WZ3]; 
c[v[1]][J]=32;
if(RW!=incon) goto l13;
l22:V46=s[Y];
V47=J+1;
pile[v[22]]=V46; pile[WZ1]=V47; 
(*f[221])( );     /*SRN0(V46,V47,L)*/
L=pile[WZ2]; 
l23:c[v[1]][L]=32;
V48=t[Y];
V49=L+1;
pile[v[22]]=V48; pile[WZ1]=V49; 
(*f[221])( );     /*SRN0(V48,V49,MM)*/
MM=pile[WZ2]; 
pile[v[22]]=MM; pile[WZ1]=5; 
(*f[342])( );     /*SLG2(MM,5)*/
goto l24;
l10:x[jvj+5]=V15 ;z[jvj+5]=(V15<=sepcte) ? V15 : 0;
II=0;
x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
if((V18=w[x[jvj+4]][1])==incon) goto l11;
RW=V18;
goto l11;
l12:V66=sepfacts;
l19:V71=V67;
V73=J+1;
V74=V67-V66;
if((V70=w[V71][0])==incon) goto l20;
pile[v[22]]=V70; pile[WZ1]=V73; 
(*f[64])( );     /*SRA2(V70,V73,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=V64; 
(*f[221])( );     /*SRN0(V74,V64,L)*/
L=pile[WZ2]; 
goto l23;
l13:if((RW==89)) goto l14;
if((RW==1317)) goto l15;
if((RW!=96)) goto l16;
V55=s[Y];
if((V55>0)) goto l16;
V56=V55;
V58=J+1;
pile[v[22]]=V56; pile[WZ1]=V58; 
(*f[64])( );     /*SRA2(V56,V58,L)*/
L=pile[WZ2]; 
goto l23;
l14:V31=s[Y];
if((V31<(-254))) goto l16;
if((V31>255)) goto l16;
V33=J+1;
V35=V33+1;
V34=V35+1;
V37=V34+1;
V41=V31;
c[v[1]][V33]=39;
c[v[1]][V34]=39;
L=V37;
c[v[1]][V35]=V41;
goto l23;
l15:if((x[XP]==41)) goto l22;
V78=s[Y];
V77=V78;
V79=J+1;
pile[v[22]]=V77; pile[WZ1]=V79; 
(*f[227])( );     /*SPCMT0(V77,V79,L)*/
L=pile[WZ2]; 
goto l23;
l16:if((x[XP]==68)) goto l17;
if((RW==20)) goto l18;
goto l22;
l17:if((RW!=20)) goto l22;
V51=s[Y];
if((V51<=sepcte)) goto l18;
V52=J+1;
pile[v[22]]=V52; pile[WZ1]=V51; pile[WZ2]=20; 
(*f[179])( );     /*SDX1(V52,V51,20,L)*/
L=pile[WZ3]; 
goto l23;
l18:V67=s[Y];
if((V67>sepcod)) goto l20;
if((V67<=sepfacts)) goto l20;
V66=incon;
if((V67<=sephist)) goto l12;
V66=sephist;
goto l19;
l20:if((V67>sepcte)) goto l22;
if((V67<=sepfacts)) goto l21;
if((V67>sepcod)) goto l21;
goto l22;
l21:V28=V67;
V30=J+1;
if((V27=w[V28][0])==incon) goto l22;
pile[v[22]]=V27; pile[WZ1]=V30; 
(*f[64])( );     /*SRA2(V27,V30,L)*/
L=pile[WZ2]; 
goto l23;
l27:if((V97<0)) goto l28;
V80=t[Y];
if((V80<=0)) goto l28;
if((x[XP]==41)) goto l28;
V82=V97-1;
V96=V80;
V97=V82;
goto l29;
}
