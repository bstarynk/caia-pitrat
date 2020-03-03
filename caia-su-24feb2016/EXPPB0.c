#include "dx.h"
void EXPPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V47=0,V35=0,FF=0,V4=0,K=0,V9=0,V14=0,V22=0,V21=0,V25=0,V46=0,V45=0,V26=0,V28=0,V27=0,R=0,DX=0,V37=0,V38=0,V19=0,V33=0,V1=0,V56=0,V57=0,V59=0,V58=0,V61=0,V63=0,V65=0;
int E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=10626;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==138&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[E]=x[jvj+24]=DX=x[jvj+3]=incon;
pile[v[22]]=0; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(0,(-2986),V47)*/
V47=pile[WZ2]; 
V56=V47-1;
V57=0;
l41:if((V57<=V56)) goto l42;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V35=bh[v[1]][0];
if((V35!=32)) goto l1;
x[jvj+32]=0 ;z[jvj+32]=0;
x[E]=x[jvj+32] ;z[E]=z[jvj+32];
l1:FF=((-5963));
V4=bh[v[1]][0];
if((V4<48)) goto l40;
if((V4>57)) goto l40;
V1=135;
l2:if((V1==134)) goto l3;
l30:if(x[E]==incon) goto l31;
l39:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; v[102]=0;return;
l3:pile[v[22]]=(-1); pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l30;     /*SMA0((-1),64,67,jvj+3)*/
(*f[107])( );     /*CRC0((-1),K)*/
K=pile[WZ1]; 
V26=bh[v[1]][K];
if((V26==32)) goto l23;
if((V26!=46)) goto l24;
if(x[jvj+3]==324||x[jvj+3]==301||x[jvj+3]==104||x[jvj+3]==528||x[jvj+3]==981) goto l24;
pile[v[22]]=K; 
(*f[131])( );     /*SMV0(K,V37,V38)*/
V37=pile[WZ1]; V38=pile[WZ2]; 
x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=878; pile[WZ1]=jvj+3; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(878,jvj+3,jvj+20)*/
l19:if((x[jvj+20]>0)) goto l20;
x[jvj+24]=x[jvj+21] ;z[jvj+24]=z[jvj+21];
DX=V38;
goto l30;
l5:pile[v[22]]=970; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(970,jvj+4,jvj+5)*/
if((x[jvj+5]==324)) goto l4;
l12:x[jvj+33]=t[x[jvj+33]];
l11:if((x[jvj+33]<=0)) goto l10;
x[jvj+4]=s[x[jvj+33]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+33];
if((x[jvj+3]==324)) goto l5;
if((x[jvj+3]==104)) goto l6;
if((x[jvj+3]!=528)) goto l4;
pile[v[22]]=1249; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1249,jvj+4,jvj+7)*/
if((x[jvj+7]==68)) goto l4;
goto l12;
l6:pile[v[22]]=970; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(970,jvj+4,jvj+6)*/
if((x[jvj+6]==324)) goto l12;
l4:pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+4,V9)*/
V9=pile[WZ2]; 
if((V9==(-7141))) goto l12;
l7:pile[v[22]]=1923; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1923,jvj+4,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==901) goto l12;
pile[v[22]]=498; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,jvj+4,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=109; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+29,109,jvj+14)*/
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(163,jvj+4,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=163; pile[WZ2]=V61; 
(*f[177])( );     /*CHGC4(jvj+14,163,V61)*/
l13:pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
goto l12;
l9:x[jvj+8]=s[x[jvj+10]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+10];
pile[v[22]]=896; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(896,jvj+8,jvj+11)*/
if((x[jvj+11]!=0)) goto l10;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(905,jvj+8,V14)*/
V14=pile[WZ2]; 
if((V14!=FF)) goto l10;
pile[v[22]]=878; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(878,jvj+8,jvj+12)*/
x[jvj+33]=x[jvj+12] ;z[jvj+33]=z[jvj+12];
goto l11;
l10:x[jvj+10]=t[x[jvj+10]];
l8:if((x[jvj+10]>0)) goto l9;
x[E]=x[jvj+13] ;z[E]=z[jvj+13];
goto l39;
l14:x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=878; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(878,jvj+3,jvj+16)*/
l15:if((x[jvj+16]>0)) goto l16;
x[jvj+24]=x[jvj+17] ;z[jvj+24]=z[jvj+17];
l25:DX=K;
goto l30;
l16:x[jvj+15]=s[x[jvj+16]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+16];
pile[v[22]]=163; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l43;     /*FNDC1(163,jvj+15,V25)*/
V25=pile[WZ2]; 
if((V25==(-7141))) goto l17;
l43:pile[v[22]]=498; pile[WZ1]=jvj+15; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(498,jvj+15,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=109; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+30,109,jvj+18)*/
pile[v[22]]=163; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+15,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=163; pile[WZ2]=V63; 
(*f[177])( );     /*CHGC4(jvj+18,163,V63)*/
l18:pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+18)*/
l17:x[jvj+16]=t[x[jvj+16]];
goto l15;
l20:x[jvj+19]=s[x[jvj+20]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+20];
pile[v[22]]=897; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(897,jvj+19,V45)*/
V45=pile[WZ2]; 
if((V45!=V37)) goto l21;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(163,jvj+19,V46)*/
V46=pile[WZ2]; 
if((V46==(-7141))) goto l21;
l44:pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(498,jvj+19,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=109; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+31,109,jvj+22)*/
pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(163,jvj+19,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=163; pile[WZ2]=V65; 
(*f[177])( );     /*CHGC4(jvj+22,163,V65)*/
l22:pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+22)*/
l21:x[jvj+20]=t[x[jvj+20]];
goto l19;
l23:if(x[jvj+3]==324||x[jvj+3]==301||x[jvj+3]==104||x[jvj+3]==528||x[jvj+3]==981) goto l24;
V28=K+1;
V27=bh[v[1]][V28];
if((V27==32)) goto l24;
pile[v[22]]=K; 
(*f[131])( );     /*SMV0(K,R,DX)*/
R=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=163; pile[WZ3]=R; pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(109,jvj+3,163,R,jvj+23)*/
pile[v[22]]=20; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[409])( );     /*TRI14(20,jvj+23,jvj+24)*/
goto l30;
l24:V19=bh[v[1]][K];
if(V19!=32&&V19!=43&&V19!=44&&V19!=59) goto l25;
if(x[jvj+3]==324||x[jvj+3]==301||x[jvj+3]==104||x[jvj+3]==528||x[jvj+3]==981) goto l25;
if(V19==44||V19==59) goto l14;
V22=K+1;
V21=bh[v[1]][V22];
if((V21==32)) goto l14;
goto l25;
l27:x[jvj+26]=s[x[jvj+28]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+28];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+26)*/
x[jvj+28]=t[x[jvj+28]];
l26:if((x[jvj+28]>0)) goto l27;
x[jvj+34]=x[jvj+24] ;z[jvj+34]=z[jvj+24];
l28:if((x[jvj+34]>0)) goto l29;
x[E]=x[jvj+25] ;z[E]=z[jvj+25];
goto l39;
l29:x[jvj+27]=s[x[jvj+34]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+34];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+27; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+27)*/
x[jvj+34]=t[x[jvj+34]];
goto l28;
l31:if(x[jvj+24]!=incon) goto l32;
l34:if(x[jvj+3]!=incon) goto l35;
l36:if(x[jvj+24]!=incon) goto l37;
l38:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; v[102]=1;return;
l32:if(DX!=incon) goto l33;
goto l34;
l33:V33=bh[v[1]][DX];
if((V33!=43)) goto l34;
pile[v[22]]=FF; pile[WZ1]=jvj+28; 
(*f[434])( );if(v[102]) goto l34;     /*EXPPB1(FF,jvj+28)*/
x[jvj+25]=0 ;z[jvj+25]=0;
goto l26;
l35:if(x[jvj+3]!=324&&x[jvj+3]!=301&&x[jvj+3]!=104&&x[jvj+3]!=528&&x[jvj+3]!=981) goto l36;
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(457,324,jvj+10)*/
goto l8;
l37:x[E]=x[jvj+24] ;z[E]=z[jvj+24];
goto l39;
l40:V1=134;
goto l2;
l42:V59=c[0][V57];
V58=V59;
putchar(V58);
V57++;
goto l41;
}
