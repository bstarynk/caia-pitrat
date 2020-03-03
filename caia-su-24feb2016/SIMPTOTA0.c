#include "dx.h"
void SIMPTOTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V1=0,V2=0,V9=0,V6=0,S=0,V11=0,V12=0,V17=0,V10=0,V37=0,V39=0,V41=0,V28=0,V29=0,V30=0,V31=0,V32=0,V34=0,V36=0,V38=0,V40=0,V16=0,V14=0,L=0,V23=0,V48=0,V50=0,V43=0,V44=0,V45=0,V46=0,V47=0,V49=0,V22=0;
int II,Z,P,JJ;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11644;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4082&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
II=pile[v[22]]; Z=pile[v[22]+1]; P=pile[v[22]+2]; JJ=pile[v[22]+3]; R=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=incon;
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+10]=x[jvj+13] ;z[jvj+10]=z[jvj+13];
pile[v[22]]=Z; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(Z,jvj+2)*/
for(i=x[jvj+2],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=1)) goto l2;
if((x[jvj+2]<=0)) goto l2;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1290])( );     /*DEPEXP0(jvj+3,jvj+4)*/
l2:if((II==999)) goto l12;
if((JJ==999)) goto l12;
V1=incon;
V3=abs(II);
V4=abs(JJ);
if((V3>=V4)) goto l1;
V2=abs(JJ);
V1=V2;
l3:V6=V1+1;
S=V6;
if(x[jvj+4]!=incon) goto l13;
l16:pile[v[22]]=jvj+10; pile[WZ1]=R; 
(*f[2058])( );     /*CMFFLISR0(jvj+10,R)*/
if((v[142]<=0)) goto l20;
V22=g[628];
if((V22<=0)) goto l20;
V23=vg[628];
if((V23!=0)) goto l17;
if((V22<3)) goto l19;
l17:pile[v[22]]=628; pile[WZ1]=11644; pile[WZ2]=0; pile[WZ3]=(-635); pile[WZ4]=jvj+10; pile[WZ5]=(-601); pile[v[22]+6]=R; pile[v[22]+7]=jvj+12; 
(*f[4101])( );     /*INTERP28(628,11644,0,(-635),jvj+10,(-601),R,jvj+12)*/
if((x[jvj+12]==135)) goto l18;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:V1=V3;
goto l3;
l4:if((II<0)) goto l10;
V12=abs(L);
if((II>=V12)) goto l10;
l5:if((L==II)) goto l10;
if((L==999)) goto l10;
if((II==999)) goto l10;
l11:if((v[142]<=0)) goto l15;
V16=g[627];
if((V16<=0)) goto l15;
V17=vg[627];
if((V17!=0)) goto l6;
if((V16<3)) goto l8;
l6:pile[v[22]]=627; pile[WZ1]=11644; pile[WZ2]=0; pile[WZ3]=(-727); pile[WZ4]=II; pile[WZ5]=(-612); pile[v[22]+6]=V10; pile[v[22]+7]=(-1961); pile[v[22]+8]=jvj+5; pile[v[22]+9]=(-6216); pile[v[22]+10]=jvj+6; pile[v[22]+11]=(-6217); pile[v[22]+12]=jvj+7; pile[v[22]+13]=jvj+8; 
(*f[1614])( );     /*INTERP20(627,11644,0,(-727),II,(-612),V10,(-1961),jvj+5,(-6216),jvj+6,(-6217),jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l7;
l15:V10++;
l14:if((V10>S)) goto l16;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+11)*/
pile[v[22]]=Z; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; pile[WZ3]=jvj+6; pile[WZ4]=jvj+5; 
(*f[3130])( );if(v[102]) goto l15;     /*SUBSTITUVAR1(Z,jvj+4,jvj+11,jvj+6,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=P; pile[WZ2]=jvj+7; 
(*f[4026])( );     /*SIMPEXPA0(jvj+6,P,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+7,jvj+9)*/
if((x[jvj+9]!=135)) goto l9;
pile[v[22]]=jvj+10; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+10,V10)*/
l9:pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+7,V14)*/
V14=pile[WZ2]; 
L=V14;
if((L<0)) goto l4;
if((II>=0)) goto l5;
V11=abs(II);
if((L>=V11)) goto l10;
goto l5;
l7:if((V16<4)) goto l8;
goto l15;
l8:V37=x[jvj+5];
V39=x[jvj+6];
V41=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=11644; 
(*f[98])( );     /*SRA3(135,V28,11644,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(41,1,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V30,125,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=II; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,II,V31,V32)*/
V32=pile[WZ3]; 
pile[WZ1]=V10; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,V10,V32,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V37; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(20,V37,V34,V36)*/
V36=pile[WZ3]; 
pile[WZ1]=V39; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,V39,V36,V38)*/
V38=pile[WZ3]; 
pile[WZ1]=V41; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(20,V41,V38,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
if((V16!=2)) goto l15;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l15;
l10:pile[v[22]]=jvj+10; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+10,V10)*/
goto l11;
l12:pile[v[22]]=jvj+10; pile[WZ1]=999; 
(*f[207])( );     /*PLUE2(jvj+10,999)*/
goto l16;
l13:V10=(-S);
goto l14;
l18:if((V22<4)) goto l19;
goto l20;
l19:V48=x[jvj+10];
V50=x[R];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=11644; 
(*f[98])( );     /*SRA3(135,V43,11644,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,2,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V45,125,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V48; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(23,V48,V46,V47)*/
V47=pile[WZ3]; 
pile[WZ1]=V50; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(23,V50,V47,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
if((V22!=2)) goto l20;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l20;
}
