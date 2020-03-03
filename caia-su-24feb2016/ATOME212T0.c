#include "dx.h"
void ATOME212T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,V32=0,I=0,Q=0,V53=0,V40=0,V14=0,JJ=0,V55=0,V15=0,V43=0,V45=0,N=0,V46=0,V12=0,J=0,V47=0,V10=0,V17=0,V48=0,P=0,V16=0,RS=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=53;
x[jvj+1]=20212;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3562&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=25)) goto l33;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(870,R,V17)*/
V17=pile[WZ2]; 
if((V17!=1)) goto l33;
pile[v[22]]=1188; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(1188,R,jvj+29)*/
if((x[jvj+29]!=68)) goto l33;
pile[v[22]]=1358; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(1358,R,jvj+30)*/
if((x[jvj+30]!=68)) goto l33;
x[jvj+31]=vo[14];z[jvj+31]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(642,jvj+31,V48)*/
V48=pile[WZ2]; 
x[jvj+32]=d[20];z[jvj+32]=0;
l28:if((x[jvj+32]<=0)) goto l33;
x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=268; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(268,jvj+33,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+34,R,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[887])( );     /*VARND0(jvj+35,jvj+36)*/
if((x[jvj+36]!=0)) goto l29;
pile[v[22]]=jvj+33; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+33,R,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+35; pile[WZ2]=jvj+2; pile[WZ3]=jvj+38; 
(*f[3564])( );if(v[102]) goto l29;     /*ISOLPRD0(jvj+37,jvj+35,jvj+2,jvj+38)*/
x[jvj+5]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l1;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
l30:x[jvj+53]=x[jvj+5] ;z[jvj+53]=z[jvj+5];
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+48]=x[jvj+53] ;z[jvj+48]=z[jvj+53];
l8:if((x[jvj+48]>0)) goto l9;
x[jvj+17]=0 ;z[jvj+17]=0;
l12:if((x[jvj+13]<=0)) goto l31;
x[jvj+15]=s[x[jvj+13]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+13];
pile[v[22]]=195; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(195,jvj+15,jvj+16)*/
V53=x[jvj+16];
l13:if((V53>0)) goto l14;
x[jvj+13]=t[x[jvj+13]];
goto l12;
l1:pile[v[22]]=20; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[409])( );     /*TRI14(20,jvj+2,jvj+5)*/
goto l30;
l3:x[jvj+6]=s[x[jvj+47]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+47];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+6,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V36; 
(*f[207])( );     /*PLUE2(jvj+7,V36)*/
l4:x[jvj+47]=t[x[jvj+47]];
l2:if((x[jvj+47]>0)) goto l3;
x[jvj+49]=x[jvj+7] ;z[jvj+49]=z[jvj+7];
l11:if((x[jvj+49]==(-99999998))) goto l10;
x[jvj+40]=x[jvj+49] ;z[jvj+40]=z[jvj+49];
pile[v[22]]=jvj+40; pile[WZ1]=195; pile[WZ2]=jvj+14; 
(*f[300])( );     /*TRI10(jvj+40,195,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
l10:x[jvj+48]=t[x[jvj+48]];
goto l8;
l6:if(x[jvj+49]==incon) goto l7;
goto l11;
l7:x[jvj+49]=(-99999998);
goto l10;
l9:x[jvj+8]=s[x[jvj+48]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+48];
x[jvj+49]=incon;
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+8,V32)*/
V32=pile[WZ2]; 
I=V32;
if((I==0)) goto l5;
pile[v[22]]=I; pile[WZ1]=jvj+9; 
(*f[992])( );if(v[102]) goto l5;     /*FACTPREM0(I,jvj+9)*/
x[jvj+49]=x[jvj+9] ;z[jvj+49]=z[jvj+9];
l5:pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+8,jvj+10)*/
if((x[jvj+10]!=484)) goto l6;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+8,jvj+11)*/
pile[v[22]]=1310; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1310,jvj+11,jvj+12)*/
x[jvj+47]=x[jvj+12] ;z[jvj+47]=z[jvj+12];
if((x[jvj+47]==0)) goto l6;
x[jvj+7]=0 ;z[jvj+7]=0;
goto l2;
l14:Q=s[V53];
pile[v[22]]=jvj+17; pile[WZ1]=Q; 
(*f[207])( );     /*PLUE2(jvj+17,Q)*/
V53=t[V53];
goto l13;
l16:x[jvj+50]=t[x[jvj+50]];
l15:if((x[jvj+50]<=0)) goto l22;
x[jvj+21]=s[x[jvj+50]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+50];
pile[v[22]]=117; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+21,V40)*/
V40=pile[WZ2]; 
if((V40!=P)) goto l16;
V14=999999;
pile[v[22]]=195; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(195,jvj+21,jvj+22)*/
V55=x[jvj+22];
l17:if((V55>0)) goto l18;
if((V14==999999)) goto l22;
if((V14==999)) goto l22;
V12=V14;
l27:if((V12==(-99999998))) goto l26;
J=V12;
pile[v[22]]=jvj+26; pile[WZ1]=117; pile[WZ2]=J; 
(*f[186])( );     /*BTC0(jvj+26,117,J)*/
l26:x[jvj+52]=t[x[jvj+52]];
l24:if((x[jvj+52]>0)) goto l25;
pile[v[22]]=117; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(117,jvj+26,V47)*/
V47=pile[WZ2]; 
V10=V47;
if((V10<=0)) goto l32;
pile[v[22]]=V10; pile[WZ1]=P; 
(*f[1006])( );if(v[102]) goto l32;     /*POWER0(V10,P,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=jvj+38; pile[WZ1]=V16; 
(*f[3563])( );if(v[102]) goto l32;     /*EVALMODC0(jvj+38,V16,RS)*/
RS=pile[WZ2]; 
if((RS==0)) goto l32;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+45)*/
pile[v[22]]=V48; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V48,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3562; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3562,246,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=20212; pile[WZ2]=218; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,20212,218,jvj+44)*/
pile[v[22]]=jvj+45; pile[WZ1]=(-20); pile[WZ2]=jvj+44; pile[WZ3]=159; pile[WZ4]=jvj+46; 
(*f[298])( );     /*TRIENS1(jvj+45,(-20),jvj+44,159,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+46,1,158,jvj+39)*/
pile[v[22]]=jvj+39; 
(*f[1559])( );     /*CONTRADICTION0(jvj+39)*/
l32:x[jvj+17]=t[x[jvj+17]];
l31:if((x[jvj+17]<=0)) goto l29;
P=s[x[jvj+17]];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(0,117,jvj+26)*/
x[jvj+52]=x[jvj+53] ;z[jvj+52]=z[jvj+53];
goto l24;
l18:JJ=s[V55];
V15=abs(JJ);
if(V15<V14) V14=V15;
V55=t[V55];
goto l17;
l20:x[jvj+51]=t[x[jvj+51]];
l19:if((x[jvj+51]<=0)) goto l21;
x[jvj+23]=s[x[jvj+51]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+51];
pile[v[22]]=510; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+23,V43)*/
V43=pile[WZ2]; 
if((V43!=P)) goto l20;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(515,jvj+23,V46)*/
V46=pile[WZ2]; 
V12=V46;
l21:pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+18,jvj+25)*/
if((x[jvj+25]!=484)) goto l22;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[200])( );if(v[102]) goto l22;     /*NDD0(jvj+18,jvj+19)*/
pile[v[22]]=1310; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1310,jvj+19,jvj+20)*/
x[jvj+50]=x[jvj+20] ;z[jvj+50]=z[jvj+20];
goto l15;
l22:if(V12==incon) goto l23;
goto l27;
l23:V12=(-99999998);
goto l26;
l25:x[jvj+18]=s[x[jvj+52]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+52];
V12=incon;
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+18,V45)*/
V45=pile[WZ2]; 
N=V45;
pile[v[22]]=N; pile[WZ1]=jvj+24; 
(*f[1007])( );if(v[102]) goto l21;     /*DECFACTPREM0(N,jvj+24)*/
x[jvj+51]=x[jvj+24] ;z[jvj+51]=z[jvj+24];
goto l19;
l29:x[jvj+32]=t[x[jvj+32]];
goto l28;
l33:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
