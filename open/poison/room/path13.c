// Room: /open/poison/room/path13
#include <ansi.h>
#include <room.h>

inherit ROOM;
void create ()
{
  set ("short", "�η�");
  set ("long", @LONG
�������ʯ�����ڵأ��ɴ˿�ȥ�ɿ��������η�������
����һ�ܷ����ţ�������һ��ֻ��һСС���ڵĺ����ţ���
������һ���η�����һ���������룬�˵ؼ�Ϊ��ɭ�ֲ���
LONG);

  set("item_desc", ([ /* sizeof() == 3 */
  "south" : (: look_door,     "south" :),
  "north" : (: look_door,     "north" :),
  "east" : (: look_door,     "east" :),
]));
  set("exits", ([ /* sizeof() == 4 */
  "westup" : __DIR__"path12",
  "north" : __DIR__"room19",
  "south" : __DIR__"room20",
  "east" : __DIR__"room22.c",
]));
  create_door("south",HIR"��ɫ����"NOR,"north",DOOR_LOCKED);
  create_door("north",HIB"��ɫ����"NOR,"south",DOOR_LOCKED);
  set("need_key", ([ /* sizeof() == 3 */
  "south" : 1,
  "north" : 1,
  "east" : 1,
]));

  setup();
}
void init()
{
  object me = this_player();
  if(me->query_temp("poison_help")==2) {
        remove_call_out("greeting");
        call_out("greeting",1,me);
      }
}
void greeting(object me)
{
  tell_object(me,HIC"���������洫�������������\n");
  tell_object(me,HIC"�ȡ����ҡ���������ȥ����\n");
  if(!present("red key",me)) {
        remove_call_out("greeting2");
        call_out("greeting2",1,me);
      }
}
void greeting2(object me)
{
  me->set_temp("poison_help",3);
  tell_object(me,HIC"��! ��û��Կ��ѽ! �Ͽ�ȥ�򹴻�ʹ�ð�! \n");
  tell_object(me,HIC"ֻҪ����ҳ�ȥ�Ҿ͸�����һЩ���ܡ�\n");
}
