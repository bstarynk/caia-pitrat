#include "dx.h"
void QE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NX=0,V2=0,V1=0,V4=0,V89=0,V77=0,V74=0,V104=0,V110=0,V116=0,V112=0,V111=0,V107=0,V105=0,V109=0,V108=0,V75=0,V96=0,V95=0,V92=0,V93=0,V81=0,V84=0,V83=0,V103=0,V102=0,V99=0,V100=0,V73=0,V61=0,V63=0,V64=0,V67=0,V66=0,V68=0,V69=0,V80=0,V91=0,V87=0,V98=0,V117=0,V119=0,V120=0,V122=0,V118=0,V121=0,V114=0;
int I,X;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
NX=v[146];
if((NX<=0)) goto l4;
V1=incon;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(128,X,jvj+1)*/
for(i=x[jvj+1],V2=0;i>0;i=t[i],V2++)  ;
if((NX<=V2)) goto l1;
V1=1;
l2:v[146]=V1;
l4:V89=I;
l5:if((v[146]!=0)) goto l8;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(128,X,jvj+2)*/
for(i=x[jvj+2],V77=0;i>0;i=t[i],V77++)  ;
if((V77<=0)) goto l8;
V74=x[jvj+2];
V104=1;
V110=49;
V111=incon;
V116=v[V110];
V112=V116%1000000;
if((V112>0)) goto l18;
V111=137643;
l6:v[V110]=V111;
V107=V77+1;
V105=V107-V104;
V109=v[49]%V105;
V108=V104+V109;
V75=V108;
V96=V75;
V95=V74;
l7:if((V96==1)) goto l15;
if((V96<=1)) goto l8;
if((V95<=0)) goto l8;
V92=t[V95];
if((V92<=0)) goto l8;
V93=V96-1;
V95=V92;
V96=V93;
goto l7;
l1:V1=NX;
goto l2;
l8:if((v[146]<=0)) goto l11;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,X,jvj+3)*/
for(i=x[jvj+3],V81=0;i>0;i=t[i],V81++)  ;
if((V81<=0)) goto l11;
V84=incon;
if((v[146]<=V81)) goto l17;
V84=1;
l9:V83=x[jvj+3];
V103=V84;
V102=V83;
l10:if((V103==1)) goto l16;
if((V103<=1)) goto l11;
if((V102<=0)) goto l11;
V99=t[V102];
if((V99<=0)) goto l11;
V100=V103-1;
V102=V99;
V103=V100;
goto l10;
l11:if((v[146]>=0)) goto l14;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(128,X,jvj+4)*/
if((x[jvj+4]<=0)) goto l14;
x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
V73=x[jvj+6];
x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
pile[WZ2]=V73; 
(*f[134])( );     /*OTA0(128,X,V73)*/
l12:pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+5,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=V89; 
(*f[99])( );     /*SPM0(V61,V89,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V63,44,V64)*/
V64=pile[WZ2]; 
V89=V64;
goto l5;
l13:pile[v[22]]=162; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l14;     /*FNDC2(162,jvj+5,V67)*/
V67=pile[WZ2]; 
V66=V67;
pile[v[22]]=V66; pile[WZ1]=V89; 
(*f[99])( );     /*SPM0(V66,V89,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V68,44,V69)*/
V69=pile[WZ2]; 
V89=V69;
goto l5;
l14:J=V89;
if((NX<=0)) goto l3;
V4=v[146]+1;
v[146]=V4;
l3:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l15:V91=s[V95];
x[jvj+7]=V91 ;z[jvj+7]=(V91<=sepcte) ? V91 : 0;
x[jvj+5]=x[jvj+7] ;z[jvj+5]=z[jvj+7];
V80=x[jvj+5];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=V80; 
(*f[134])( );     /*OTA0(128,X,V80)*/
goto l12;
l16:V98=s[V102];
x[jvj+8]=V98 ;z[jvj+8]=(V98<=sepcte) ? V98 : 0;
x[jvj+5]=x[jvj+8] ;z[jvj+5]=z[jvj+8];
V87=x[jvj+5];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=V87; 
(*f[134])( );     /*OTA0(128,X,V87)*/
goto l12;
l17:V84=v[146];
goto l9;
l18:V114=V112%100000;
V121=V112/100000;
V118=V114*10;
V122=V114/10000;
V120=V121+V122;
V119=V120%10;
V117=V118+V119;
V111=V117;
goto l6;
}
