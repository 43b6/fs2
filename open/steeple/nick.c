inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "Title �����");
  set ("long", @LONG
�����������޸ĳɾ���ս������֮�������ǵķ��
��ֻ�����߿��Խ��и��ģ�������change title��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ticket",
]));

  setup();
}

void init()
{
add_action("do_change_title","change");
}

int do_change_title(string arg)
{
object me=this_player();
if(!arg||arg!="title")
return 0;
if(!me->query("quest/start_game_prize"))
{
tell_object(me,"������˵��������û�иĹ�title��\n");
return 1;
}
if(me->query("class")!="fighter")
{
tell_object(me,"�����裺�㲻������...�Ҳ������title��\n");
return 1;
}
else
{
me->delete("quest/start_game_prize");
me->set("title",HIY"��������"NOR);
tell_object(me,"�ƺųƸĳɹ���\n");
return 1;
}
}
