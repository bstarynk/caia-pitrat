#include "dx.h"
void ATOME21T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V20=0,V31=0,V27=0,V28=0,V29=0,V30=0,V19=0,V14=0,V24=0,V8=0,V7=0;
int P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20021;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3443&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+16,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=1081; pile[WZ1]=P; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1081,P,jvj+17)*/
for(i=x[jvj+17],V8=0;i>0;i=t[i],V8++)  ;
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+37]=x[jvj+17] ;z[jvj+37]=z[jvj+17];
l1:if((x[jvj+37]>0)) goto l2;
pile[v[22]]=971; pile[WZ1]=P; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(971,P,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==1081) goto l19;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+37]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+37];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
x[jvj+38]=x[jvj+4] ;z[jvj+38]=z[jvj+4];
l3:if((x[jvj+38]>0)) goto l4;
x[jvj+37]=t[x[jvj+37]];
goto l1;
l4:x[jvj+6]=s[x[jvj+38]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+38];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
x[jvj+38]=t[x[jvj+38]];
goto l3;
l8:x[jvj+40]=t[x[jvj+40]];
l7:if((x[jvj+40]<=0)) goto l11;
x[jvj+6]=s[x[jvj+40]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+40];
x[jvj+39]=x[jvj+22] ;z[jvj+39]=z[jvj+22];
l5:if((x[jvj+39]<=0)) goto l10;
x[jvj+7]=s[x[jvj+39]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+39];
if((x[jvj+7]==x[jvj+9])) goto l6;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(jvj+7,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l8;
l6:x[jvj+39]=t[x[jvj+39]];
goto l5;
l11:pile[v[22]]=jvj+11; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+9)*/
l10:x[jvj+41]=t[x[jvj+41]];
l9:if((x[jvj+41]<=0)) goto l15;
x[jvj+9]=s[x[jvj+41]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+41];
pile[v[22]]=870; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,jvj+9,V13)*/
V13=pile[WZ2]; 
if((V13!=1)) goto l11;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+9,jvj+10)*/
x[jvj+40]=x[jvj+10] ;z[jvj+40]=z[jvj+10];
goto l7;
l13:if((V19<4)) goto l14;
l17:x[jvj+22]=t[x[jvj+22]];
l15:if((x[jvj+22]>0)) goto l16;
pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=110; pile[WZ3]=(-624); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,P,110,(-624),jvj+35)*/
pile[v[22]]=V24; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V24,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3443; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3443,246,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=20021; pile[WZ2]=218; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,20021,218,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=jvj+34; pile[WZ3]=159; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,159,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+36,1,158,jvj+23)*/
pile[v[22]]=jvj+11; pile[WZ1]=1081; pile[WZ2]=jvj+24; 
(*f[300])( );     /*TRI10(jvj+11,1081,jvj+24)*/
pile[v[22]]=jvj+23; 
(*f[1047])( );     /*EVENEMENT0(jvj+23,1081,jvj+24)*/
goto l21;
l14:V31=x[jvj+12];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=36; 
(*f[41])( );     /*SRB0(10,0,36,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=20021; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,20021,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=80; 
(*f[42])( );     /*SRA1(135,V28,80,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V31; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(20,V31,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
if((V19!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l16:x[jvj+12]=s[x[jvj+22]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+22];
pile[v[22]]=870; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(870,jvj+12,V14)*/
V14=pile[WZ2]; 
if((V14>5)) goto l18;
pile[v[22]]=1070; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1070,jvj+12,jvj+13)*/
if((x[jvj+13]==68)) goto l18;
l22:pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=110; pile[WZ3]=(-624); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,P,110,(-624),jvj+29)*/
pile[v[22]]=V24; pile[WZ1]=858; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V24,858,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3443; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3443,246,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=20021; pile[WZ2]=218; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,20021,218,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=(-20); pile[WZ2]=jvj+28; pile[WZ3]=159; pile[WZ4]=jvj+30; 
(*f[298])( );     /*TRIENS1(jvj+29,(-20),jvj+28,159,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+30,1,158,jvj+15)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+15; 
(*f[1296])( );     /*NOUVCONTR0(jvj+12,jvj+15)*/
l18:if((V7!=1)) goto l17;
V19=g[616];
if((V19<=0)) goto l17;
V20=vg[616];
if((V20!=0)) goto l12;
if((V19<3)) goto l14;
l12:pile[v[22]]=616; pile[WZ1]=20021; pile[WZ2]=3; pile[WZ3]=(-675); pile[WZ4]=jvj+12; pile[WZ5]=jvj+14; 
(*f[232])( );     /*INTERP3(616,20021,3,(-675),jvj+12,jvj+14)*/
if((x[jvj+14]==135)) goto l13;
goto l17;
l19:pile[v[22]]=jvj+5; pile[WZ1]=jvj+17; pile[WZ2]=jvj+19; pile[WZ3]=jvj+20; pile[WZ4]=jvj+21; 
(*f[3198])( );     /*TROUVAR0(jvj+5,jvj+17,jvj+19,jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l20;
goto l21;
l20:pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+17; pile[WZ3]=jvj+22; 
(*f[3199])( );     /*SUBSTENS0(jvj+19,jvj+20,jvj+17,jvj+22)*/
for(i=x[jvj+22],V7=0;i>0;i=t[i],V7++)  ;
if((V7>=V8)) goto l21;
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+41]=x[jvj+22] ;z[jvj+41]=z[jvj+22];
goto l9;
}
