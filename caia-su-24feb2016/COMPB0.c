#include "dx.h"
void COMPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V25=0,V19=0,V30=0,V31=0,V26=0,V27=0,V34=0,V35=0,V21=0,V46=0,V47=0,V39=0,V48=0,V49=0,V40=0,V50=0,V51=0,V52=0,V53=0,V56=0,V57=0,V3=0,V4=0,V5=0,V6=0,V9=0,V10=0,V15=0,V16=0,V44=0,V45=0,V61=0,V63=0,V65=0;
int A,B,P;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10164;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==787&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=935; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(935,A,jvj+2)*/
if((x[jvj+2]==547)) goto l22;
pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(935,B,jvj+4)*/
if((x[jvj+4]!=547)) goto l32;
pile[v[22]]=936; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(936,A,V15)*/
V15=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(936,B,V16)*/
V16=pile[WZ2]; 
if((V15<=((V16*11)/10)+2)&&(V15>=((V16*9)/10)-2)) goto l30;
if((V15>V16)) goto l30;
l32:if((x[jvj+2]==493)) goto l33;
if((x[jvj+2]!=936)) goto l37;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(935,B,jvj+6)*/
if((x[jvj+6]!=936)) goto l37;
pile[v[22]]=936; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(936,A,V44)*/
V44=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(936,B,V45)*/
V45=pile[WZ2]; 
V39=incon;
pile[v[22]]=1005; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1005,A,V46)*/
V46=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1005,B,V47)*/
V47=pile[WZ2]; 
if((V46<=((V47*11)/10)+2)&&(V46>=((V47*9)/10)-2)) goto l13;
l14:V39=67;
l15:V40=incon;
pile[v[22]]=493; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(493,A,V48)*/
V48=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(493,B,V49)*/
V49=pile[WZ2]; 
if((V48<=((V49*11)/10)+2)&&(V48>=((V49*9)/10)-2)) goto l16;
l17:V40=67;
l18:x[jvj+17]=incon;
if((V39==68)) goto l19;
if((V39!=67)) goto l37;
if((V40!=67)) goto l37;
pile[v[22]]=493; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(493,A,V50)*/
V50=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(493,B,V51)*/
V51=pile[WZ2]; 
if((V50<=V51)) goto l20;
pile[v[22]]=1005; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1005,A,V52)*/
V52=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1005,B,V53)*/
V53=pile[WZ2]; 
if((V52<=V53)) goto l20;
x[jvj+17]=510 ;z[jvj+17]=510;
l20:if((V50>=V51)) goto l21;
pile[v[22]]=1005; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1005,A,V56)*/
V56=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1005,B,V57)*/
V57=pile[WZ2]; 
if((V56>=V57)) goto l21;
x[jvj+17]=515 ;z[jvj+17]=515;
l35:if((V44<=((V45*11)/10)+2)&&(V44>=((V45*9)/10)-2)) goto l36;
l37:x[jvj+9]=610 ;z[jvj+9]=610;
l40:pile[v[22]]=P; pile[WZ1]=jvj+9; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(P,jvj+9,1)*/
x[jvj+11]=incon;
if((x[jvj+9]==610)) goto l38;
if((x[jvj+9]==510)) goto l39;
if((x[jvj+9]!=515)) goto l44;
x[jvj+11]=256 ;z[jvj+11]=256;
l41:pile[v[22]]=1078; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(1078,A,jvj+7)*/
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(109,jvj+7,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=109; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+10,109,jvj+8)*/
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(163,jvj+7,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=163; pile[WZ2]=V61; 
(*f[177])( );     /*CHGC4(jvj+8,163,V61)*/
l42:pile[v[22]]=P; pile[WZ1]=jvj+11; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(P,jvj+11,jvj+8)*/
l43:if((x[jvj+9]!=610)) goto l44;
l47:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:V19=68;
l10:V21=incon;
pile[v[22]]=936; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(936,A,V34)*/
V34=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(936,B,V35)*/
V35=pile[WZ2]; 
if((V34<=((V35*11)/10)+2)&&(V34>=((V35*9)/10)-2)) goto l11;
l12:V21=67;
l3:x[jvj+16]=incon;
if((V19==68)) goto l4;
if((V19!=67)) goto l37;
pile[v[22]]=493; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(493,A,V26)*/
V26=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(493,B,V27)*/
V27=pile[WZ2]; 
if((V26<=V27)) goto l8;
x[jvj+16]=510 ;z[jvj+16]=510;
l8:if((V26<V27)) goto l7;
l9:if(x[jvj+16]==incon) goto l37;
if((x[jvj+16]!=(-99999998))) goto l34;
goto l37;
l4:if((V21==68)) goto l5;
if((V21!=67)) goto l37;
pile[v[22]]=936; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(936,A,V30)*/
V30=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(936,B,V31)*/
V31=pile[WZ2]; 
if((V30>=V31)) goto l6;
x[jvj+16]=510 ;z[jvj+16]=510;
l6:if((V30>V31)) goto l7;
goto l9;
l5:x[jvj+16]=609 ;z[jvj+16]=609;
l34:x[jvj+9]=x[jvj+16] ;z[jvj+9]=z[jvj+16];
goto l40;
l7:x[jvj+16]=515 ;z[jvj+16]=515;
goto l34;
l11:V21=68;
goto l3;
l13:V39=68;
goto l15;
l16:V40=68;
goto l18;
l19:if((V40!=68)) goto l37;
x[jvj+17]=609 ;z[jvj+17]=609;
goto l35;
l21:if(x[jvj+17]==incon) goto l37;
if((x[jvj+17]!=(-99999998))) goto l35;
goto l37;
l22:pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(935,B,jvj+3)*/
if((x[jvj+3]==547)) goto l23;
pile[v[22]]=936; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(936,A,V9)*/
V9=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(936,B,V10)*/
V10=pile[WZ2]; 
if((V9<=((V10*11)/10)+2)&&(V9>=((V10*9)/10)-2)) goto l27;
if((V9<V10)) goto l27;
goto l37;
l23:pile[v[22]]=936; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(936,A,V3)*/
V3=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(936,B,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=876; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(876,A,V5)*/
V5=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(876,B,V6)*/
V6=pile[WZ2]; 
if((V3<=((V4*11)/10)+2)&&(V3>=((V4*9)/10)-2)) goto l24;
l26:if((V3>=V4)) goto l28;
if((V3<=((V4*11)/10)+2)&&(V3>=((V4*9)/10)-2)) goto l28;
if((V5<=((V6*11)/10)+2)&&(V5>=((V6*9)/10)-2)) goto l27;
if((V5<V6)) goto l27;
l29:if((V3<=V4)) goto l31;
if((V3<=((V4*11)/10)+2)&&(V3>=((V4*9)/10)-2)) goto l31;
if((V5<=((V6*11)/10)+2)&&(V5>=((V6*9)/10)-2)) goto l30;
if((V5>V6)) goto l30;
goto l37;
l24:if((V5<=((V6*11)/10)+2)&&(V5>=((V6*9)/10)-2)) goto l25;
goto l26;
l25:x[jvj+9]=609 ;z[jvj+9]=609;
goto l40;
l27:x[jvj+9]=510 ;z[jvj+9]=510;
goto l40;
l28:if((V5>=V6)) goto l29;
if((V5<=((V6*11)/10)+2)&&(V5>=((V6*9)/10)-2)) goto l29;
if((V3<=((V4*11)/10)+2)&&(V3>=((V4*9)/10)-2)) goto l27;
if((V3<V4)) goto l27;
goto l29;
l30:x[jvj+9]=515 ;z[jvj+9]=515;
goto l40;
l31:if((V5<=V6)) goto l37;
if((V5<=((V6*11)/10)+2)&&(V5>=((V6*9)/10)-2)) goto l37;
if((V3<=((V4*11)/10)+2)&&(V3>=((V4*9)/10)-2)) goto l30;
if((V3>V4)) goto l30;
goto l37;
l33:pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(935,B,jvj+5)*/
if((x[jvj+5]!=493)) goto l37;
V19=incon;
pile[v[22]]=493; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(493,A,V24)*/
V24=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(493,B,V25)*/
V25=pile[WZ2]; 
if((V24<=((V25*11)/10)+2)&&(V24>=((V25*9)/10)-2)) goto l1;
l2:V19=67;
goto l10;
l36:x[jvj+9]=x[jvj+17] ;z[jvj+9]=z[jvj+17];
goto l40;
l38:x[jvj+11]=258 ;z[jvj+11]=258;
goto l41;
l39:x[jvj+11]=578 ;z[jvj+11]=578;
goto l41;
l44:pile[v[22]]=447; pile[WZ1]=P; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(447,P,jvj+12)*/
pile[v[22]]=459; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(459,P,jvj+13)*/
x[jvj+14]=d[41];z[jvj+14]=0;
l45:if((x[jvj+14]<=0)) goto l47;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(jvj+15,A,V63)*/
V63=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(jvj+15,B,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=jvj+15; pile[WZ2]=V63; 
(*f[186])( );     /*BTC0(jvj+12,jvj+15,V63)*/
pile[v[22]]=jvj+13; pile[WZ2]=V65; 
(*f[186])( );     /*BTC0(jvj+13,jvj+15,V65)*/
l46:x[jvj+14]=t[x[jvj+14]];
goto l45;
}
