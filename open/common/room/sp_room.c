// Room: /u/c/chan/room/sp_room.c
inherit ROOM;

void create ()
{
  set ("short", "����������ʦ�����");
  set ("long", @LONG
����ռ�(Fantasy Space)�Գ������й��ܶ����ʦ(wizard)�����﷢չ��
��������ܸ�л����Э�������������ﻨ���˺ܶ���˼ʹ�������!!����Ϊ��
�������ǵľ���!!�����ǵ�ID������,��������!!!
1.Wade (��վ����)  2.Fund      3.Lum       4.Konn
5.Urd              6.Weiwei    7.Airke     8.Rence
9.bigcat          10.ccat     11.Assassin 12.Kael
13.Arthur         14.babe     15.Santo    16.xboy
17.houng          18.hide     19.cccc     20.daniel
21.Roger *        22.Acelan * 23.Wataru * 24.Leei *
25.ookami         26.Swy *    27.Superobs * 28.poloer *
29.kabn *         30.Cgy *    31.elon    32.mineral
33.een            34.floe     35.hades     36.jcder
37.jesse          38.mad      39.server  40.spirits
41.shorst         42.wasami   43.onion

ps:*����Ŀǰ����.....
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" :__DIR__"inn",
]));
  set("light_up", 1);

  setup();
}
