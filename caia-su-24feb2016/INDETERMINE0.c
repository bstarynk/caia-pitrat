#include "dx.h"
void INDETERMINE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,V50=0,V41=0,V42=0,V43=0,V44=0,V45=0,V47=0,V48=0,V49=0,V51=0,V1=0,V9=0,V25=0,V15=0,V16=0,V30=0,V11=0,V52=0,V36=0,V38=0;
int HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=11321;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1909&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=HIST; pile[WZ1]=jvj+2; 
(*f[2040])( );     /*ESTCEFINI1(HIST,jvj+2)*/
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(158,jvj+2,jvj+3)*/
l6:if((v[111]!=0)) goto l7;
pile[v[22]]=1336; pile[WZ1]=HIST; 
(*f[1567])( );     /*ARCHIVE2(1336,HIST)*/
l7:if(x[jvj+3]!=incon) goto l5;
l18:if((v[176]<=0)) goto l20;
V9=incon;
if((v[176]!=1)) goto l8;
V9=84;
l8:if((v[176]!=2)) goto l9;
V9=75;
l9:if((v[176]!=3)) goto l10;
V9=78;
l10:if((v[176]==4)) goto l11;
if(V9==incon) goto l20;
if((V9!=(-99999998))) goto l19;
l20:x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(220,jvj+13,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=1572; pile[WZ2]=V11; 
(*f[43])( );     /*CHGC2(jvj+13,1572,V11)*/
l21:if((v[176]>=0)) goto l22;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=856; 
(*f[42])( );     /*SRA1(135,0,856,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
(*f[482])( );     /*E0()*/
l22:x[jvj+14]=vo[11];z[jvj+14]=vz[11];
pile[v[22]]=1455; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1455,jvj+14,jvj+15)*/
if((x[jvj+15]!=68)) goto l29;
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(454,jvj+11,jvj+16)*/
pile[v[22]]=498; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(498,jvj+11,jvj+17)*/
x[jvj+18]=vo[10];z[jvj+18]=vz[10];
l23:if((x[jvj+16]<=0)) goto l29;
x[jvj+19]=s[x[jvj+16]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+16];
pile[v[22]]=480; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(480,jvj+19,jvj+20)*/
x[jvj+29]=x[jvj+20] ;z[jvj+29]=z[jvj+20];
l24:if((x[jvj+29]>0)) goto l25;
x[jvj+16]=t[x[jvj+16]];
goto l23;
l2:if((V1<4)) goto l3;
goto l18;
l3:x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(929,jvj+5,V5)*/
V5=pile[WZ2]; 
V50=x[jvj+3];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=11321; 
(*f[98])( );     /*SRA3(135,V41,11321,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V42,125,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V43,91,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=V5; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V44,V5,41,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V45,93,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V47; pile[WZ2]=1336; 
(*f[42])( );     /*SRA1(135,V47,1336,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V50; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V50,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=HIST; 
(*f[828])( );if(v[102]) goto l4;     /*SORHIST0(V49,HIST,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
l4:if((V1!=2)) goto l18;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l18;
l5:V1=g[549];
if((V1<=0)) goto l18;
V2=vg[549];
if((V2!=0)) goto l1;
if((V1<3)) goto l3;
l1:pile[v[22]]=549; pile[WZ1]=11321; pile[WZ2]=0; pile[WZ3]=(-612); pile[WZ4]=jvj+3; pile[WZ5]=(-6231); pile[v[22]+6]=HIST; pile[v[22]+7]=jvj+4; 
(*f[187])( );     /*INTERP0(549,11321,0,(-612),jvj+3,(-6231),HIST,jvj+4)*/
if((x[jvj+4]==135)) goto l2;
goto l18;
l11:V9=79;
l19:pile[v[22]]=V9; 
(*f[143])( );     /*SORCONTEXTE0(V9)*/
goto l20;
l14:x[jvj+8]=s[x[jvj+28]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+28];
pile[v[22]]=195; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(195,jvj+8,jvj+9)*/
for(i=x[jvj+9],V25=0;i>0;i=t[i],V25++)  ;
if((V25>1)) goto l16;
x[jvj+28]=t[x[jvj+28]];
l13:if((x[jvj+28]>0)) goto l14;
if(x[jvj+30]==incon) goto l17;
if((x[jvj+30]!=(-99999998))) goto l27;
l26:x[jvj+29]=t[x[jvj+29]];
goto l24;
l16:x[jvj+30]=1310 ;z[jvj+30]=1310;
l27:pile[v[22]]=jvj+6; pile[WZ1]=jvj+21; 
(*f[1290])( );if(v[102]) goto l26;     /*DEPEXP0(jvj+6,jvj+21)*/
x[jvj+27]=x[jvj+30] ;z[jvj+27]=z[jvj+30];
pile[v[22]]=jvj+21; pile[WZ1]=218; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+21,218,jvj+26)*/
pile[v[22]]=109; pile[WZ1]=jvj+17; pile[WZ2]=158; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(109,jvj+17,158,jvj+27,jvj+26,jvj+12)*/
pile[v[22]]=163; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(163,jvj+11,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=163; pile[WZ2]=V30; 
(*f[177])( );     /*CHGC4(jvj+12,163,V30)*/
l28:pile[v[22]]=jvj+18; pile[WZ1]=1212; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+18,1212,jvj+12)*/
goto l26;
l17:x[jvj+30]=(-99999998);
goto l26;
l25:x[jvj+6]=s[x[jvj+29]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+29];
x[jvj+30]=incon;
pile[v[22]]=202; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(202,jvj+6,jvj+10)*/
if((x[jvj+10]!=68)) goto l15;
x[jvj+30]=202 ;z[jvj+30]=202;
l15:pile[v[22]]=280; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(280,jvj+6,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(164,jvj+6,V16)*/
V16=pile[WZ2]; 
x[jvj+30]=164 ;z[jvj+30]=164;
l12:pile[v[22]]=1310; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1310,jvj+6,jvj+7)*/
x[jvj+28]=x[jvj+7] ;z[jvj+28]=z[jvj+7];
goto l13;
l29:x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=893; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(893,jvj+22,jvj+23)*/
if((x[jvj+23]==12)) goto l31;
l30:pile[v[22]]=jvj+22; pile[WZ1]=893; pile[WZ2]=1336; 
(*f[35])( );     /*CHGC1(jvj+22,893,1336)*/
pile[WZ1]=1335; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+22,1335,1)*/
pile[v[22]]=1335; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(1335,jvj+22,V36)*/
V36=pile[WZ2]; 
x[jvj+24]=vo[12];z[jvj+24]=vz[12];
pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(1335,jvj+24,V38)*/
V38=pile[WZ2]; 
if((V36<V38)) goto l31;
pile[v[22]]=1336; pile[WZ1]=158; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(1336,158,jvj+25)*/
pile[v[22]]=jvj+25; 
(*f[605])( );     /*MONITEUR0(jvj+25)*/
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
