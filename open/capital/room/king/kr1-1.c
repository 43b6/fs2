
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������ǵ����̫�����̫����޹�����Ϊ�����Ѵ�����̫��
�󲿷ݵ�ʱ�䶼�����޹�����Ϣ��ż��������������̫������һ�£�
����֮�⣬����ÿ���糿���ϻ����밲�ˡ�������ȴ����̫��ķ���
����һ�ѵ���ʹ��²�͸�ǰѵ���������ʲô�ġ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/kmother" : 1,
  "/open/capital/npc/kingirl" : 2,
]));
  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr2-3",
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
