#include "dx.h"
void IMPRIMER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V218=0,V219=0,V220=0,V221=0,V222=0,V223=0,V224=0,V4=0,V12=0,K=0,V2=0,V1=0,V231=0,V227=0,V228=0,V229=0,V230=0,V11=0,V22=0,V21=0,V20=0,V232=0,V233=0,V234=0,V235=0,V236=0,V237=0,V238=0,V239=0,V240=0,V241=0,V3=0,V27=0,V243=0,V244=0,V245=0,V246=0,V247=0,V248=0,V26=0,V36=0,V256=0,V250=0,V251=0,V252=0,V253=0,V254=0,V255=0,V35=0,V44=0,V47=0,V258=0,V259=0,V260=0,V261=0,V262=0,V263=0,V264=0,V266=0,V267=0,V43=0,V54=0,V57=0,MM=0,V51=0,V269=0,V270=0,V50=0,V59=0,V273=0,V274=0,V275=0,V276=0,V277=0,V53=0,V65=0,V286=0,V280=0,V281=0,V282=0,V283=0,V284=0,V285=0,V64=0,V74=0,V295=0,V288=0,V289=0,V290=0,V291=0,V292=0,V293=0,V294=0,V73=0,V81=0,V84=0,V297=0,V298=0,V299=0,V300=0,V301=0,V302=0,V80=0,V93=0,V89=0,V90=0,V88=0,V87=0,V96=0,V311=0,V306=0,V307=0,V308=0,V309=0,V310=0,V312=0,V313=0,V92=0,V120=0,V125=0,V124=0,V123=0,V340=0,V341=0,V342=0,V343=0,V344=0,V345=0,V346=0,V348=0,V349=0,V119=0,V149=0,V148=0,V152=0,V153=0,V131=0,V350=0,V351=0,V353=0,V354=0,V356=0,V357=0,V130=0,V133=0,V132=0,V135=0,V134=0,VV=0,V137=0,V136=0,V139=0,V138=0,V143=0,V142=0,II=0,V141=0,V364=0,V365=0,V140=0,V162=0,V144=0,V200=0,V201=0,V179=0,V389=0,V390=0,V392=0,V393=0,V395=0,V396=0,V178=0,V181=0,V180=0,V183=0,V399=0,V400=0,V401=0,V182=0,V185=0,V184=0,V187=0,V186=0,V177=0,V189=0,V188=0,V206=0,V210=0,V209=0,V208=0,V207=0,V191=0,V406=0,V190=0,V194=0,V211=0,V192=0,V195=0,V214=0,V215=0,V422=0,V411=0,V412=0,V413=0,V414=0,V415=0,V417=0,V418=0,V420=0,V421=0,V423=0,V424=0,V425=0,V426=0,V427=0,V428=0,V146=0,V165=0,V169=0,V166=0,V164=0,V171=0,V173=0,V382=0,V369=0,V370=0,V371=0,V372=0,V373=0,V374=0,V375=0,V377=0,V378=0,V380=0,V381=0,V383=0,V384=0,V385=0,V386=0,V388=0,V63=0,V104=0,V99=0,V98=0,V317=0,V318=0,V319=0,V320=0,V321=0,V100=0,V322=0,V324=0,V325=0,V326=0,V103=0,V111=0,V114=0,V335=0,V328=0,V329=0,V330=0,V331=0,V332=0,V333=0,V334=0,V336=0,V338=0,V110=0,V79=0,X=0,V101=0,V437=0,V436=0;
int B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=54;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+35]=incon;
if((v[21]!=2)) goto l14;
if((v[79]!=0)) goto l14;
if((v[228]<=0)) goto l12;
pile[v[22]]=977; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(977,B,V22)*/
V22=pile[WZ2]; 
if((V22>1000)) goto l14;
l12:x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=226; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(226,jvj+7,jvj+8)*/
if((x[jvj+8]==0)) goto l13;
V21=0;
pile[v[22]]=V21; 
(*f[656])( );     /*SPLN2(V21,V20)*/
V20=pile[WZ1]; 
pile[v[22]]=V20; 
(*f[288])( );     /*SPLN0(V20)*/
pile[v[22]]=0; pile[WZ1]=73; 
(*f[38])( );     /*SPC0(0,73,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; pile[WZ1]=(-9670); 
(*f[37])( );     /*SRA0(V232,(-9670),V233)*/
V233=pile[WZ2]; 
pile[v[22]]=V233; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V233,(-9546),V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=(-9802); 
(*f[37])( );     /*SRA0(V234,(-9802),V235)*/
V235=pile[WZ2]; 
pile[v[22]]=V235; pile[WZ1]=(-9809); 
(*f[37])( );     /*SRA0(V235,(-9809),V236)*/
V236=pile[WZ2]; 
pile[v[22]]=V236; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V236,(-9813),V237)*/
V237=pile[WZ2]; 
pile[v[22]]=V237; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V237,(-9546),V238)*/
V238=pile[WZ2]; 
pile[v[22]]=V238; pile[WZ1]=(-9789); 
(*f[37])( );     /*SRA0(V238,(-9789),V239)*/
V239=pile[WZ2]; 
pile[v[22]]=V239; pile[WZ1]=(-9500); 
(*f[37])( );     /*SRA0(V239,(-9500),V240)*/
V240=pile[WZ2]; 
pile[v[22]]=V240; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V240,58,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=V241; 
(*f[40])( );     /*SLG0(V241)*/
l13:
(*f[882])( );     /*SORARB0()*/
l14:V3=vv[33];
if((V3!=0)) goto l58;
V11=g[429];
if((V11<=0)) goto l5;
V12=vg[429];
if((V12!=0)) goto l6;
if((V11<3)) goto l9;
l6:pile[v[22]]=429; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=jvj+4; 
(*f[291])( );     /*INTERP4(429,10897,0,jvj+4)*/
if((x[jvj+4]==135)) goto l8;
l5:V4=g[430];
if((V4<=0)) goto l58;
V5=vg[430];
if((V5!=0)) goto l1;
if((V4<3)) goto l3;
l1:pile[v[22]]=430; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=jvj+1; 
(*f[291])( );     /*INTERP4(430,10897,0,jvj+1)*/
if((x[jvj+1]==135)) goto l2;
l58:x[jvj+26]=vo[12];z[jvj+26]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+26; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(109,jvj+26,jvj+51)*/
pile[v[22]]=983; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(983,jvj+51,jvj+52)*/
pile[v[22]]=878; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(878,jvj+52,jvj+53)*/
l126:if((x[jvj+53]<=0)) goto l96;
x[jvj+54]=s[x[jvj+53]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+53];
pile[v[22]]=163; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l127;     /*FNDC1(163,jvj+54,V437)*/
V437=pile[WZ2]; 
pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l127;     /*FNDC1(163,jvj+26,V436)*/
V436=pile[WZ2]; 
if((V437==V436)) goto l127;
x[jvj+53]=t[x[jvj+53]];
goto l126;
l2:if((V4<4)) goto l3;
goto l58;
l3:x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=935; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,jvj+2,jvj+3)*/
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V218; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V218,10897,V219)*/
V219=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V219; 
(*f[39])( );     /*SDX0(41,5,V219,V220)*/
V220=pile[WZ3]; 
pile[v[22]]=V220; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V220,125,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V221; pile[WZ2]=935; 
(*f[42])( );     /*SRA1(135,V221,935,V222)*/
V222=pile[WZ3]; 
pile[v[22]]=V222; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V222,58,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V223; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V223,jvj+3,V224)*/
V224=pile[WZ3]; 
pile[v[22]]=V224; 
(*f[40])( );     /*SLG0(V224)*/
l4:if((V4!=2)) goto l58;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l58;
l7:V1=V2;
l10:pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
l11:if((V11!=2)) goto l5;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l5;
l8:if((V11<4)) goto l9;
goto l5;
l9:x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,jvj+5,jvj+6)*/
V231=x[jvj+6];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V227; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V227,10897,V228)*/
V228=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V228; 
(*f[39])( );     /*SDX0(41,1,V228,V229)*/
V229=pile[WZ3]; 
pile[v[22]]=V229; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V229,125,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V231; pile[WZ2]=V230; 
(*f[39])( );     /*SDX0(20,V231,V230,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=163; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+5,K)*/
K=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=K; 
(*f[37])( );     /*SRA0(V2,K,V1)*/
V1=pile[WZ2]; 
goto l10;
l16:if((V26<4)) goto l17;
l114:x[jvj+46]=t[x[jvj+46]];
l111:if((x[jvj+46]>0)) goto l112;
x[jvj+47]=d[102];z[jvj+47]=0;
l115:if((x[jvj+47]>0)) goto l116;
x[jvj+48]=d[103];z[jvj+48]=0;
l118:if((x[jvj+48]<=0)) goto l120;
x[jvj+15]=s[x[jvj+48]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+48];
V53=g[434];
if((V53<=0)) goto l119;
V54=vg[434];
if((V54!=0)) goto l27;
if((V53<3)) goto l30;
l27:pile[v[22]]=434; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=49; pile[WZ4]=jvj+15; pile[WZ5]=(-591); pile[v[22]+6]=B; pile[v[22]+7]=jvj+16; 
(*f[187])( );     /*INTERP0(434,10897,0,49,jvj+15,(-591),B,jvj+16)*/
if((x[jvj+16]==135)) goto l29;
l119:x[jvj+48]=t[x[jvj+48]];
goto l118;
l17:x[jvj+11]=vo[12];z[jvj+11]=vz[12];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+9,jvj+11,jvj+12)*/
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V243; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V243,10897,V244)*/
V244=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V244; 
(*f[39])( );     /*SDX0(41,3,V244,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=V245; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V245,125,V246)*/
V246=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V246; pile[WZ2]=jvj+9; 
(*f[42])( );     /*SRA1(135,V246,jvj+9,V247)*/
V247=pile[WZ3]; 
pile[WZ1]=V247; pile[WZ2]=jvj+12; 
(*f[42])( );     /*SRA1(135,V247,jvj+12,V248)*/
V248=pile[WZ3]; 
pile[v[22]]=V248; 
(*f[40])( );     /*SLG0(V248)*/
l18:if((V26!=2)) goto l114;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l114;
l20:if((V35<4)) goto l21;
l97:V63=vv[33];
if((V63!=0)) goto l107;
pile[v[22]]=1056; pile[WZ1]=jvj+26; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(1056,jvj+26,jvj+40)*/
if((x[jvj+40]==0)) goto l107;
V64=g[436];
if((V64<=0)) goto l107;
V65=vg[436];
if((V65!=0)) goto l33;
if((V64<3)) goto l35;
l33:pile[v[22]]=436; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=jvj+18; 
(*f[291])( );     /*INTERP4(436,10897,0,jvj+18)*/
if((x[jvj+18]==135)) goto l34;
l107:V79=vv[33];
if((V79!=0)) goto l120;
V80=g[451];
if((V80<=0)) goto l26;
V81=vg[451];
if((V81!=0)) goto l40;
if((V80<3)) goto l42;
l40:pile[v[22]]=451; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=jvj+22; 
(*f[291])( );     /*INTERP4(451,10897,0,jvj+22)*/
if((x[jvj+22]==135)) goto l41;
l26:V43=g[433];
if((V43<=0)) goto l108;
V44=vg[433];
if((V44!=0)) goto l22;
if((V43<3)) goto l24;
l22:pile[v[22]]=433; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=(-591); pile[WZ4]=B; pile[WZ5]=jvj+14; 
(*f[232])( );     /*INTERP3(433,10897,0,(-591),B,jvj+14)*/
if((x[jvj+14]==135)) goto l23;
l108:pile[v[22]]=1296; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l109;     /*FNDC0(1296,B,X)*/
X=pile[WZ2]; 
if((X<=0)) goto l109;
V119=g[434];
if((V119<=0)) goto l109;
V120=vg[434];
if((V120!=0)) goto l54;
if((V119<3)) goto l56;
l54:pile[v[22]]=434; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=(-591); pile[WZ4]=B; pile[WZ5]=jvj+25; 
(*f[232])( );     /*INTERP3(434,10897,0,(-591),B,jvj+25)*/
if((x[jvj+25]==135)) goto l55;
l109:if(x[jvj+35]!=incon) goto l110;
l113:x[jvj+46]=d[101];z[jvj+46]=0;
goto l111;
l21:V256=x[jvj+39];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V250; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V250,10897,V251)*/
V251=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=8; pile[WZ2]=V251; 
(*f[39])( );     /*SDX0(41,8,V251,V252)*/
V252=pile[WZ3]; 
pile[v[22]]=V252; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V252,125,V253)*/
V253=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V253; pile[WZ2]=901; 
(*f[42])( );     /*SRA1(135,V253,901,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V256; pile[WZ2]=V254; 
(*f[39])( );     /*SDX0(23,V256,V254,V255)*/
V255=pile[WZ3]; 
pile[v[22]]=V255; 
(*f[40])( );     /*SLG0(V255)*/
if((V35!=2)) goto l97;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l97;
l23:if((V43<4)) goto l24;
goto l108;
l24:pile[v[22]]=1005; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1005,B,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V258)*/
V258=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V258; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V258,10897,V259)*/
V259=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=7; pile[WZ2]=V259; 
(*f[39])( );     /*SDX0(41,7,V259,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=V260; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V260,125,V261)*/
V261=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V261; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,V261,1005,V262)*/
V262=pile[WZ3]; 
pile[v[22]]=V262; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V262,61,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V47; pile[WZ2]=V263; 
(*f[39])( );     /*SDX0(41,V47,V263,V264)*/
V264=pile[WZ3]; 
pile[v[22]]=V264; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V264,(-9543),V266)*/
V266=pile[WZ2]; 
pile[v[22]]=V266; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V266,(-7127),V267)*/
V267=pile[WZ2]; 
pile[v[22]]=V267; 
(*f[40])( );     /*SLG0(V267)*/
l25:if((V43!=2)) goto l108;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l108;
l28:V50=V51;
l31:pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
l32:if((V53!=2)) goto l119;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l119;
l29:if((V53<4)) goto l30;
goto l119;
l30:pile[v[22]]=jvj+15; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(jvj+15,B,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V273)*/
V273=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V273; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V273,10897,V274)*/
V274=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V274; 
(*f[39])( );     /*SDX0(41,2,V274,V275)*/
V275=pile[WZ3]; 
pile[v[22]]=V275; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V275,125,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V276; pile[WZ2]=jvj+15; 
(*f[42])( );     /*SRA1(135,V276,jvj+15,V277)*/
V277=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V59; pile[WZ2]=V277; 
(*f[39])( );     /*SDX0(41,V59,V277,V51)*/
V51=pile[WZ3]; 
V50=incon;
if((x[jvj+15]==683)) goto l28;
x[jvj+17]=vo[12];z[jvj+17]=vz[12];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(jvj+15,jvj+17,V57)*/
V57=pile[WZ2]; 
MM=V57;
pile[v[22]]=V51; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V51,40,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=V269; pile[WZ1]=MM; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V269,MM,41,V270)*/
V270=pile[WZ3]; 
pile[v[22]]=V270; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V270,41,V50)*/
V50=pile[WZ2]; 
goto l31;
l34:if((V64<4)) goto l35;
goto l107;
l35:V286=x[jvj+40];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V280)*/
V280=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V280; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V280,10897,V281)*/
V281=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V281; 
(*f[39])( );     /*SDX0(41,4,V281,V282)*/
V282=pile[WZ3]; 
pile[v[22]]=V282; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V282,125,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V283; pile[WZ2]=1056; 
(*f[42])( );     /*SRA1(135,V283,1056,V284)*/
V284=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V286; pile[WZ2]=V284; 
(*f[39])( );     /*SDX0(23,V286,V284,V285)*/
V285=pile[WZ3]; 
pile[v[22]]=V285; 
(*f[40])( );     /*SLG0(V285)*/
if((V64!=2)) goto l107;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l107;
l37:if((V73<4)) goto l38;
l117:x[jvj+47]=t[x[jvj+47]];
goto l115;
l38:pile[v[22]]=jvj+19; pile[WZ1]=B; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(jvj+19,B,jvj+21)*/
V295=x[jvj+21];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V288)*/
V288=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V288; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V288,10897,V289)*/
V289=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=9; pile[WZ2]=V289; 
(*f[39])( );     /*SDX0(41,9,V289,V290)*/
V290=pile[WZ3]; 
pile[v[22]]=V290; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V290,125,V291)*/
V291=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V291; pile[WZ2]=jvj+19; 
(*f[42])( );     /*SRA1(135,V291,jvj+19,V292)*/
V292=pile[WZ3]; 
pile[v[22]]=V292; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V292,61,V293)*/
V293=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V295; pile[WZ2]=V293; 
(*f[39])( );     /*SDX0(20,V295,V293,V294)*/
V294=pile[WZ3]; 
pile[v[22]]=V294; 
(*f[40])( );     /*SLG0(V294)*/
l39:if((V73!=2)) goto l117;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l117;
l41:if((V80<4)) goto l42;
goto l26;
l42:x[jvj+23]=vo[12];z[jvj+23]=vz[12];
pile[v[22]]=1058; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(1058,jvj+23,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V297)*/
V297=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V297; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V297,10897,V298)*/
V298=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=10; pile[WZ2]=V298; 
(*f[39])( );     /*SDX0(41,10,V298,V299)*/
V299=pile[WZ3]; 
pile[v[22]]=V299; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V299,125,V300)*/
V300=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V300; pile[WZ2]=1058; 
(*f[42])( );     /*SRA1(135,V300,1058,V301)*/
V301=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V84; pile[WZ2]=V301; 
(*f[39])( );     /*SDX0(41,V84,V301,V302)*/
V302=pile[WZ3]; 
pile[v[22]]=V302; 
(*f[40])( );     /*SLG0(V302)*/
l43:if((V80!=2)) goto l26;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l26;
l45:V89=incon;
if(x[jvj+49]==995||x[jvj+49]==996) goto l46;
V89=10;
l47:V90=incon;
if(x[jvj+49]==27||x[jvj+49]==995) goto l48;
V90=64;
l49:pile[v[22]]=V89; pile[WZ1]=V88; pile[WZ2]=V90; 
(*f[41])( );     /*SRB0(V89,V88,V90,V87)*/
V87=pile[WZ3]; 
l52:pile[v[22]]=135; pile[WZ1]=V87; pile[WZ2]=1113; 
(*f[42])( );     /*SRA1(135,V87,1113,V309)*/
V309=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V311; pile[WZ2]=V309; 
(*f[39])( );     /*SDX0(20,V311,V309,V310)*/
V310=pile[WZ3]; 
pile[v[22]]=V310; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V310,(-9813),V312)*/
V312=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V96; pile[WZ2]=V312; 
(*f[39])( );     /*SDX0(41,V96,V312,V313)*/
V313=pile[WZ3]; 
pile[v[22]]=V313; 
(*f[40])( );     /*SLG0(V313)*/
l53:if((V92!=2)) goto l121;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l121:if(x[jvj+35]!=incon) goto l122;
l125:fflush(stdout);
v[0]=jvj; v[22]-=1; return;
l46:V89=20;
goto l47;
l48:V90=35;
goto l49;
l50:if((V92<4)) goto l51;
goto l121;
l51:pile[v[22]]=1115; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(1115,B,V96)*/
V96=pile[WZ2]; 
V311=x[jvj+49];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V306)*/
V306=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V306; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V306,10897,V307)*/
V307=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=6; pile[WZ2]=V307; 
(*f[39])( );     /*SDX0(41,6,V307,V308)*/
V308=pile[WZ3]; 
pile[v[22]]=V308; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V308,125,V88)*/
V88=pile[WZ2]; 
V87=incon;
if(x[jvj+49]==27||x[jvj+49]==995||x[jvj+49]==29||x[jvj+49]==996) goto l45;
V87=V88;
goto l52;
l55:if((V119<4)) goto l56;
goto l109;
l56:pile[v[22]]=967; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(967,B,V125)*/
V125=pile[WZ2]; 
V124=V125*1000;
V123=V124/X;
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V340)*/
V340=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V340; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V340,10897,V341)*/
V341=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V341; 
(*f[39])( );     /*SDX0(41,2,V341,V342)*/
V342=pile[WZ3]; 
pile[v[22]]=V342; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V342,125,V343)*/
V343=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V343; pile[WZ2]=1211; 
(*f[42])( );     /*SRA1(135,V343,1211,V344)*/
V344=pile[WZ3]; 
pile[WZ1]=V344; pile[WZ2]=967; 
(*f[42])( );     /*SRA1(135,V344,967,V345)*/
V345=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V123; pile[WZ2]=V345; 
(*f[39])( );     /*SDX0(41,V123,V345,V346)*/
V346=pile[WZ3]; 
pile[v[22]]=V346; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V346,(-9543),V348)*/
V348=pile[WZ2]; 
pile[v[22]]=V348; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V348,(-7127),V349)*/
V349=pile[WZ2]; 
pile[v[22]]=V349; 
(*f[40])( );     /*SLG0(V349)*/
l57:if((V119!=2)) goto l109;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l109;
l60:x[jvj+27]=t[x[jvj+27]];
l59:if((x[jvj+27]<=0)) goto l96;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=683; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(683,jvj+28,V148)*/
V148=pile[WZ2]; 
if((V148!=V149)) goto l60;
pile[v[22]]=1092; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(1092,jvj+28,jvj+37)*/
pile[v[22]]=1386; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l96;     /*FNDC1(1386,jvj+37,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=1383; pile[WZ1]=jvj+28; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(1383,jvj+28,jvj+38)*/
pile[v[22]]=1386; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l96;     /*FNDC1(1386,jvj+38,V173)*/
V173=pile[WZ2]; 
V382=x[jvj+36];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V131)*/
V131=pile[WZ2]; 
V130=incon;
if((V146<1000)) goto l61;
V130=V131;
l90:pile[v[22]]=V130; pile[WZ1]=(-9498); 
(*f[37])( );     /*SRA0(V130,(-9498),V369)*/
V369=pile[WZ2]; 
pile[v[22]]=V369; pile[WZ1]=V173; 
(*f[37])( );     /*SRA0(V369,V173,V370)*/
V370=pile[WZ2]; 
pile[v[22]]=V370; pile[WZ1]=V171; 
(*f[37])( );     /*SRA0(V370,V171,V371)*/
V371=pile[WZ2]; 
pile[v[22]]=V371; pile[WZ1]=(-9500); 
(*f[37])( );     /*SRA0(V371,(-9500),V372)*/
V372=pile[WZ2]; 
pile[v[22]]=V372; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V372,44,V373)*/
V373=pile[WZ2]; 
pile[v[22]]=V373; pile[WZ1]=(-9509); 
(*f[37])( );     /*SRA0(V373,(-9509),V374)*/
V374=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V165; pile[WZ2]=V374; 
(*f[39])( );     /*SDX0(41,V165,V374,V375)*/
V375=pile[WZ3]; 
pile[v[22]]=V375; pile[WZ1]=(-9512); 
(*f[37])( );     /*SRA0(V375,(-9512),V133)*/
V133=pile[WZ2]; 
V132=incon;
if((V165>1)) goto l62;
V132=V133;
l91:pile[v[22]]=V132; pile[WZ1]=(-9520); 
(*f[37])( );     /*SRA0(V132,(-9520),V377)*/
V377=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V169; pile[WZ2]=V377; 
(*f[39])( );     /*SDX0(41,V169,V377,V378)*/
V378=pile[WZ3]; 
pile[v[22]]=V378; pile[WZ1]=(-9522); 
(*f[37])( );     /*SRA0(V378,(-9522),V135)*/
V135=pile[WZ2]; 
V134=incon;
if((V169>1)) goto l63;
V134=V135;
l92:pile[v[22]]=V134; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V134,(-9543),V380)*/
V380=pile[WZ2]; 
pile[v[22]]=V380; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V380,(-9546),V381)*/
V381=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V382; pile[WZ2]=V381; 
(*f[39])( );     /*SDX0(20,V382,V381,V137)*/
V137=pile[WZ3]; 
V136=incon;
pile[v[22]]=163; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l64;     /*FNDC1(163,jvj+26,VV)*/
VV=pile[WZ2]; 
pile[v[22]]=V137; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V137,VV,V136)*/
V136=pile[WZ2]; 
l93:pile[v[22]]=V136; pile[WZ1]=(-9549); 
(*f[37])( );     /*SRA0(V136,(-9549),V383)*/
V383=pile[WZ2]; 
pile[v[22]]=V383; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V383,44,V384)*/
V384=pile[WZ2]; 
pile[v[22]]=V384; pile[WZ1]=(-9528); 
(*f[37])( );     /*SRA0(V384,(-9528),V385)*/
V385=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V164; pile[WZ2]=V385; 
(*f[39])( );     /*SDX0(41,V164,V385,V386)*/
V386=pile[WZ3]; 
pile[v[22]]=V386; pile[WZ1]=(-9531); 
(*f[37])( );     /*SRA0(V386,(-9531),V139)*/
V139=pile[WZ2]; 
V138=incon;
if((V164>1)) goto l65;
V138=V139;
l94:pile[v[22]]=V138; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V138,46,V141)*/
V141=pile[WZ2]; 
V140=incon;
pile[v[22]]=1335; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(1335,B,II)*/
II=pile[WZ2]; 
if((II<=0)) goto l68;
pile[v[22]]=V141; pile[WZ1]=(-12496); 
(*f[37])( );     /*SRA0(V141,(-12496),V364)*/
V364=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=II; pile[WZ2]=V364; 
(*f[39])( );     /*SDX0(41,II,V364,V365)*/
V365=pile[WZ3]; 
pile[v[22]]=V365; pile[WZ1]=(-12499); 
(*f[37])( );     /*SRA0(V365,(-12499),V143)*/
V143=pile[WZ2]; 
V142=incon;
if((II>1)) goto l66;
V142=V143;
l67:pile[v[22]]=V142; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V142,46,V140)*/
V140=pile[WZ2]; 
l69:V144=incon;
pile[v[22]]=683; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(683,jvj+26,V162)*/
V162=pile[WZ2]; 
if((V162!=8)) goto l70;
pile[v[22]]=V140; pile[WZ1]=(-12515); 
(*f[37])( );     /*SRA0(V140,(-12515),V144)*/
V144=pile[WZ2]; 
l95:pile[v[22]]=V144; pile[WZ1]=1; 
(*f[1547])( );     /*SPLO1(V144,1,V388)*/
V388=pile[WZ2]; 
pile[v[22]]=V388; 
(*f[40])( );     /*SLG0(V388)*/
pile[v[22]]=jvj+35; pile[WZ1]=V165; 
(*f[1546])( );     /*SORSYM0(jvj+35,V165)*/
l96:pile[v[22]]=901; pile[WZ1]=jvj+26; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(901,jvj+26,jvj+39)*/
if((x[jvj+39]==0)) goto l97;
V35=g[432];
if((V35<=0)) goto l97;
V36=vg[432];
if((V36!=0)) goto l19;
if((V35<3)) goto l21;
l19:pile[v[22]]=432; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=jvj+13; 
(*f[291])( );     /*INTERP4(432,10897,0,jvj+13)*/
if((x[jvj+13]==135)) goto l20;
goto l97;
l61:V152=V146%10;
V153=V146/10;
pile[v[22]]=V131; pile[WZ1]=(-9504); 
(*f[37])( );     /*SRA0(V131,(-9504),V350)*/
V350=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V153; pile[WZ2]=V350; 
(*f[39])( );     /*SDX0(41,V153,V350,V351)*/
V351=pile[WZ3]; 
pile[v[22]]=V351; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V351,46,V353)*/
V353=pile[WZ2]; 
pile[v[22]]=V353; pile[WZ1]=V152; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V353,V152,41,V354)*/
V354=pile[WZ3]; 
pile[v[22]]=V354; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V354,37,V356)*/
V356=pile[WZ2]; 
pile[v[22]]=V356; pile[WZ1]=(-9507); 
(*f[37])( );     /*SRA0(V356,(-9507),V357)*/
V357=pile[WZ2]; 
pile[v[22]]=V357; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V357,44,V130)*/
V130=pile[WZ2]; 
goto l90;
l62:pile[v[22]]=V133; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V133,83,V132)*/
V132=pile[WZ2]; 
goto l91;
l63:pile[v[22]]=V135; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V135,83,V134)*/
V134=pile[WZ2]; 
goto l92;
l64:V136=V137;
goto l93;
l65:pile[v[22]]=V139; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V139,83,V138)*/
V138=pile[WZ2]; 
goto l94;
l66:pile[v[22]]=V143; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V143,83,V142)*/
V142=pile[WZ2]; 
goto l67;
l68:V140=V141;
goto l69;
l70:V144=V140;
goto l95;
l71:V200=V195%10;
V201=V195/10;
pile[v[22]]=V179; pile[WZ1]=(-9504); 
(*f[37])( );     /*SRA0(V179,(-9504),V389)*/
V389=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V201; pile[WZ2]=V389; 
(*f[39])( );     /*SDX0(41,V201,V389,V390)*/
V390=pile[WZ3]; 
pile[v[22]]=V390; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V390,46,V392)*/
V392=pile[WZ2]; 
pile[v[22]]=V392; pile[WZ1]=V200; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V392,V200,41,V393)*/
V393=pile[WZ3]; 
pile[v[22]]=V393; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V393,37,V395)*/
V395=pile[WZ2]; 
pile[v[22]]=V395; pile[WZ1]=(-9507); 
(*f[37])( );     /*SRA0(V395,(-9507),V396)*/
V396=pile[WZ2]; 
pile[v[22]]=V396; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V396,44,V178)*/
V178=pile[WZ2]; 
l81:pile[v[22]]=V178; pile[WZ1]=73; 
(*f[249])( );     /*SPC1(V178,73,V181)*/
V181=pile[WZ2]; 
V180=incon;
if((x[jvj+33]==287)) goto l72;
V180=V181;
l82:pile[v[22]]=V180; pile[WZ1]=(-9849); 
(*f[37])( );     /*SRA0(V180,(-9849),V411)*/
V411=pile[WZ2]; 
pile[v[22]]=V411; pile[WZ1]=(-9535); 
(*f[37])( );     /*SRA0(V411,(-9535),V412)*/
V412=pile[WZ2]; 
pile[v[22]]=V412; pile[WZ1]=(-9500); 
(*f[37])( );     /*SRA0(V412,(-9500),V183)*/
V183=pile[WZ2]; 
V182=incon;
if((x[jvj+33]==68)) goto l73;
V182=V183;
l83:pile[v[22]]=V182; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V182,44,V413)*/
V413=pile[WZ2]; 
pile[v[22]]=V413; pile[WZ1]=(-9509); 
(*f[37])( );     /*SRA0(V413,(-9509),V414)*/
V414=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V215; pile[WZ2]=V414; 
(*f[39])( );     /*SDX0(41,V215,V414,V415)*/
V415=pile[WZ3]; 
pile[v[22]]=V415; pile[WZ1]=(-9512); 
(*f[37])( );     /*SRA0(V415,(-9512),V185)*/
V185=pile[WZ2]; 
V184=incon;
if((V215>1)) goto l74;
V184=V185;
l84:pile[v[22]]=V184; pile[WZ1]=(-9520); 
(*f[37])( );     /*SRA0(V184,(-9520),V417)*/
V417=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V214; pile[WZ2]=V417; 
(*f[39])( );     /*SDX0(41,V214,V417,V418)*/
V418=pile[WZ3]; 
pile[v[22]]=V418; pile[WZ1]=(-9522); 
(*f[37])( );     /*SRA0(V418,(-9522),V187)*/
V187=pile[WZ2]; 
V186=incon;
if((V214>1)) goto l75;
V186=V187;
l85:pile[v[22]]=V186; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V186,(-9543),V420)*/
V420=pile[WZ2]; 
pile[v[22]]=V420; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V420,(-9546),V421)*/
V421=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V422; pile[WZ2]=V421; 
(*f[39])( );     /*SDX0(20,V422,V421,V189)*/
V189=pile[WZ3]; 
V188=incon;
pile[v[22]]=163; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l76;     /*FNDC1(163,jvj+26,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=V189; pile[WZ1]=V177; 
(*f[37])( );     /*SRA0(V189,V177,V188)*/
V188=pile[WZ2]; 
l86:pile[v[22]]=V188; pile[WZ1]=(-9549); 
(*f[37])( );     /*SRA0(V188,(-9549),V423)*/
V423=pile[WZ2]; 
pile[v[22]]=V423; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V423,44,V424)*/
V424=pile[WZ2]; 
pile[v[22]]=V424; pile[WZ1]=(-9528); 
(*f[37])( );     /*SRA0(V424,(-9528),V191)*/
V191=pile[WZ2]; 
V190=incon;
pile[v[22]]=1015; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l77;     /*FNDC0(1015,B,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=695; 
(*f[26])( );if(v[102]) goto l77;     /*FNDC0(695,B,V210)*/
V210=pile[WZ2]; 
V209=V210/1000000;
V208=V206*10;
V207=V208+V209;
pile[v[22]]=41; pile[WZ1]=V207; pile[WZ2]=V191; 
(*f[39])( );     /*SDX0(41,V207,V191,V406)*/
V406=pile[WZ3]; 
pile[v[22]]=V406; pile[WZ1]=(-9538); 
(*f[37])( );     /*SRA0(V406,(-9538),V190)*/
V190=pile[WZ2]; 
l78:V192=incon;
pile[v[22]]=1015; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(1015,B,V194)*/
V194=pile[WZ2]; 
l80:V192=V190;
l87:pile[v[22]]=V192; pile[WZ1]=(-9531); 
(*f[37])( );     /*SRA0(V192,(-9531),V425)*/
V425=pile[WZ2]; 
pile[v[22]]=V425; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V425,83,V426)*/
V426=pile[WZ2]; 
pile[v[22]]=V426; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V426,46,V427)*/
V427=pile[WZ2]; 
pile[v[22]]=V427; pile[WZ1]=1; 
(*f[1547])( );     /*SPLO1(V427,1,V428)*/
V428=pile[WZ2]; 
pile[v[22]]=V428; 
(*f[40])( );     /*SLG0(V428)*/
pile[v[22]]=jvj+35; pile[WZ1]=V215; 
(*f[1546])( );     /*SORSYM0(jvj+35,V215)*/
l88:pile[v[22]]=1005; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l96;     /*FNDC0(1005,B,V146)*/
V146=pile[WZ2]; 
x[jvj+29]=vo[14];z[jvj+29]=vz[14];
pile[v[22]]=948; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(948,jvj+29,jvj+30)*/
if((x[jvj+30]==68)) goto l96;
l89:pile[v[22]]=493; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l96;     /*FNDC0(493,B,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l96;     /*FNDC0(936,B,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l96;     /*FNDC0(876,B,V166)*/
V166=pile[WZ2]; 
V164=V165+V166;
pile[v[22]]=109; pile[WZ1]=jvj+26; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(109,jvj+26,jvj+36)*/
pile[v[22]]=683; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l96;     /*FNDC0(683,B,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(645,597,jvj+27)*/
goto l59;
l72:pile[v[22]]=V181; pile[WZ1]=(-9852); 
(*f[37])( );     /*SRA0(V181,(-9852),V180)*/
V180=pile[WZ2]; 
goto l82;
l73:pile[v[22]]=V183; pile[WZ1]=(-9784); 
(*f[37])( );     /*SRA0(V183,(-9784),V399)*/
V399=pile[WZ2]; 
pile[v[22]]=V399; pile[WZ1]=(-9787); 
(*f[37])( );     /*SRA0(V399,(-9787),V400)*/
V400=pile[WZ2]; 
pile[v[22]]=V400; pile[WZ1]=(-9789); 
(*f[37])( );     /*SRA0(V400,(-9789),V401)*/
V401=pile[WZ2]; 
pile[v[22]]=V401; pile[WZ1]=(-9855); 
(*f[37])( );     /*SRA0(V401,(-9855),V182)*/
V182=pile[WZ2]; 
goto l83;
l74:pile[v[22]]=V185; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V185,83,V184)*/
V184=pile[WZ2]; 
goto l84;
l75:pile[v[22]]=V187; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V187,83,V186)*/
V186=pile[WZ2]; 
goto l85;
l76:V188=V189;
goto l86;
l77:V190=V191;
goto l78;
l79:pile[v[22]]=695; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(695,B,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V211; pile[WZ2]=V190; 
(*f[39])( );     /*SDX0(41,V211,V190,V192)*/
V192=pile[WZ3]; 
goto l87;
l99:V98=V99;
l102:pile[v[22]]=41; pile[WZ1]=V100; pile[WZ2]=V98; 
(*f[39])( );     /*SDX0(41,V100,V98,V322)*/
V322=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V322; pile[WZ2]=53; 
(*f[42])( );     /*SRA1(135,V322,53,V324)*/
V324=pile[WZ3]; 
pile[v[22]]=V324; pile[WZ1]=(-7440); 
(*f[37])( );     /*SRA0(V324,(-7440),V325)*/
V325=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V325; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V325,493,V326)*/
V326=pile[WZ3]; 
pile[v[22]]=V326; 
(*f[40])( );     /*SLG0(V326)*/
if((V103!=2)) goto l113;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l113;
l100:if((V103<4)) goto l101;
goto l113;
l101:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V317)*/
V317=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V317; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V317,10897,V318)*/
V318=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=11; pile[WZ2]=V318; 
(*f[39])( );     /*SDX0(41,11,V318,V319)*/
V319=pile[WZ3]; 
pile[v[22]]=V319; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V319,125,V320)*/
V320=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V320; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(10,V320,43,V321)*/
V321=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V321; pile[WZ2]=844; 
(*f[42])( );     /*SRA1(135,V321,844,V99)*/
V99=pile[WZ3]; 
V98=incon;
pile[v[22]]=1364; pile[WZ1]=jvj+35; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(1364,jvj+35,jvj+42)*/
if((x[jvj+42]!=67)) goto l99;
pile[v[22]]=V99; pile[WZ1]=(-7494); 
(*f[37])( );     /*SRA0(V99,(-7494),V98)*/
V98=pile[WZ2]; 
goto l102;
l104:if((V110<4)) goto l105;
l124:x[jvj+50]=t[x[jvj+50]];
l123:if((x[jvj+50]<=0)) goto l125;
x[jvj+43]=s[x[jvj+50]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+50];
V110=g[477];
if((V110<=0)) goto l124;
V111=vg[477];
if((V111!=0)) goto l103;
if((V110<3)) goto l105;
l103:pile[v[22]]=477; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=jvj+43; pile[WZ5]=jvj+44; 
(*f[232])( );     /*INTERP3(477,10897,0,(-620),jvj+43,jvj+44)*/
if((x[jvj+44]==135)) goto l104;
goto l124;
l105:pile[v[22]]=117; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l106;     /*FNDC0(117,jvj+43,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(447,jvj+43,jvj+45)*/
V335=x[jvj+45];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V328)*/
V328=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V328; pile[WZ2]=10897; 
(*f[98])( );     /*SRA3(135,V328,10897,V329)*/
V329=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=12; pile[WZ2]=V329; 
(*f[39])( );     /*SDX0(41,12,V329,V330)*/
V330=pile[WZ3]; 
pile[v[22]]=V330; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V330,125,V331)*/
V331=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V331; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,V331,21,V332)*/
V332=pile[WZ3]; 
pile[WZ1]=V332; pile[WZ2]=66; 
(*f[42])( );     /*SRA1(135,V332,66,V333)*/
V333=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V335; pile[WZ2]=V333; 
(*f[39])( );     /*SDX0(20,V335,V333,V334)*/
V334=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V114; pile[WZ2]=V334; 
(*f[39])( );     /*SDX0(41,V114,V334,V336)*/
V336=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V336; pile[WZ2]=355; 
(*f[42])( );     /*SRA1(135,V336,355,V338)*/
V338=pile[WZ3]; 
pile[v[22]]=V338; 
(*f[40])( );     /*SLG0(V338)*/
l106:if((V110!=2)) goto l124;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l124;
l110:pile[v[22]]=1190; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l113;     /*FNDC0(1190,jvj+35,V101)*/
V101=pile[WZ2]; 
V100=V101+1;
if((V100<=1)) goto l113;
V103=g[474];
if((V103<=0)) goto l113;
V104=vg[474];
if((V104!=0)) goto l98;
if((V103<3)) goto l101;
l98:pile[v[22]]=474; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=jvj+41; 
(*f[291])( );     /*INTERP4(474,10897,0,jvj+41)*/
if((x[jvj+41]==135)) goto l100;
goto l113;
l112:x[jvj+9]=s[x[jvj+46]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+46];
V26=g[431];
if((V26<=0)) goto l114;
V27=vg[431];
if((V27!=0)) goto l15;
if((V26<3)) goto l17;
l15:pile[v[22]]=431; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=(-605); pile[WZ4]=jvj+9; pile[WZ5]=jvj+10; 
(*f[232])( );     /*INTERP3(431,10897,0,(-605),jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l16;
goto l114;
l116:x[jvj+19]=s[x[jvj+47]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+47];
V73=g[437];
if((V73<=0)) goto l117;
V74=vg[437];
if((V74!=0)) goto l36;
if((V73<3)) goto l38;
l36:pile[v[22]]=437; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=71; pile[WZ4]=jvj+19; pile[WZ5]=(-591); pile[v[22]+6]=B; pile[v[22]+7]=jvj+20; 
(*f[187])( );     /*INTERP0(437,10897,0,71,jvj+19,(-591),B,jvj+20)*/
if((x[jvj+20]==135)) goto l37;
goto l117;
l120:pile[v[22]]=1113; pile[WZ1]=B; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l121;     /*FNDO0(1113,B,jvj+49)*/
V92=g[435];
if((V92<=0)) goto l121;
V93=vg[435];
if((V93!=0)) goto l44;
if((V92<3)) goto l51;
l44:pile[v[22]]=435; pile[WZ1]=10897; pile[WZ2]=0; pile[WZ3]=jvj+24; 
(*f[291])( );     /*INTERP4(435,10897,0,jvj+24)*/
if((x[jvj+24]==135)) goto l50;
goto l121;
l122:pile[v[22]]=1209; pile[WZ1]=jvj+35; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(1209,jvj+35,jvj+50)*/
goto l123;
l127:x[jvj+35]=x[jvj+54] ;z[jvj+35]=z[jvj+54];
x[jvj+31]=vo[14];z[jvj+31]=vz[14];
pile[v[22]]=948; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(948,jvj+31,jvj+32)*/
if((x[jvj+32]!=68)) goto l88;
pile[v[22]]=1005; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l88;     /*FNDC0(1005,B,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=948; pile[WZ1]=jvj+26; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(948,jvj+26,jvj+33)*/
if(x[jvj+33]!=68&&x[jvj+33]!=287) goto l88;
pile[v[22]]=936; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l88;     /*FNDC0(936,B,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l88;     /*FNDC0(493,B,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+26; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(109,jvj+26,jvj+34)*/
V422=x[jvj+34];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V179)*/
V179=pile[WZ2]; 
V178=incon;
if((V195<1000)) goto l71;
V178=V179;
goto l81;
}
