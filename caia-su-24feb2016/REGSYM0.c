#include "dx.h"
void REGSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NT=0,ND=0,V9=0,V38=0,V39=0,V46=0,V47=0,V48=0,V35=0,V12=0,V31=0,V16=0,V26=0,V45=0,V51=0,V63=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V73=0,V65=0,V66=0,V67=0,V68=0,V69=0,V70=0,V71=0,V72=0,V90=0,V89=0;
int A,FF;
int P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=11118;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3987&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; FF=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
ND=NT=x[jvj+11]=x[P]=incon;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(250,158,jvj+10)*/
pile[v[22]]=A; 
(*f[1809])( );     /*NUMEROTENS3(A)*/
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+35]=x[A] ;z[jvj+35]=z[A];
l1:if((x[jvj+35]>0)) goto l2;
x[jvj+9]=x[jvj+4] ;z[jvj+9]=z[jvj+4];
x[jvj+37]=x[A] ;z[jvj+37]=z[A];
l5:if((x[jvj+37]>0)) goto l6;
pile[v[22]]=jvj+9; 
(*f[1809])( );     /*NUMEROTENS3(jvj+9)*/
if((FF==(-9009))) goto l9;
if((FF!=(-5963))) goto l12;
x[jvj+38]=x[A] ;z[jvj+38]=z[A];
l7:if((x[jvj+38]>0)) goto l8;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+9; pile[WZ2]=A; 
(*f[4058])( );     /*TROUVETYPES0(jvj+10,jvj+9,A,ND,NT)*/
ND=pile[WZ3]; NT=pile[WZ4]; 
l12:x[jvj+12]=vo[12];z[jvj+12]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+12,jvj+31)*/
pile[v[22]]=983; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(983,jvj+31,jvj+32)*/
pile[v[22]]=878; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(878,jvj+32,jvj+33)*/
l45:if((x[jvj+33]<=0)) goto l10;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(163,jvj+34,V90)*/
V90=pile[WZ2]; 
pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(163,jvj+12,V89)*/
V89=pile[WZ2]; 
if((V90==V89)) goto l46;
x[jvj+33]=t[x[jvj+33]];
goto l45;
l2:x[jvj+2]=s[x[jvj+35]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+35];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(jvj+2,jvj+3)*/
x[jvj+36]=x[jvj+3] ;z[jvj+36]=z[jvj+3];
l3:if((x[jvj+36]>0)) goto l4;
x[jvj+35]=t[x[jvj+35]];
goto l1;
l4:x[jvj+5]=s[x[jvj+36]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+36];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+36]=t[x[jvj+36]];
goto l3;
l6:x[jvj+2]=s[x[jvj+37]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+37];
pile[v[22]]=jvj+2; pile[WZ1]=510; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+2,510,1)*/
x[jvj+37]=t[x[jvj+37]];
goto l5;
l8:x[jvj+6]=s[x[jvj+38]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+38];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[1229])( );     /*ENSOP0(jvj+6,jvj+7)*/
pile[WZ1]=1197; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+6,1197,jvj+7)*/
pile[WZ1]=jvj+8; 
(*f[4057])( );     /*ENSNUM0(jvj+6,jvj+8)*/
pile[WZ1]=195; pile[WZ2]=jvj+8; 
(*f[34])( );     /*CHGC0(jvj+6,195,jvj+8)*/
x[jvj+38]=t[x[jvj+38]];
goto l7;
l9:pile[v[22]]=jvj+10; pile[WZ1]=jvj+9; pile[WZ2]=A; pile[WZ3]=jvj+11; 
(*f[4059])( );     /*TROUVETYPARITH0(jvj+10,jvj+9,A,jvj+11,NT,ND)*/
NT=pile[WZ4]; ND=pile[WZ5]; 
goto l12;
l11:x[jvj+14]=26098 ;z[jvj+14]=26098;
l13:pile[v[22]]=878; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(878,jvj+14,jvj+15)*/
l14:if((x[jvj+15]<=0)) goto l40;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=163; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+16,V9)*/
V9=pile[WZ2]; 
if((V9!=(-7141))) goto l15;
pile[v[22]]=jvj+16; pile[WZ1]=P; 
(*f[378])( );     /*CPI0(jvj+16,P)*/
pile[v[22]]=128; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(128,P,jvj+22)*/
l21:if((x[jvj+22]>0)) goto l22;
if(x[jvj+11]!=incon) goto l33;
l36:x[jvj+42]=x[jvj+9] ;z[jvj+42]=z[jvj+9];
l35:if((x[jvj+42]<=0)) goto l40;
x[jvj+26]=s[x[jvj+42]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+42];
pile[v[22]]=642; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(642,jvj+26,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[1290])( );if(v[102]) goto l37;     /*DEPEXP0(jvj+26,jvj+27)*/
x[jvj+28]=x[jvj+27] ;z[jvj+28]=z[jvj+27];
pile[v[22]]=jvj+28; pile[WZ1]=642; pile[WZ2]=V51; 
(*f[43])( );     /*CHGC2(jvj+28,642,V51)*/
pile[v[22]]=P; pile[WZ1]=1179; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(P,1179,jvj+28)*/
l37:x[jvj+42]=t[x[jvj+42]];
goto l35;
l15:x[jvj+15]=t[x[jvj+15]];
goto l14;
l17:x[jvj+17]=s[x[jvj+39]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+39];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[887])( );     /*VARND0(jvj+17,jvj+18)*/
for(i=x[jvj+18],V39=0;i>0;i=t[i],V39++)  ;
if(V39>V38) V38=V39;
x[jvj+39]=t[x[jvj+39]];
l16:if((x[jvj+39]>0)) goto l17;
if((V38==(-999999))) goto l23;
for(i=x[A],V45=0;i>0;i=t[i],V45++)  ;
pile[v[22]]=128; pile[WZ1]=jvj+21; 
(*f[71])( );     /*ENLV0(128,jvj+21)*/
x[jvj+40]=x[A] ;z[jvj+40]=z[A];
l18:if((x[jvj+40]>0)) goto l19;
pile[v[22]]=jvj+21; pile[WZ1]=510; pile[WZ2]=V45; 
(*f[43])( );     /*CHGC2(jvj+21,510,V45)*/
pile[WZ1]=515; pile[WZ2]=V38; 
(*f[43])( );     /*CHGC2(jvj+21,515,V38)*/
l23:x[jvj+22]=t[x[jvj+22]];
goto l21;
l19:x[jvj+17]=s[x[jvj+40]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+40];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(642,jvj+17,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; 
(*f[887])( );     /*VARND0(jvj+17,jvj+19)*/
for(i=x[jvj+19],V47=0;i>0;i=t[i],V47++)  ;
pile[v[22]]=117; pile[WZ1]=V46; pile[WZ2]=667; pile[WZ3]=V47; pile[WZ4]=jvj+20; 
(*f[391])( );     /*QUADRI10(117,V46,667,V47,jvj+20)*/
V48=x[jvj+19];
pile[v[22]]=V48; pile[WZ1]=355; pile[WZ2]=jvj+20; 
(*f[4061])( );     /*LIST0(V48,355,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(jvj+21,128,jvj+20)*/
l20:x[jvj+40]=t[x[jvj+40]];
goto l18;
l22:x[jvj+21]=s[x[jvj+22]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+22];
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+21,V35)*/
V35=pile[WZ2]; 
if((V35==(-595))) goto l24;
if((V35==(-665))) goto l25;
if((V35==(-630))) goto l26;
if((V35!=(-732))) goto l27;
for(i=x[A],V16=0;i>0;i=t[i],V16++)  ;
pile[v[22]]=jvj+21; pile[WZ1]=130; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(jvj+21,130,V16)*/
l27:if(ND!=incon) goto l28;
l29:if(NT!=incon) goto l30;
l31:if((V35==(-662))) goto l32;
if((V35!=(-7362))) goto l23;
if((FF!=(-5963))) goto l23;
V38=(-999999);
x[jvj+39]=x[A] ;z[jvj+39]=z[A];
goto l16;
l24:pile[v[22]]=101; pile[WZ1]=1; pile[WZ2]=A; pile[WZ3]=jvj+21; pile[WZ4]=1; 
(*f[4060])( );     /*ENCHAINE0(101,1,A,jvj+21,1)*/
goto l27;
l25:for(i=x[jvj+9],V12=0;i>0;i=t[i],V12++)  ;
pile[v[22]]=jvj+21; pile[WZ1]=130; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(jvj+21,130,V12)*/
goto l27;
l26:for(i=x[jvj+9],V31=0;i>0;i=t[i],V31++)  ;
pile[v[22]]=101; pile[WZ1]=1; pile[WZ2]=jvj+9; pile[WZ3]=jvj+21; pile[WZ4]=1; 
(*f[4060])( );     /*ENCHAINE0(101,1,jvj+9,jvj+21,1)*/
pile[v[22]]=jvj+21; pile[WZ1]=510; pile[WZ2]=V31; 
(*f[43])( );     /*CHGC2(jvj+21,510,V31)*/
pile[WZ1]=667; 
(*f[43])( );     /*CHGC2(jvj+21,667,V31)*/
goto l27;
l28:if((V35!=(-3496))) goto l29;
pile[v[22]]=jvj+21; pile[WZ1]=130; pile[WZ2]=ND; 
(*f[43])( );     /*CHGC2(jvj+21,130,ND)*/
goto l29;
l30:if((V35!=(-3141))) goto l31;
pile[v[22]]=jvj+21; pile[WZ1]=130; pile[WZ2]=NT; 
(*f[43])( );     /*CHGC2(jvj+21,130,NT)*/
goto l23;
l32:if((FF!=(-5963))) goto l23;
for(i=x[A],V26=0;i>0;i=t[i],V26++)  ;
pile[v[22]]=101; pile[WZ1]=1; pile[WZ2]=A; pile[WZ3]=jvj+21; pile[WZ4]=2; 
(*f[4060])( );     /*ENCHAINE0(101,1,A,jvj+21,2)*/
pile[v[22]]=jvj+21; pile[WZ1]=510; pile[WZ2]=V26; 
(*f[43])( );     /*CHGC2(jvj+21,510,V26)*/
pile[WZ1]=667; 
(*f[43])( );     /*CHGC2(jvj+21,667,V26)*/
goto l23;
l33:if((FF!=(-9009))) goto l36;
x[jvj+41]=x[jvj+11] ;z[jvj+41]=z[jvj+11];
l34:if((x[jvj+41]<=0)) goto l36;
x[jvj+23]=s[x[jvj+41]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+41];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=455; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,455,102,jvj+24,jvj+25)*/
pile[v[22]]=P; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(P,455,jvj+25)*/
x[jvj+41]=t[x[jvj+41]];
goto l34;
l39:x[jvj+29]=s[x[jvj+43]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+43];
V63=x[jvj+29];
pile[v[22]]=jvj+29; pile[WZ1]=0; pile[WZ2]=V63; pile[WZ3]=510; 
(*f[285])( );     /*ENLY0(jvj+29,0,V63,510,V57,V58)*/
V57=pile[WZ4]; V58=pile[WZ5]; 
pile[WZ1]=V58; pile[WZ2]=V57; pile[WZ3]=515; 
(*f[285])( );     /*ENLY0(jvj+29,V58,V57,515,V59,V60)*/
V59=pile[WZ4]; V60=pile[WZ5]; 
pile[WZ1]=V60; pile[WZ2]=V59; pile[WZ3]=642; 
(*f[285])( );     /*ENLY0(jvj+29,V60,V59,642,V61,V62)*/
V61=pile[WZ4]; V62=pile[WZ5]; 
x[jvj+43]=t[x[jvj+43]];
l38:if((x[jvj+43]>0)) goto l39;
x[jvj+44]=x[A] ;z[jvj+44]=z[A];
l41:if((x[jvj+44]>0)) goto l42;
if(x[P]!=incon) goto l44;
l43:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l40:x[jvj+43]=x[jvj+9] ;z[jvj+43]=z[jvj+9];
goto l38;
l42:x[jvj+30]=s[x[jvj+44]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+44];
V73=x[jvj+30];
pile[v[22]]=jvj+30; pile[WZ1]=0; pile[WZ2]=V73; pile[WZ3]=195; 
(*f[285])( );     /*ENLY0(jvj+30,0,V73,195,V65,V66)*/
V65=pile[WZ4]; V66=pile[WZ5]; 
pile[WZ1]=V66; pile[WZ2]=V65; pile[WZ3]=510; 
(*f[285])( );     /*ENLY0(jvj+30,V66,V65,510,V67,V68)*/
V67=pile[WZ4]; V68=pile[WZ5]; 
pile[WZ1]=V68; pile[WZ2]=V67; pile[WZ3]=642; 
(*f[285])( );     /*ENLY0(jvj+30,V68,V67,642,V69,V70)*/
V69=pile[WZ4]; V70=pile[WZ5]; 
pile[WZ1]=V70; pile[WZ2]=V69; pile[WZ3]=1197; 
(*f[285])( );     /*ENLY0(jvj+30,V70,V69,1197,V71,V72)*/
V71=pile[WZ4]; V72=pile[WZ5]; 
x[jvj+44]=t[x[jvj+44]];
goto l41;
l44:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l46:x[jvj+13]=x[jvj+34] ;z[jvj+13]=z[jvj+34];
pile[v[22]]=1179; pile[WZ1]=jvj+13; 
(*f[71])( );     /*ENLV0(1179,jvj+13)*/
l10:x[jvj+14]=incon;
if((FF==(-5963))) goto l11;
if((FF!=(-9009))) goto l40;
x[jvj+14]=26236 ;z[jvj+14]=26236;
goto l13;
}
