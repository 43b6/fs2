// ~babe~ (Сѩ��) ^O^
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����һƬ�������������,��֧«έ��֦����,ȴ�ڸǲ�ס
�������������,��㸡ƼƯ�ڵ������ˮ��,��޲��øҿ�
�뿪,�����㷢�������Ա���һ�����ɹֵֹġ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/main/room/p6",
  "west" : "/open/main/room/p11",
  "south" : "/open/main/room/p18",
]));

  set("outdoors", "/open/main");

  setup();
set("search_desc", ([ /* sizeof() == 1 */
"trunk" : HIM"������д��ʮ��а��˲���ƶ����ķ�(star)��\n"NOR,
]));
}

void init()
{
  add_action("babe_home","star");
}
int babe_home( string str )
{
  object babe = this_player();
  message_vision(HIW"$N��"HIC"�ŵ���Ů��"HIW"����"HIY"ף��"HIW"��˲��������һ���â��\n",babe);
//babe->move("/open/clan/evil/evil.c");
  message_vision("��$N����Ӱ��"HIY"��â"NOR"���߳���"HIW"��HIC"��HIW"��HIC"��NOR"��"HIB"а��"NOR"˲ʱΧ����$N�������ܡ�\n",babe);
  return 1;
}
