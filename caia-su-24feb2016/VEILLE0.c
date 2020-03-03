#include "dx.h"
void VEILLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V245=0,V246=0,V247=0,V56=0,V55=0,V54=0,V46=0,V112=0,V167=0,V148=0,YC=0,V150=0,V174=0,YA=0,V151=0,YB=0,V152=0,V176=0,V175=0,IA=0,V179=0,V178=0,IB=0,V186=0,V188=0,V190=0,V193=0,V195=0,V319=0,V320=0,V321=0,V322=0,V323=0,V324=0,V325=0,V159=0,V327=0,V329=0,V331=0,V189=0,V209=0,V203=0,V205=0,V216=0,V51=0,V123=0,V122=0,V121=0,TP=0,V133=0,KT=0,V144=0,V138=0,V9=0,V11=0,V12=0,V14=0,V15=0,V17=0,V18=0,V20=0,PR=0,V44=0,V218=0,V223=0,V225=0,V220=0,V333=0,V334=0,V336=0,V338=0,V339=0,V341=0,V342=0,V343=0,V345=0,V346=0,V347=0,V349=0,K=0,N=0,V154=0,V155=0,V153=0,V157=0,V156=0,V160=0,V162=0,V130=0,KS=0,V32=0,V41=0,V25=0,V27=0,V38=0,V28=0,V34=0,V31=0,V30=0,S=0,V65=0,V68=0,V70=0,V73=0,V74=0,V76=0,V77=0,V79=0,V80=0,V82=0,V83=0,V85=0,V256=0,V257=0,V258=0,V259=0,V260=0,V261=0,V262=0,V263=0,V265=0,V267=0,V268=0,V270=0,V272=0,V273=0,V275=0,V277=0,V278=0,V280=0,V282=0,V283=0,V285=0,V287=0,V288=0,V64=0,V94=0,V97=0,V99=0,V101=0,V104=0,V105=0,V107=0,V108=0,V110=0,V291=0,V292=0,V293=0,V294=0,V295=0,V296=0,V297=0,V298=0,V300=0,V302=0,V303=0,V305=0,V307=0,V308=0,V310=0,V312=0,V313=0,V315=0,V316=0,V93=0,V58=0,NN=0,V129=0,V3=0,V254=0,V249=0,V250=0,V251=0,V252=0,V253=0,V2=0,V115=0,V228=0,V230=0,V232=0,V234=0,V236=0,V238=0,V240=0,V242=0;
int M;
int T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=93;
x[jvj+1]=10629;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==956&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+18]=x[jvj+30]=V205=x[jvj+42]=KT=V203=TP=V148=PR=KS=x[jvj+43]=x[T]=S=incon;
V1=vv[18];
if((V1<=0)) goto l39;
pile[v[22]]=20; pile[WZ1]=10629; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10629,0,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V245; pile[WZ2]=1196; 
(*f[42])( );     /*SRA1(135,V245,1196,V246)*/
V246=pile[WZ3]; 
pile[WZ1]=V246; pile[WZ2]=530; 
(*f[42])( );     /*SRA1(135,V246,530,V247)*/
V247=pile[WZ3]; 
pile[v[22]]=V247; 
(*f[40])( );     /*SLG0(V247)*/
exit(0);
l39:if((v[0]>90000)) goto l40;
if((v[14]>5900000)) goto l41;
if((v[22]>37000)) goto l42;
x[jvj+38]=vo[12];z[jvj+38]=vz[12];
pile[v[22]]=735; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(735,jvj+38,jvj+39)*/
pile[v[22]]=145; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(145,jvj+39,jvj+40)*/
if(x[jvj+40]!=29&&x[jvj+40]!=30) goto l44;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(117,jvj+39,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=122; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(122,jvj+39,jvj+4)*/
V46=incon;
if((x[jvj+4]!=936)) goto l1;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1009; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1009,jvj+2,V56)*/
V56=pile[WZ2]; 
V55=(time(tzt)-inccc);
V54=V55-V56;
V46=V54;
l43:if((V46<=V51)) goto l44;
x[T]=735 ;z[T]=735;
l44:x[jvj+41]=vo[14];z[jvj+41]=vz[14];
pile[v[22]]=1066; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(1066,jvj+41,jvj+42)*/
l45:pile[v[22]]=1067; pile[WZ1]=jvj+41; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(1067,jvj+41,jvj+43)*/
l46:pile[v[22]]=1009; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(1009,jvj+41,V123)*/
V123=pile[WZ2]; 
V122=(time(tzt)-inccc);
V121=V122-V123;
TP=V121;
l50:pile[v[22]]=1198; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(1198,jvj+41,KT)*/
KT=pile[WZ2]; 
l53:if(x[jvj+42]!=incon) goto l54;
l59:pile[v[22]]=1226; pile[WZ1]=jvj+41; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(1226,jvj+41,jvj+51)*/
if((x[jvj+51]!=67)) goto l60;
pile[v[22]]=1227; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(1227,jvj+41,V44)*/
V44=pile[WZ2]; 
v[14]=V44;
l60:if(KT==incon) goto l61;
l62:if((v[133]<=0)) goto l66;
x[jvj+53]=vo[13];z[jvj+53]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(717,jvj+53,jvj+54)*/
pile[v[22]]=929; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(929,jvj+41,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=1572; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(1572,jvj+41,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=220; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(220,jvj+41,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=715; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(715,jvj+54,jvj+55)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(0,117,jvj+30)*/
x[jvj+28]=x[jvj+54] ;z[jvj+28]=z[jvj+54];
l30:x[jvj+27]=x[jvj+28] ;z[jvj+27]=z[jvj+28];
pile[v[22]]=718; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(718,jvj+27,jvj+29)*/
for(i=x[jvj+29],V209=0;i>0;i=t[i],V209++)  ;
pile[v[22]]=jvj+30; pile[WZ1]=117; pile[WZ2]=V209; 
(*f[186])( );     /*BTC0(jvj+30,117,V209)*/
pile[v[22]]=120; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(120,jvj+27,jvj+28)*/
goto l30;
l1:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(jvj+4,jvj+3,V46)*/
V46=pile[WZ2]; 
goto l43;
l4:V112=v[110];
l115:if(V112!=incon) goto l116;
l120:if(x[T]!=incon) goto l121;
l122:if(S==incon) goto l123;
l126:if(x[jvj+43]!=incon) goto l127;
l131:x[jvj+81]=vo[14];z[jvj+81]=vz[14];
pile[v[22]]=493; pile[WZ1]=jvj+81; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(493,jvj+81,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(876,jvj+81,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=977; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(977,jvj+81,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=1065; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(1065,jvj+81,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=1037; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(1037,jvj+81,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=220; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(220,jvj+81,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=927; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(927,jvj+81,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=865; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l133;     /*FNDO0(865,jvj+81,jvj+82)*/
pile[v[22]]=866; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(866,jvj+82,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=1065; pile[WZ2]=jvj+84; 
(*f[46])( );     /*TRI0(V234,1065,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=V236; pile[WZ2]=1037; pile[WZ3]=jvj+85; 
(*f[189])( );     /*TRI4(jvj+84,V236,1037,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=V232; pile[WZ2]=977; pile[WZ3]=jvj+86; 
(*f[189])( );     /*TRI4(jvj+85,V232,977,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=V240; pile[WZ2]=927; pile[WZ3]=jvj+87; 
(*f[189])( );     /*TRI4(jvj+86,V240,927,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=V230; pile[WZ2]=876; pile[WZ3]=jvj+88; 
(*f[189])( );     /*TRI4(jvj+87,V230,876,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=V242; pile[WZ2]=866; pile[WZ3]=jvj+89; 
(*f[189])( );     /*TRI4(jvj+88,V242,866,jvj+89)*/
pile[v[22]]=220; pile[WZ1]=V238; pile[WZ2]=493; pile[WZ3]=V228; pile[WZ4]=jvj+89; pile[WZ5]=jvj+83; 
(*f[190])( );     /*QUADRI3(220,V238,493,V228,jvj+89,jvj+83)*/
pile[v[22]]=jvj+81; pile[WZ1]=1066; pile[WZ2]=jvj+83; 
(*f[35])( );     /*CHGC1(jvj+81,1066,jvj+83)*/
l133:if(x[T]!=incon) goto l134;
l132:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l7:x[jvj+12]=s[x[jvj+90]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+90];
pile[v[22]]=218; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[jvj+6])) goto l8;
pile[v[22]]=jvj+12; 
(*f[824])( );     /*ENLISENV0(jvj+12)*/
l8:x[jvj+90]=t[x[jvj+90]];
l6:if((x[jvj+90]>0)) goto l7;
pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(120,jvj+9,jvj+10)*/
l5:x[jvj+9]=x[jvj+10] ;z[jvj+9]=z[jvj+10];
pile[v[22]]=718; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(718,jvj+9,jvj+11)*/
x[jvj+90]=x[jvj+11] ;z[jvj+90]=z[jvj+11];
goto l6;
l9:x[jvj+14]=vo[13];z[jvj+14]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(717,jvj+14,jvj+15)*/
l10:x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
pile[v[22]]=718; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(718,jvj+16,jvj+17)*/
for(i=x[jvj+17],V167=0;i>0;i=t[i],V167++)  ;
pile[v[22]]=jvj+18; pile[WZ1]=117; pile[WZ2]=V167; 
(*f[186])( );     /*BTC0(jvj+18,117,V167)*/
pile[v[22]]=120; pile[WZ1]=jvj+16; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,jvj+16,jvj+15)*/
goto l10;
l12:pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(117,jvj+18,V148)*/
V148=pile[WZ2]; 
l73:if(V148!=incon) goto l74;
l78:if(x[jvj+42]==incon) goto l79;
l81:if(PR==incon) goto l82;
l83:if(KS==incon) goto l84;
l86:if(KS==incon) goto l87;
l88:if(PR!=incon) goto l89;
l102:if(TP!=incon) goto l103;
l110:if(x[T]==incon) goto l111;
l2:V112=incon;
if((v[110]!=0)) goto l3;
V112=100;
l3:if(V112==incon) goto l4;
goto l115;
l14:V150=3000;
l71:if(V150!=incon) goto l72;
goto l78;
l16:x[jvj+20]=s[x[jvj+59]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+59];
pile[v[22]]=244; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(244,jvj+20,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=V174; 
(*f[1276])( );     /*CRSTCONTR0(jvj+21,V174)*/
l17:x[jvj+59]=t[x[jvj+59]];
l15:if((x[jvj+59]>0)) goto l16;
pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(120,jvj+21,jvj+24)*/
V151=incon;
x[jvj+22]=vo[12];z[jvj+22]=vz[12];
pile[v[22]]=1038; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1038,jvj+22,YA)*/
YA=pile[WZ2]; 
V151=YA;
l18:if(V151==incon) goto l19;
l23:if(V151!=incon) goto l20;
l29:if((v[133]<=0)) goto l78;
V189=g[443];
if((V189<=0)) goto l78;
V190=vg[443];
if((V190!=0)) goto l26;
if((V189<3)) goto l27;
l26:pile[v[22]]=443; pile[WZ1]=10629; pile[WZ2]=0; pile[WZ3]=(-3141); pile[WZ4]=V148; pile[WZ5]=jvj+26; 
(*f[612])( );     /*INTERP9(443,10629,0,(-3141),V148,jvj+26)*/
if((x[jvj+26]==135)) goto l27;
goto l78;
l19:V151=15;
goto l23;
l20:V152=incon;
x[jvj+23]=vo[12];z[jvj+23]=vz[12];
pile[v[22]]=1573; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1573,jvj+23,YB)*/
YB=pile[WZ2]; 
V152=YB;
l21:if(V152==incon) goto l22;
l24:if(V152!=incon) goto l25;
goto l29;
l22:V152=40;
goto l24;
l25:V176=V162*V151;
V175=V176/100;
pile[v[22]]=V175; pile[WZ1]=jvj+24; pile[WZ2]=0; 
(*f[1277])( );if(v[102]) goto l29;     /*TRVLIM0(V175,jvj+24,0,IA)*/
IA=pile[WZ3]; 
V179=V162*V152;
V178=V179/100;
pile[v[22]]=V178; 
(*f[1277])( );if(v[102]) goto l29;     /*TRVLIM0(V178,jvj+24,0,IB)*/
IB=pile[WZ3]; 
V186=IA-1;
V188=IB-1;
pile[v[22]]=jvj+25; pile[WZ1]=1038; pile[WZ2]=V186; 
(*f[43])( );     /*CHGC2(jvj+25,1038,V186)*/
pile[WZ1]=244; pile[WZ2]=V188; 
(*f[43])( );     /*CHGC2(jvj+25,244,V188)*/
(*f[1278])( );     /*STATENLEVE0()*/
goto l29;
l27:if((V189>=4)) goto l28;
pile[v[22]]=244; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(244,jvj+25,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=1038; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(1038,jvj+25,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V319)*/
V319=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V319; pile[WZ2]=10629; 
(*f[98])( );     /*SRA3(135,V319,10629,V320)*/
V320=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V320; 
(*f[39])( );     /*SDX0(41,3,V320,V321)*/
V321=pile[WZ3]; 
pile[v[22]]=V321; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V321,125,V322)*/
V322=pile[WZ2]; 
pile[v[22]]=V322; pile[WZ1]=4; 
(*f[178])( );     /*SPLO0(V322,4,V323)*/
V323=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=V323; pile[WZ2]=46; 
(*f[41])( );     /*SRB0(15,V323,46,V324)*/
V324=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V148; pile[WZ2]=V324; 
(*f[39])( );     /*SDX0(41,V148,V324,V325)*/
V325=pile[WZ3]; 
pile[WZ1]=V159; pile[WZ2]=V325; 
(*f[39])( );     /*SDX0(41,V159,V325,V327)*/
V327=pile[WZ3]; 
pile[WZ1]=V195; pile[WZ2]=V327; 
(*f[39])( );     /*SDX0(41,V195,V327,V329)*/
V329=pile[WZ3]; 
pile[WZ1]=V193; pile[WZ2]=V329; 
(*f[39])( );     /*SDX0(41,V193,V329,V331)*/
V331=pile[WZ3]; 
pile[v[22]]=V331; 
(*f[40])( );     /*SLG0(V331)*/
l28:if((V189!=2)) goto l78;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l78;
l31:if(x[jvj+30]!=incon) goto l32;
l63:if(V203!=incon) goto l33;
l66:if(TP!=incon) goto l68;
l70:V154=vv[41];
V155=vv[42];
V153=V154*V155;
if((V153<=0)) goto l78;
pile[v[22]]=220; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(220,jvj+41,V157)*/
V157=pile[WZ2]; 
V156=V157%V153;
if((V156!=0)) goto l78;
x[jvj+25]=vo[16];z[jvj+25]=vz[16];
pile[v[22]]=1035; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(1035,jvj+25,V160)*/
V160=pile[WZ2]; 
V159=20*V160;
V150=incon;
x[jvj+19]=vo[12];z[jvj+19]=vz[12];
pile[v[22]]=945; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(945,jvj+19,YC)*/
YC=pile[WZ2]; 
V150=YC;
l13:if(V150==incon) goto l14;
goto l71;
l32:pile[v[22]]=117; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(117,jvj+30,V203)*/
V203=pile[WZ2]; 
goto l63;
l33:V205=999999;
if(V205!=incon) goto l34;
l64:if(V205!=incon) goto l65;
goto l66;
l34:x[jvj+31]=vo[16];z[jvj+31]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(454,jvj+31,jvj+32)*/
l35:if((x[jvj+32]<=0)) goto l64;
x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=480; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(480,jvj+33,jvj+34)*/
x[jvj+91]=x[jvj+34] ;z[jvj+91]=z[jvj+34];
l36:if((x[jvj+91]>0)) goto l37;
x[jvj+32]=t[x[jvj+32]];
goto l35;
l37:x[jvj+35]=s[x[jvj+91]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+91];
pile[v[22]]=489; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(489,jvj+35,jvj+36)*/
if((x[jvj+36]!=0)) goto l38;
pile[v[22]]=365; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(365,jvj+35,jvj+37)*/
for(i=x[jvj+37],V216=0;i>0;i=t[i],V216++)  ;
if((V216<=0)) goto l38;
if(V216<V205) V205=V216;
l38:x[jvj+91]=t[x[jvj+91]];
goto l36;
l40:x[T]=21 ;z[T]=21;
goto l44;
l41:x[T]=899 ;z[T]=899;
goto l44;
l42:x[T]=39 ;z[T]=39;
goto l44;
l48:x[jvj+45]=s[x[jvj+92]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+92];
pile[v[22]]=936; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(936,jvj+45,V133)*/
V133=pile[WZ2]; 
if((V133==K)) goto l69;
l49:x[jvj+92]=t[x[jvj+92]];
l47:if((x[jvj+92]>0)) goto l48;
(*f[1258])( );if(v[102]) goto l69;     /*ACHEVE0(N)*/
N=pile[v[22]]; 
pile[v[22]]=936; pile[WZ1]=K; pile[WZ2]=1005; pile[WZ3]=N; pile[WZ4]=jvj+58; 
(*f[391])( );     /*QUADRI10(936,K,1005,N,jvj+58)*/
pile[v[22]]=jvj+41; pile[WZ1]=1034; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+41,1034,jvj+58)*/
l69:x[jvj+57]=t[x[jvj+57]];
l67:if((x[jvj+57]<=0)) goto l70;
K=s[x[jvj+57]];
if((TP<K)) goto l69;
pile[v[22]]=1034; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1034,jvj+41,jvj+44)*/
x[jvj+92]=x[jvj+44] ;z[jvj+92]=z[jvj+44];
goto l47;
l52:x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=480; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(480,jvj+48,jvj+49)*/
for(i=x[jvj+49],V144=0;i>0;i=t[i],V144++)  ;
pile[v[22]]=jvj+50; pile[WZ1]=117; pile[WZ2]=V144; 
(*f[186])( );     /*BTC0(jvj+50,117,V144)*/
x[jvj+47]=t[x[jvj+47]];
l51:if((x[jvj+47]>0)) goto l52;
pile[v[22]]=117; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(117,jvj+50,V138)*/
V138=pile[WZ2]; 
KT=V138;
pile[v[22]]=jvj+41; pile[WZ1]=1198; pile[WZ2]=V138; 
(*f[43])( );     /*CHGC2(jvj+41,1198,V138)*/
goto l62;
l54:pile[v[22]]=493; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(493,jvj+41,V9)*/
V9=pile[WZ2]; 
pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(493,jvj+42,V11)*/
V11=pile[WZ2]; 
if((V9>V11)) goto l58;
l55:pile[v[22]]=876; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(876,jvj+41,V12)*/
V12=pile[WZ2]; 
pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(876,jvj+42,V14)*/
V14=pile[WZ2]; 
if((V12>V14)) goto l58;
l56:pile[v[22]]=977; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(977,jvj+41,V15)*/
V15=pile[WZ2]; 
pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(977,jvj+42,V17)*/
V17=pile[WZ2]; 
if((V15>V17)) goto l58;
l57:pile[v[22]]=1065; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(1065,jvj+41,V18)*/
V18=pile[WZ2]; 
pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(1065,jvj+42,V20)*/
V20=pile[WZ2]; 
if((V18>V20)) goto l58;
goto l59;
l58:PR=68;
goto l59;
l61:pile[v[22]]=1201; pile[WZ1]=jvj+41; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(1201,jvj+41,jvj+52)*/
if((x[jvj+52]!=206)) goto l62;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+50; 
(*f[46])( );     /*TRI0(0,117,jvj+50)*/
x[jvj+46]=vo[16];z[jvj+46]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(454,jvj+46,jvj+47)*/
goto l51;
l65:if((V205==999999)) goto l66;
pile[v[22]]=718; pile[WZ1]=jvj+54; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(718,jvj+54,jvj+56)*/
for(i=x[jvj+56],V220=0;i>0;i=t[i],V220++)  ;
pile[v[22]]=20; pile[WZ1]=10629; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10629,0,V333)*/
V333=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V225; pile[WZ2]=V333; 
(*f[39])( );     /*SDX0(41,V225,V333,V334)*/
V334=pile[WZ3]; 
pile[WZ1]=V223; pile[WZ2]=V334; 
(*f[39])( );     /*SDX0(41,V223,V334,V336)*/
V336=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V336; pile[WZ2]=jvj+55; 
(*f[42])( );     /*SRA1(135,V336,jvj+55,V338)*/
V338=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V220; pile[WZ2]=V338; 
(*f[39])( );     /*SDX0(41,V220,V338,V339)*/
V339=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V339; pile[WZ2]=491; 
(*f[42])( );     /*SRA1(135,V339,491,V341)*/
V341=pile[WZ3]; 
pile[v[22]]=V341; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V341,58,V342)*/
V342=pile[WZ2]; 
pile[v[22]]=V342; pile[WZ1]=V205; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V342,V205,41,V343)*/
V343=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V343; pile[WZ2]=929; 
(*f[42])( );     /*SRA1(135,V343,929,V345)*/
V345=pile[WZ3]; 
pile[v[22]]=V345; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V345,58,V346)*/
V346=pile[WZ2]; 
pile[v[22]]=V346; pile[WZ1]=V218; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V346,V218,41,V347)*/
V347=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V203; pile[WZ2]=V347; 
(*f[39])( );     /*SDX0(41,V203,V347,V349)*/
V349=pile[WZ3]; 
pile[v[22]]=V349; 
(*f[40])( );     /*SLG0(V349)*/
goto l66;
l68:x[jvj+57]=d[75];z[jvj+57]=0;
goto l67;
l72:pile[v[22]]=509; pile[WZ1]=jvj+25; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(509,jvj+25,jvj+59)*/
for(i=x[jvj+59],V162=0;i>0;i=t[i],V162++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(0,117,jvj+18)*/
if(x[jvj+18]!=incon) goto l9;
l11:if(x[jvj+18]!=incon) goto l12;
goto l73;
l74:if((V148<=V159)) goto l78;
if((V148<=V150)) goto l78;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(250,158,jvj+21)*/
goto l15;
l75:x[jvj+93]=incon;
pile[v[22]]=1005; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(1005,jvj+60,V130)*/
V130=pile[WZ2]; 
if((NN>V130)) goto l76;
x[jvj+93]=1032 ;z[jvj+93]=1032;
l76:if(x[jvj+93]==incon) goto l77;
l108:if(x[jvj+93]!=incon) goto l109;
l107:x[jvj+77]=t[x[jvj+77]];
l106:if((x[jvj+77]<=0)) goto l110;
x[jvj+60]=s[x[jvj+77]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+77];
pile[v[22]]=936; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l107;     /*FNDC0(936,jvj+60,V129)*/
V129=pile[WZ2]; 
if((TP<=V129)) goto l107;
pile[v[22]]=191; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(191,jvj+60,jvj+61)*/
goto l107;
l77:x[jvj+93]=68 ;z[jvj+93]=68;
goto l108;
l79:if(PR==incon) goto l80;
goto l81;
l80:PR=68;
goto l81;
l82:PR=67;
goto l83;
l84:if(KT!=incon) goto l85;
goto l86;
l85:if((KT<=40)) goto l86;
KS=KT;
goto l86;
l87:KS=40;
goto l88;
l89:if((PR!=68)) goto l90;
x[jvj+62]=vo[14];z[jvj+62]=vz[14];
pile[v[22]]=1067; pile[WZ1]=jvj+62; 
(*f[71])( );     /*ENLV0(1067,jvj+62)*/
l90:if(x[jvj+43]==incon) goto l91;
l93:if(x[jvj+43]!=incon) goto l94;
goto l102;
l91:if(x[jvj+42]!=incon) goto l92;
goto l93;
l92:if((PR!=67)) goto l93;
x[jvj+63]=vo[14];z[jvj+63]=vz[14];
x[jvj+43]=x[jvj+42] ;z[jvj+43]=z[jvj+42];
pile[v[22]]=jvj+63; pile[WZ1]=1067; pile[WZ2]=jvj+42; 
(*f[35])( );     /*CHGC1(jvj+63,1067,jvj+42)*/
goto l93;
l94:if(KS!=incon) goto l95;
goto l102;
l95:if((PR!=67)) goto l102;
V32=500*KS;
pile[v[22]]=866; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l102;     /*FNDC0(866,jvj+43,V41)*/
V41=pile[WZ2]; 
x[jvj+64]=vo[14];z[jvj+64]=vz[14];
pile[v[22]]=1037; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l102;     /*FNDC0(1037,jvj+64,V25)*/
V25=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l102;     /*FNDC0(1037,jvj+43,V27)*/
V27=pile[WZ2]; 
if((V25!=V27)) goto l102;
if((V27<=40)) goto l102;
x[jvj+65]=vo[12];z[jvj+65]=vz[12];
pile[v[22]]=948; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l102;     /*FNDO0(948,jvj+65,jvj+66)*/
if((x[jvj+66]!=67)) goto l102;
pile[v[22]]=865; pile[WZ1]=jvj+64; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l102;     /*FNDO0(865,jvj+64,jvj+67)*/
pile[v[22]]=866; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l102;     /*FNDC0(866,jvj+67,V38)*/
V38=pile[WZ2]; 
if((V38!=V41)) goto l102;
pile[v[22]]=220; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l102;     /*FNDC0(220,jvj+64,V28)*/
V28=pile[WZ2]; 
x[jvj+68]=vo[16];z[jvj+68]=vz[16];
pile[v[22]]=1035; pile[WZ1]=jvj+68; 
(*f[26])( );if(v[102]) goto l102;     /*FNDC0(1035,jvj+68,V34)*/
V34=pile[WZ2]; 
if((V34<=2)) goto l102;
pile[v[22]]=220; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l102;     /*FNDC0(220,jvj+43,V31)*/
V31=pile[WZ2]; 
V30=V31+V32;
if((V28<=V30)) goto l102;
S=68;
goto l102;
l97:if((V64>=4)) goto l98;
pile[v[22]]=929; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(929,jvj+70,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=866; pile[WZ1]=jvj+71; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(866,jvj+71,V70)*/
V70=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(866,jvj+43,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=927; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(927,jvj+70,V74)*/
V74=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(927,jvj+43,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=1037; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(1037,jvj+70,V77)*/
V77=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(1037,jvj+43,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=1065; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(1065,jvj+70,V80)*/
V80=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(1065,jvj+43,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=220; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(220,jvj+70,V83)*/
V83=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(220,jvj+43,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V256; pile[WZ2]=10629; 
(*f[98])( );     /*SRA3(135,V256,10629,V257)*/
V257=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V257; 
(*f[39])( );     /*SDX0(41,2,V257,V258)*/
V258=pile[WZ3]; 
pile[v[22]]=V258; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V258,125,V259)*/
V259=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=V259; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(15,V259,64,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V260; pile[WZ2]=985; 
(*f[42])( );     /*SRA1(135,V260,985,V261)*/
V261=pile[WZ3]; 
pile[WZ1]=V261; pile[WZ2]=80; 
(*f[42])( );     /*SRA1(135,V261,80,V262)*/
V262=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V85; pile[WZ2]=V262; 
(*f[39])( );     /*SDX0(41,V85,V262,V263)*/
V263=pile[WZ3]; 
pile[WZ1]=V83; pile[WZ2]=V263; 
(*f[39])( );     /*SDX0(41,V83,V263,V265)*/
V265=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V265; pile[WZ2]=1065; 
(*f[42])( );     /*SRA1(135,V265,1065,V267)*/
V267=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V82; pile[WZ2]=V267; 
(*f[39])( );     /*SDX0(41,V82,V267,V268)*/
V268=pile[WZ3]; 
pile[WZ1]=V80; pile[WZ2]=V268; 
(*f[39])( );     /*SDX0(41,V80,V268,V270)*/
V270=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V270; pile[WZ2]=1037; 
(*f[42])( );     /*SRA1(135,V270,1037,V272)*/
V272=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V79; pile[WZ2]=V272; 
(*f[39])( );     /*SDX0(41,V79,V272,V273)*/
V273=pile[WZ3]; 
pile[WZ1]=V77; pile[WZ2]=V273; 
(*f[39])( );     /*SDX0(41,V77,V273,V275)*/
V275=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V275; pile[WZ2]=927; 
(*f[42])( );     /*SRA1(135,V275,927,V277)*/
V277=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V76; pile[WZ2]=V277; 
(*f[39])( );     /*SDX0(41,V76,V277,V278)*/
V278=pile[WZ3]; 
pile[WZ1]=V74; pile[WZ2]=V278; 
(*f[39])( );     /*SDX0(41,V74,V278,V280)*/
V280=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V280; pile[WZ2]=866; 
(*f[42])( );     /*SRA1(135,V280,866,V282)*/
V282=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V73; pile[WZ2]=V282; 
(*f[39])( );     /*SDX0(41,V73,V282,V283)*/
V283=pile[WZ3]; 
pile[WZ1]=V70; pile[WZ2]=V283; 
(*f[39])( );     /*SDX0(41,V70,V283,V285)*/
V285=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V285; pile[WZ2]=929; 
(*f[42])( );     /*SRA1(135,V285,929,V287)*/
V287=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V68; pile[WZ2]=V287; 
(*f[39])( );     /*SDX0(41,V68,V287,V288)*/
V288=pile[WZ3]; 
pile[v[22]]=V288; 
(*f[40])( );     /*SLG0(V288)*/
l98:if((V64!=2)) goto l125;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l125:pile[v[22]]=jvj+71; 
(*f[1275])( );     /*SORCHEMIN0(jvj+71)*/
pile[v[22]]=1160; pile[WZ1]=jvj+70; 
(*f[71])( );     /*ENLV0(1160,jvj+70)*/
goto l126;
l100:if((V93>=4)) goto l101;
pile[v[22]]=929; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(929,jvj+72,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=1037; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(1037,jvj+72,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=866; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(866,jvj+75,V101)*/
V101=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(866,jvj+43,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=927; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(927,jvj+72,V105)*/
V105=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(927,jvj+43,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=220; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(220,jvj+72,V108)*/
V108=pile[WZ2]; 
pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(220,jvj+43,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V291)*/
V291=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V291; pile[WZ2]=10629; 
(*f[98])( );     /*SRA3(135,V291,10629,V292)*/
V292=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V292; 
(*f[39])( );     /*SDX0(41,5,V292,V293)*/
V293=pile[WZ3]; 
pile[v[22]]=V293; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V293,125,V294)*/
V294=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=V294; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(15,V294,64,V295)*/
V295=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V295; pile[WZ2]=985; 
(*f[42])( );     /*SRA1(135,V295,985,V296)*/
V296=pile[WZ3]; 
pile[WZ1]=V296; pile[WZ2]=259; 
(*f[42])( );     /*SRA1(135,V296,259,V297)*/
V297=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V110; pile[WZ2]=V297; 
(*f[39])( );     /*SDX0(41,V110,V297,V298)*/
V298=pile[WZ3]; 
pile[WZ1]=V108; pile[WZ2]=V298; 
(*f[39])( );     /*SDX0(41,V108,V298,V300)*/
V300=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V300; pile[WZ2]=927; 
(*f[42])( );     /*SRA1(135,V300,927,V302)*/
V302=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V107; pile[WZ2]=V302; 
(*f[39])( );     /*SDX0(41,V107,V302,V303)*/
V303=pile[WZ3]; 
pile[WZ1]=V105; pile[WZ2]=V303; 
(*f[39])( );     /*SDX0(41,V105,V303,V305)*/
V305=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V305; pile[WZ2]=866; 
(*f[42])( );     /*SRA1(135,V305,866,V307)*/
V307=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V104; pile[WZ2]=V307; 
(*f[39])( );     /*SDX0(41,V104,V307,V308)*/
V308=pile[WZ3]; 
pile[WZ1]=V101; pile[WZ2]=V308; 
(*f[39])( );     /*SDX0(41,V101,V308,V310)*/
V310=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V310; pile[WZ2]=1037; 
(*f[42])( );     /*SRA1(135,V310,1037,V312)*/
V312=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V99; pile[WZ2]=V312; 
(*f[39])( );     /*SDX0(41,V99,V312,V313)*/
V313=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V313; pile[WZ2]=929; 
(*f[42])( );     /*SRA1(135,V313,929,V315)*/
V315=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V97; pile[WZ2]=V315; 
(*f[39])( );     /*SDX0(41,V97,V315,V316)*/
V316=pile[WZ3]; 
pile[v[22]]=V316; 
(*f[40])( );     /*SLG0(V316)*/
l101:if((V93!=2)) goto l130;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l130:pile[v[22]]=jvj+75; 
(*f[1275])( );     /*SORCHEMIN0(jvj+75)*/
pile[v[22]]=jvj+72; pile[WZ1]=1160; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+72,1160,68)*/
goto l131;
l103:x[jvj+76]=vo[12];z[jvj+76]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+76; 
(*f[26])( );if(v[102]) goto l104;     /*FNDC0(936,jvj+76,V58)*/
V58=pile[WZ2]; 
if((TP<=V58)) goto l104;
v[138]=1;
l104:if(x[T]==incon) goto l105;
goto l110;
l105:pile[v[22]]=1032; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(1032,jvj+76,jvj+77)*/
(*f[1258])( );if(v[102]) goto l110;     /*ACHEVE0(NN)*/
NN=pile[v[22]]; 
goto l106;
l109:x[T]=x[jvj+93] ;z[T]=z[jvj+93];
pile[v[22]]=jvj+60; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+60,191,68)*/
goto l110;
l111:x[T]=68 ;z[T]=68;
goto l2;
l113:if((V2>=4)) goto l114;
V254=x[T];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V249; pile[WZ2]=10629; 
(*f[98])( );     /*SRA3(135,V249,10629,V250)*/
V250=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V250; 
(*f[39])( );     /*SDX0(41,1,V250,V251)*/
V251=pile[WZ3]; 
pile[v[22]]=V251; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V251,125,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V254; pile[WZ2]=V252; 
(*f[39])( );     /*SDX0(20,V254,V252,V253)*/
V253=pile[WZ3]; 
pile[v[22]]=V253; 
(*f[40])( );     /*SLG0(V253)*/
l114:if((V2!=2)) goto l122;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l122;
l116:x[jvj+7]=vo[13];z[jvj+7]=vz[13];
pile[v[22]]=1028; pile[WZ1]=jvj+7; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(1028,jvj+7,jvj+79)*/
l117:if((x[jvj+79]<=0)) goto l120;
x[jvj+5]=s[x[jvj+79]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+79];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l118;     /*FNDC0(117,jvj+5,V115)*/
V115=pile[WZ2]; 
if((V115<=V112)) goto l118;
pile[v[22]]=218; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(218,jvj+5,jvj+6)*/
pile[v[22]]=717; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(717,jvj+7,jvj+8)*/
x[jvj+10]=x[jvj+8] ;z[jvj+10]=z[jvj+8];
goto l5;
l119:pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+5,117,0)*/
l118:x[jvj+79]=t[x[jvj+79]];
goto l117;
l121:if((x[T]==68)) goto l122;
V2=g[368];
if((V2<=0)) goto l122;
V3=vg[368];
if((V3!=0)) goto l112;
if((V2<3)) goto l113;
l112:pile[v[22]]=368; pile[WZ1]=10629; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=T; pile[WZ5]=jvj+78; 
(*f[232])( );     /*INTERP3(368,10629,0,(-620),T,jvj+78)*/
if((x[jvj+78]==135)) goto l113;
goto l122;
l123:if(x[jvj+43]!=incon) goto l124;
goto l126;
l124:x[jvj+70]=vo[14];z[jvj+70]=vz[14];
pile[v[22]]=1160; pile[WZ1]=jvj+70; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l126;     /*FNDO0(1160,jvj+70,jvj+80)*/
if((x[jvj+80]!=68)) goto l126;
pile[v[22]]=865; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l126;     /*FNDO0(865,jvj+70,jvj+71)*/
V64=g[442];
if((V64<=0)) goto l125;
V65=vg[442];
if((V65!=0)) goto l96;
if((V64<3)) goto l97;
l96:pile[v[22]]=442; pile[WZ1]=10629; pile[WZ2]=0; pile[WZ3]=(-2041); pile[WZ4]=jvj+43; pile[WZ5]=jvj+69; 
(*f[232])( );     /*INTERP3(442,10629,0,(-2041),jvj+43,jvj+69)*/
if((x[jvj+69]==135)) goto l97;
goto l125;
l127:if(S!=incon) goto l128;
goto l131;
l128:if((S!=68)) goto l131;
x[jvj+72]=vo[14];z[jvj+72]=vz[14];
pile[v[22]]=1160; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l129;     /*FNDO0(1160,jvj+72,jvj+73)*/
if((x[jvj+73]==68)) goto l131;
l129:pile[v[22]]=865; pile[WZ1]=jvj+72; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l131;     /*FNDO0(865,jvj+72,jvj+75)*/
V93=g[469];
if((V93<=0)) goto l130;
V94=vg[469];
if((V94!=0)) goto l99;
if((V93<3)) goto l100;
l99:pile[v[22]]=469; pile[WZ1]=10629; pile[WZ2]=0; pile[WZ3]=(-2041); pile[WZ4]=jvj+43; pile[WZ5]=jvj+74; 
(*f[232])( );     /*INTERP3(469,10629,0,(-2041),jvj+43,jvj+74)*/
if((x[jvj+74]==135)) goto l100;
goto l130;
l134:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
}
