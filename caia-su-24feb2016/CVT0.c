#include "dx.h"
void CVT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int II=0,V26=0,V25=0,V6=0,V3=0,V2=0,V1=0,V5=0,V4=0,V7=0,J=0,V19=0,V17=0,V16=0,V15=0,M=0,V21=0,V22=0,KK=0,V23=0,V9=0,V11=0,V10=0,V12=0,F=0,V32=0,V30=0,V29=0,V37=0,V35=0,V34=0,V42=0,V40=0,V39=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V51=0,V49=0,V52=0,V53=0,V50=0,V24=0,V54=0,V55=0;
int S,BL,K;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; BL=pile[v[22]+1]; K=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[S]==67)) goto l1;
if((x[S]!=68)) goto l10;
V43=0;
v[2]=v[1];
V44=V43;
v[1]=4;
pile[v[22]]=(-3023); pile[WZ1]=V44; 
(*f[64])( );     /*SRA2((-3023),V44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V45,62,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V46; 
(*f[64])( );     /*SRA2((-4539),V46,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V47,0,V48)*/
V48=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V48; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V48,406,130)*/
V57=0;
V58=v[17];
v[2]=v[1];
V59=V57;
v[1]=4;
pile[v[22]]=(-4539); pile[WZ1]=V59; 
(*f[64])( );     /*SRA2((-4539),V59,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V60,0,V61)*/
V61=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V61; pile[WZ1]=1146; pile[WZ2]=2; 
(*f[67])( );     /*SPA0(V61,1146,2)*/
fscanf(fx[2],"%s",res);
fclose(fx[2]);
v[17]=V58;
V62=0;
v[2]=v[1];
V63=V62;
v[1]=4;
pile[v[22]]=(-4501); pile[WZ1]=V63; 
(*f[64])( );     /*SRA2((-4501),V63,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V64; 
(*f[64])( );     /*SRA2((-4539),V64,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V65,0,V66)*/
V66=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V66; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V66,406,130)*/
V51=0;
l17:V49=res[V51];
if((V49!=0)) goto l19;
V52=V51-1;
if((V51<=0)) goto l20;
V53=0;
l18:if((V53>V52)) goto l20;
V50=res[V53];
if((V50==0)) goto l19;
V53++;
goto l18;
l1:II=0;
l2:V6=x[BL];
if((V6>sepnouv)) goto l4;
if((V3=w[x[BL]][0])==incon) goto l4;
V2=V3;
V1=(-V2);
pile[v[22]]=V1; pile[WZ1]=jvj+1; 
(*f[90])( );if(v[102]) goto l4;     /*SRF0(V1,jvj+1)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+1,V5)*/
V5=pile[WZ2]; 
V4=II+V5;
V7=V4-1;
V32=V7;
x[jvj+4]=x[jvj+1] ;z[jvj+4]=z[jvj+1];
l11:pile[v[22]]=162; pile[WZ1]=jvj+4; 
(*f[219])( );if(v[102]) goto l12;     /*FNDC2(162,jvj+4,V30)*/
V30=pile[WZ2]; 
srt[V32]=V30;
l12:if((V32<=II)) goto l3;
pile[v[22]]=153; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(153,jvj+4,jvj+5)*/
V29=V32-1;
x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
V32=V29;
goto l11;
l3:pile[v[22]]=K; pile[WZ1]=V4; pile[WZ2]=397; 
(*f[632])( );     /*SRN1(K,V4,397,J)*/
J=pile[WZ3]; 
l6:if((x[S]!=68)) goto l8;
V9=(-(-12141));
pile[v[22]]=V9; pile[WZ1]=jvj+3; 
(*f[90])( );if(v[102]) goto l8;     /*SRF0(V9,jvj+3)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+3,V11)*/
V11=pile[WZ2]; 
V10=V11+J;
V12=V10+1;
V42=V10;
x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
l15:pile[v[22]]=162; pile[WZ1]=jvj+8; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(162,jvj+8,V40)*/
V40=pile[WZ2]; 
srt[V42]=V40;
l16:if((V42<=J)) goto l7;
pile[v[22]]=153; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(153,jvj+8,jvj+9)*/
V39=V42-1;
x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
V42=V39;
goto l15;
l4:V19=V6-sepfacts;
if((V19<=0)) goto l10;
if((V17=w[x[BL]][0])==incon) goto l10;
V16=V17;
V15=(-V16);
pile[v[22]]=V15; pile[WZ1]=jvj+2; 
(*f[90])( );if(v[102]) goto l10;     /*SRF0(V15,jvj+2)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+2,M)*/
M=pile[WZ2]; 
V21=II+M;
V22=V21+1;
V37=V21;
x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
l13:pile[v[22]]=162; pile[WZ1]=jvj+6; 
(*f[219])( );if(v[102]) goto l14;     /*FNDC2(162,jvj+6,V35)*/
V35=pile[WZ2]; 
srt[V37]=V35;
l14:if((V37<=II)) goto l5;
pile[v[22]]=153; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(153,jvj+6,jvj+7)*/
V34=V37-1;
x[jvj+6]=x[jvj+7] ;z[jvj+6]=z[jvj+7];
V37=V34;
goto l13;
l5:pile[v[22]]=V19; pile[WZ1]=V22; pile[WZ2]=397; 
(*f[632])( );     /*SRN1(V19,V22,397,KK)*/
KK=pile[WZ3]; 
V23=KK+1;
srt[KK]=84;
pile[v[22]]=K; pile[WZ1]=V23; 
(*f[632])( );     /*SRN1(K,V23,397,J)*/
J=pile[WZ3]; 
goto l6;
l7:F=V12;
l9:srt[F]=0;
l10:v[0]=jvj; v[22]-=3; return;
l8:F=J;
goto l9;
l19:V51++;
if((V51<=100)) goto l17;
goto l10;
l20:V24=V52;
V54=0;
l21:if((V54<=V24)) goto l22;
V26=V24+1;
V25=V26+1;
II=V25;
srt[V26]=47;
goto l2;
l22:V55=res[V54];
srt[V54]=V55;
V54++;
goto l21;
}
