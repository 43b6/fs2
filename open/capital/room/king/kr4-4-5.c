// Room: /open/capital/room/king/kr4-4-5.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���鷿");
  set ("long", @LONG
�����������ƽ��ʱ��칫�ĵط���ͬʱҲ���������ټ����д�
�����ֹ��Ҵ��£�Ҳ��Ϊ����ƽ�����ڴ˵أ�����������Ž��൱��
ɭ�ϣ����û����ټ����ǲ���������ġ�
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"kr4-4-4.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/room/king/npc/king" :1,
]));

  setup();
}
void init()
{
        add_action("do_exert","exert");
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"�ʹ����������Ķ���˵:�ʳǽ�������������������������!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
