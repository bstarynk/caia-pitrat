#include "dx.h"
void CREPOULE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,I=0,J=0,V39=0,V38=0,V11=0,V29=0,V14=0,V13=0,V30=0,V16=0,V15=0,V28=0,V31=0,V18=0,V17=0,V27=0,V32=0,V20=0,V19=0,V26=0,V33=0,V22=0,V21=0,V25=0,V34=0,V24=0,V23=0,K=0,V54=0,V60=0,V66=0,V62=0,V61=0,V57=0,V55=0,V59=0,V58=0,N6=0,V67=0,V69=0,V70=0,V72=0,V68=0,V71=0,V64=0,V73=0,V79=0,V85=0,V81=0,V80=0,V76=0,V74=0,V78=0,V77=0,N5=0,V86=0,V88=0,V89=0,V91=0,V87=0,V90=0,V83=0,V92=0,V98=0,V104=0,V100=0,V99=0,V95=0,V93=0,V97=0,V96=0,N4=0,V105=0,V107=0,V108=0,V110=0,V106=0,V109=0,V102=0,V111=0,V117=0,V123=0,V119=0,V118=0,V114=0,V112=0,V116=0,V115=0,N3=0,V124=0,V126=0,V127=0,V129=0,V125=0,V128=0,V121=0,V130=0,V136=0,V142=0,V138=0,V137=0,V133=0,V131=0,V135=0,V134=0,N2=0,V143=0,V145=0,V146=0,V148=0,V144=0,V147=0,V140=0,V154=0,V160=0,V156=0,V155=0,V151=0,V149=0,V153=0,V152=0,N1=0,V161=0,V163=0,V164=0,V166=0,V162=0,V165=0,V158=0;
int N,NT,NN;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=26196;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2833&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NT=pile[v[22]+1]; NN=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
V29=NT/20;
V54=0;
V60=49;
V61=incon;
V66=v[V60];
V62=V66%1000000;
if((V62>0)) goto l16;
V61=137643;
l15:v[V60]=V61;
V57=V29+1;
V55=V57-V54;
V59=v[49]%V55;
V58=V54+V59;
N6=V58;
V14=6*N6;
V13=NT-V14;
V30=V13/16;
V73=0;
V79=49;
V80=incon;
V85=v[V79];
V81=V85%1000000;
if((V81>0)) goto l18;
V80=137643;
l17:v[V79]=V80;
V76=V30+1;
V74=V76-V73;
V78=v[49]%V74;
V77=V73+V78;
N5=V77;
V16=5*N5;
V15=V13-V16;
V28=N5+N6;
V31=V15/13;
V92=0;
V98=49;
V99=incon;
V104=v[V98];
V100=V104%1000000;
if((V100>0)) goto l20;
V99=137643;
l19:v[V98]=V99;
V95=V31+1;
V93=V95-V92;
V97=v[49]%V93;
V96=V92+V97;
N4=V96;
V18=4*N4;
V17=V15-V18;
V27=N4+V28;
V32=V17/9;
V111=0;
V117=49;
V118=incon;
V123=v[V117];
V119=V123%1000000;
if((V119>0)) goto l22;
V118=137643;
l21:v[V117]=V118;
V114=V32+1;
V112=V114-V111;
V116=v[49]%V112;
V115=V111+V116;
N3=V115;
V20=3*N3;
V19=V17-V20;
V26=N3+V27;
V33=V19/4;
V130=0;
V136=49;
V137=incon;
V142=v[V136];
V138=V142%1000000;
if((V138>0)) goto l24;
V137=137643;
l23:v[V136]=V137;
V133=V33+1;
V131=V133-V130;
V135=v[49]%V131;
V134=V130+V135;
N2=V134;
V22=2*N2;
V21=V19-V22;
V25=N2+V26;
V34=V21/2;
V154=49;
V155=incon;
V160=v[V154];
V156=V160%1000000;
if((V156>0)) goto l26;
V155=137643;
l25:v[V154]=V155;
V151=V21+1;
V149=V151-V34;
V153=v[49]%V149;
V152=V34+V153;
N1=V152;
V24=N1+V25;
V23=NN-V24;
x[jvj+2]=0 ;z[jvj+2]=0;
V36=N-1;
I=0;
l1:if((I<=V36)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
K=0;
l6:V11=incon;
if((K==0)) goto l7;
if((K==1)) goto l8;
if((K==2)) goto l9;
if((K==3)) goto l10;
if((K==4)) goto l11;
if((K==5)) goto l12;
V11=N6;
l14:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+10)*/
pile[WZ3]=1273; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+18)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+17; 
(*f[301])( );     /*TRI11(jvj+16,jvj+4,107,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+17,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V11; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V11,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
K++;
if((K<=6)) goto l6;
x[NNNE]=x[jvj+5] ;z[NNNE]=z[jvj+5];
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:J=0;
l2:if((J<=V36)) goto l5;
I++;
goto l1;
l5:if((I==J)) goto l4;
V39=N*J;
V38=I+V39;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7505); pile[WZ4]=jvj+7; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7505),jvj+7)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V38; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,V38,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+9,jvj+8,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l4:J++;
goto l2;
l7:V11=V23;
goto l14;
l8:V11=N1;
goto l14;
l9:V11=N2;
goto l14;
l10:V11=N3;
goto l14;
l11:V11=N4;
goto l14;
l12:V11=N5;
goto l14;
l16:V64=V62%100000;
V71=V62/100000;
V68=V64*10;
V72=V64/10000;
V70=V71+V72;
V69=V70%10;
V67=V68+V69;
V61=V67;
goto l15;
l18:V83=V81%100000;
V90=V81/100000;
V87=V83*10;
V91=V83/10000;
V89=V90+V91;
V88=V89%10;
V86=V87+V88;
V80=V86;
goto l17;
l20:V102=V100%100000;
V109=V100/100000;
V106=V102*10;
V110=V102/10000;
V108=V109+V110;
V107=V108%10;
V105=V106+V107;
V99=V105;
goto l19;
l22:V121=V119%100000;
V128=V119/100000;
V125=V121*10;
V129=V121/10000;
V127=V128+V129;
V126=V127%10;
V124=V125+V126;
V118=V124;
goto l21;
l24:V140=V138%100000;
V147=V138/100000;
V144=V140*10;
V148=V140/10000;
V146=V147+V148;
V145=V146%10;
V143=V144+V145;
V137=V143;
goto l23;
l26:V158=V156%100000;
V165=V156/100000;
V162=V158*10;
V166=V158/10000;
V164=V165+V166;
V163=V164%10;
V161=V162+V163;
V155=V161;
goto l25;
}
