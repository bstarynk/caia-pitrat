#include "dx.h"
void FICTIF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,V4=0,V3=0,V7=0,V23=0,V24=0,V25=0,V8=0,V27=0,V29=0,V26=0,V28=0,V30=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V41=0,V45=0,V43=0,V46=0,V44=0,V42=0,V9=0,V39=0,V40=0,V38=0,V48=0,V47=0,V49=0,V50=0,V52=0,V53=0,V72=0,V76=0,V77=0,V73=0,V78=0,V74=0,V82=0,V79=0,V80=0,V84=0,V83=0,V85=0,V58=0,V59=0,V55=0,V57=0,V56=0,V54=0,V70=0,V68=0,V69=0,V63=0,V67=0,V62=0,V66=0,V65=0,V61=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );


WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=0 ;z[jvj+1]=0;
x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=250; pile[WZ1]=250; pile[WZ2]=250; pile[WZ3]=250; pile[WZ4]=65; pile[WZ5]=65; pile[v[22]+6]=0; pile[v[22]+7]=(-598); pile[v[22]+8]=(-598); pile[v[22]+9]=(-598); pile[v[22]+10]=(-598); pile[v[22]+11]=(-598); pile[v[22]+12]=(-598); pile[v[22]+13]=0; pile[v[22]+14]=0; pile[v[22]+15]=(-598); pile[v[22]+16]=(-598); pile[v[22]+17]=jvj+1; pile[v[22]+18]=jvj+2; pile[v[22]+19]=jvj+3; pile[v[22]+20]=(-598); pile[v[22]+21]=(-598); pile[v[22]+22]=(-598); pile[v[22]+23]=(-598); pile[v[22]+24]=(-598); pile[v[22]+25]=(-598); pile[v[22]+26]=(-598); pile[v[22]+27]=0; pile[v[22]+28]=250; pile[v[22]+29]=jvj+4; 
(*f[455])( );     /*INTERP8(250,250,250,250,65,65,0,(-598),(-598),(-598),(-598),(-598),(-598),0,0,(-598),(-598),jvj+1,jvj+2,jvj+3,(-598),(-598),(-598),(-598),(-598),(-598),(-598),0,250,jvj+4)*/
if((x[jvj+4]==250)) goto l11;
l9:v[0]=jvj; return;
l2:pile[v[22]]=0; pile[WZ1]=0; pile[WZ2]=(-598); 
(*f[202])( );if(v[102]) goto l9;     /*FMATRICE0(0,0,(-598),V5)*/
V5=pile[WZ3]; 
if((V5==65)) goto l3;
goto l9;
l3:pile[v[22]]=0; pile[WZ1]=(-598); 
(*f[201])( );if(v[102]) goto l9;     /*FCOEFF0(0,(-598),V6)*/
V6=pile[WZ2]; 
if((V6==0)) goto l4;
goto l9;
l4:pile[v[22]]=(-598); pile[WZ1]=250; 
(*f[458])( );if(v[102]) goto l9;     /*ELTMIN0((-598),250,V4)*/
V4=pile[WZ2]; 
if((V4==0)) goto l5;
goto l9;
l5:pile[v[22]]=250; 
(*f[457])( );if(v[102]) goto l9;     /*CARDENS0(250,V3)*/
V3=pile[WZ1]; 
if((V3==0)) goto l6;
goto l9;
l6:pile[v[22]]=250; pile[WZ1]=jvj+5; 
(*f[456])( );if(v[102]) goto l9;     /*COMPILE0(250,jvj+5)*/
if((x[jvj+5]==250)) goto l7;
goto l9;
l7:pile[v[22]]=250; 
(*f[459])( );     /*CARDVAR0(250,V7)*/
V7=pile[WZ1]; 
if((V7==0)) goto l10;
goto l9;
l8:x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+9]=0 ;z[jvj+9]=0;
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=250; pile[WZ1]=65; pile[WZ2]=250; 
(*f[462])( );     /*PLUSC3(250,65,250)*/
pile[WZ1]=250; 
(*f[463])( );     /*SUBMUL0(250,250)*/
pile[WZ2]=65; 
(*f[69])( );     /*CHGC3(250,250,65)*/
pile[v[22]]=jvj+6; pile[WZ2]=250; 
(*f[464])( );     /*AJE0(jvj+6,250,250)*/
pile[v[22]]=jvj+7; 
(*f[465])( );     /*AJE1(jvj+7,250,250)*/
pile[v[22]]=jvj+8; 
(*f[466])( );     /*AJE2(jvj+8,250,250)*/
pile[v[22]]=jvj+9; pile[WZ1]=65; 
(*f[467])( );     /*PLUE4(jvj+9,65)*/
pile[v[22]]=jvj+10; pile[WZ1]=0; 
(*f[468])( );     /*YL0(jvj+10,0)*/
pile[v[22]]=(-598); 
(*f[469])( );     /*YL1((-598),0)*/
pile[v[22]]=0; 
(*f[470])( );     /*YL2(0)*/
pile[WZ1]=250; 
(*f[471])( );     /*YL3(0,250)*/
(*f[472])( );     /*YL4(0,250)*/
pile[WZ1]=0; 
(*f[473])( );     /*YL5(0,0)*/
pile[v[22]]=jvj+11; pile[WZ1]=65; 
(*f[474])( );     /*PLUB0(jvj+11,65)*/
pile[v[22]]=jvj+12; pile[WZ1]=(-598); 
(*f[475])( );     /*PLUB1(jvj+12,(-598))*/
pile[v[22]]=0; pile[WZ1]=0; pile[WZ2]=(-598); pile[WZ3]=250; pile[WZ4]=0; pile[WZ5]=0; 
(*f[476])( );     /*ALCTMM0(0,0,(-598),250,0,0)*/
pile[v[22]]=250; pile[WZ1]=(-598); 
(*f[477])( );     /*ALCTLL0(250,(-598))*/
pile[v[22]]=jvj+13; pile[WZ1]=65; 
(*f[478])( );     /*OUTER0(jvj+13,65)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-598); 
(*f[479])( );     /*OUTER1(jvj+14,(-598))*/
pile[v[22]]=jvj+15; pile[WZ1]=0; 
(*f[480])( );     /*OUTER2(jvj+15,0)*/
pile[v[22]]=250; 
(*f[481])( );     /*STOCKER0(250)*/
(*f[482])( );     /*E0()*/
(*f[483])( );     /*APPELGM0()*/
(*f[484])( );     /*CREPERM0()*/
V48=k;
V47=V48+8;
V49=V47;
V50=n[V48];
V52=V50;
n[V49]=V52;
V53=ic;
if((V53==2)) goto l13;
if((V53==1)) goto l14;
if((V53!=0)) goto l9;
V72=b;
V76=h[V52][1];
V77=q;
V73=u[V76][V77];
if((V72<=V73)) goto l9;
V78=n[V49];
V74=du[V78];
n[V49]=V74;
V82=h[V52][2];
V79=u[V82][V77];
if((V72<=V79)) goto l9;
V80=td[V74];
n[V49]=V80;
V84=h[V52][3];
V83=u[V84][V77];
if((V72<=V83)) goto l9;
V85=qt[V80];
n[V49]=V85;
goto l9;
l10:V23=250;
V24=250;
V25=0;
V8=135;
V27=V23;
V29=V24;
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(30,0,35,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V27,V26,V28)*/
V28=pile[WZ3]; 
pile[WZ1]=V29; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(20,V29,V28,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V25; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,V25,V30,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
if((V8==250)) goto l8;
goto l9;
l11:V33=0;
V34=0;
V35=0;
V36=0;
V37=0;
if((V37==0)) goto l12;
if((V37<=0)) goto l9;
if((V35>=V33)) goto l9;
if((V35<0)) goto l9;
if((V36<0)) goto l9;
V41=V34-1;
if((V36>=V41)) goto l9;
V45=V33-1;
V43=V45*V34;
V46=V36*V33;
V44=V35+V46;
V42=V43+V44;
V9=V42;
l1:if((V9==0)) goto l2;
goto l9;
l12:if((V36>=V34)) goto l9;
if((V35<0)) goto l9;
if((V36<0)) goto l9;
V38=V33-1;
if((V35>=V38)) goto l9;
V40=V36*V38;
V39=V35+V40;
V9=V39;
goto l1;
l13:V54=b;
V56=h[V52][3];
V57=q;
V55=u[V56][V57];
if((V54<=V55)) goto l9;
V59=n[V49];
V58=qt[V59];
n[V49]=V58;
goto l9;
l14:V61=b;
V65=h[V52][2];
V66=q;
V62=u[V65][V66];
if((V61<=V62)) goto l9;
V67=n[V49];
V63=td[V67];
n[V49]=V63;
V69=h[V52][3];
V68=u[V69][V66];
if((V61<=V68)) goto l9;
V70=qt[V63];
n[V49]=V70;
goto l9;
}
