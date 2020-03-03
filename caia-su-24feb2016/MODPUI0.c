#include "dx.h"
void MODPUI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AA=0,V19=0,V23=0,V17=0,V20=0,V22=0,V24=0,V13=0,V14=0,V9=0,QQ=0,V11=0,Q=0,V10=0,V15=0,V16=0,V3=0,V5=0,V25=0,V26=0,V27=0,V28=0,V30=0,V32=0,V34=0,V36=0,V38=0,V39=0,V40=0,V41=0,V44=0,V43=0,V42=0,V45=0,V46=0,V47=0,V48=0,V51=0,V50=0,V49=0,V52=0,V53=0,V54=0,V55=0,V58=0,V57=0,V56=0,V59=0,V60=0,V61=0,V62=0,V65=0,V64=0,V63=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
R=AA=incon;
if((B==0)) goto l1;
if((B==1)) goto l11;
if((A!=0)) goto l2;
if((B<=0)) goto l7;
R=0;
l2:if((B<=1)) goto l3;
if((A==0)) goto l3;
V45=A%C;
V46=V45;
if((V46<=0)) goto l15;
V47=C/2;
if((V46<=V47)) goto l15;
V48=V46-C;
AA=V48;
l3:if(R==incon) goto l4;
l7:if((B>=0)) goto l9;
x[jvj+1]=vo[14];z[jvj+1]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+1,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=929; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(929,jvj+1,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=15; 
(*f[178])( );     /*SPLO0(0,15,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(20,V25,38,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11372; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,11372,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=A; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,A,V27,V28)*/
V28=pile[WZ3]; 
pile[WZ1]=B; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,B,V28,V30)*/
V30=pile[WZ3]; 
pile[WZ1]=C; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,C,V30,V32)*/
V32=pile[WZ3]; 
pile[WZ1]=V5; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,V5,V32,V34)*/
V34=pile[WZ3]; 
pile[WZ1]=V3; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(41,V3,V34,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
l9:if(R!=incon) goto l10;
l8:v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:if((A==0)) goto l8;
R=1;
l10:v[0]=jvj; v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l4:if(AA!=incon) goto l5;
goto l7;
l5:if((B<=100)) goto l6;
V13=B/100;
V14=B%100;
pile[v[22]]=C; pile[WZ1]=100; pile[WZ2]=AA; 
(*f[1041])( );if(v[102]) goto l8;     /*MODPUI0(C,100,AA,V9)*/
V9=pile[WZ3]; 
pile[WZ1]=V13; pile[WZ2]=V9; 
(*f[1041])( );if(v[102]) goto l8;     /*MODPUI0(C,V13,V9,QQ)*/
QQ=pile[WZ3]; 
pile[v[22]]=QQ; 
(*f[990])( );     /*ORDG0(QQ,V11)*/
V11=pile[WZ1]; 
pile[v[22]]=C; pile[WZ1]=V14; pile[WZ2]=AA; 
(*f[1041])( );if(v[102]) goto l8;     /*MODPUI0(C,V14,AA,Q)*/
Q=pile[WZ3]; 
pile[v[22]]=Q; 
(*f[990])( );     /*ORDG0(Q,V10)*/
V10=pile[WZ1]; 
V15=V10+V11;
if((V15>9)) goto l8;
V16=Q*QQ;
V59=V16%C;
V60=V59;
if((V60<=0)) goto l19;
V61=C/2;
if((V60<=V61)) goto l19;
V62=V60-C;
R=V62;
goto l10;
l6:pile[v[22]]=AA; 
(*f[990])( );     /*ORDG0(AA,V19)*/
V19=pile[WZ1]; 
V23=B-1;
pile[v[22]]=C; pile[WZ1]=V23; pile[WZ2]=AA; 
(*f[1041])( );if(v[102]) goto l7;     /*MODPUI0(C,V23,AA,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[990])( );     /*ORDG0(V17,V20)*/
V20=pile[WZ1]; 
V22=V19+V20;
if((V22>9)) goto l7;
V24=AA*V17;
V52=V24%C;
V53=V52;
if((V53<=0)) goto l17;
V54=C/2;
if((V53<=V54)) goto l17;
V55=V53-C;
R=V55;
goto l7;
l11:V38=A%C;
V39=V38;
if((V39<=0)) goto l13;
V40=C/2;
if((V39<=V40)) goto l13;
V41=V39-C;
R=V41;
goto l10;
l12:R=V39;
goto l10;
l13:if((V39>=0)) goto l12;
V43=abs(V39);
V42=2*V43;
if((V42<C)) goto l12;
V44=V39+C;
R=V44;
goto l10;
l14:AA=V46;
goto l3;
l15:if((V46>=0)) goto l14;
V50=abs(V46);
V49=2*V50;
if((V49<C)) goto l14;
V51=V46+C;
AA=V51;
goto l3;
l16:R=V53;
goto l7;
l17:if((V53>=0)) goto l16;
V57=abs(V53);
V56=2*V57;
if((V56<C)) goto l16;
V58=V53+C;
R=V58;
goto l7;
l18:R=V60;
goto l10;
l19:if((V60>=0)) goto l18;
V64=abs(V60);
V63=2*V64;
if((V63<C)) goto l18;
V65=V60+C;
R=V65;
goto l10;
}
