#include <room.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���Ƶ��Է�");
  set ("long", @LONG

�������У��㱻��ǰ��̻Ի͵�װ��������, ������Ƕ��Ƶ�����,
ǽ�����ҵ��ֻ���һ���ǵ������һ�������ʦ����, ���������ҵ���
Ʒ, ���Ǵ��ڻʹ�����, ֻ��ҲԶԶ������

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"np23",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan-wife.c" : 1,
]));
  set("light_up", 1);

 create_door("south","����̴ľ��","north",DOOR_CLOSED);
  setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_turn", "turn");
}
int do_search()
{
        object who;
        who = this_player();
        if(who->query("now_start")==1)
{
        tell_object(who,"\n���Ĵ����������֩z����{������Է�ת��\n\n");
}
else
        tell_object(who,"Ҷ��˵����������ʲô???�뵱����?????\n");
        return 1;
}
int do_turn(string str)
{
       object who = this_player();
        if(who->query("now_start")==1)
        {
       if(str=="����")
       {
       tell_object(who,"\n���𶯻��أ����һ���Եĵ��˽�ȥ��\n\n");
        who->move("/open/ping/questsfan/room1");
       tell_room(this_object(),who->query("name")+"��֪������ʲô����, ͻȻ��ʧ�ˡ�\n");
        }
        return 1;
}
else
        return 0;
}

